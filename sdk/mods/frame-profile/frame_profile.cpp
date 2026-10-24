// A development tool, not part of the fix pack: times where each frame goes,
// to tell whether the game's own work or getting the frame to the screen
// makes frames late.
//
// Per frame (one UT3GameEngine::Tick) it writes a line to frame-profile.csv
// next to the DLL: the time since the last frame began, the whole tick, the
// Havok physics world step within it, and the time between the last tick's
// end and this one's start (presenting the frame, waiting for VSync, the rest
// of the main loop). What the tick spends outside physics is game logic and
// the client: actors, AI, animation, scripts, sound, building the scene. Every
// 10 seconds it logs the averages and the 95th percentiles to T3SDK.log.
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <vector>

namespace {

// ---- game addresses -----------------------------------------------------------------

// void __thiscall UT3GameEngine::Tick(float dt): the world, the client, the window manager.
constexpr uintptr_t kEngineTick = 0x1098A410;

// void __thiscall PhysicsWorld::Step(float dt): steps Havok's rigid bodies at a fixed 1/60 s.
constexpr uintptr_t kPhysicsStep = 0x10D9E840;

using TickFn = void(__fastcall*)(void* self, void* edx, float dt);

// ---- state ----------------------------------------------------------------------------

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// The originals (MinHook trampolines).
TickFn g_engineTick = nullptr;
TickFn g_physicsStep = nullptr;

LARGE_INTEGER g_frequency = {};

// Counter ticks spent in the physics step during the current frame.
LONGLONG g_physicsTicks = 0;

// When the last tick began and ended.
LONGLONG g_lastStart = 0;
LONGLONG g_lastEnd = 0;

// frame-profile.csv, and the frames of the current 10-second period for the summary.
FILE* g_csv = nullptr;
int g_lines = 0;

struct Frame {
    float interval;
    float tick;
    float physics;
    float outside;
};

std::vector<Frame> g_period;
LONGLONG g_periodStart = 0;

// The most lines the file gets, about 30 minutes at 165 frames a second.
constexpr int kMaxLines = 300000;

// ---- helpers --------------------------------------------------------------------------

LONGLONG Now() {
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    return now.QuadPart;
}

float Milliseconds(LONGLONG ticks) {
    return float(double(ticks) * 1000.0 / double(g_frequency.QuadPart));
}

// The value below which `share` of the values lie.
float Percentile(std::vector<float> values, float share) {
    std::sort(values.begin(), values.end());
    return values.empty() ? 0.0f : values[size_t(float(values.size() - 1) * share)];
}

float Mean(const std::vector<float>& values) {
    float sum = 0.0f;

    // Add the values up.
    for (float x : values) {
        sum += x;
    }

    return values.empty() ? 0.0f : sum / float(values.size());
}

// Logs the period's averages and 95th percentiles.
void LogPeriod(LONGLONG now) {
    std::vector<float> interval;
    std::vector<float> tick;
    std::vector<float> physics;
    std::vector<float> logic;
    std::vector<float> outside;

    // Split the frames into one list per measure.
    for (const Frame& f : g_period) {
        interval.push_back(f.interval);
        tick.push_back(f.tick);
        physics.push_back(f.physics);
        logic.push_back(f.tick - f.physics);
        outside.push_back(f.outside);
    }

    g_api->Log(
        "%zu frames in %.1f s: frame %.2f ms (95%% %.2f) = tick %.2f (%.2f) [physics %.2f (%.2f), rest %.2f "
        "(%.2f)] + present and loop %.2f (%.2f)",
        g_period.size(), Milliseconds(now - g_periodStart) / 1000.0f, Mean(interval), Percentile(interval, 0.95f),
        Mean(tick), Percentile(tick, 0.95f), Mean(physics), Percentile(physics, 0.95f), Mean(logic),
        Percentile(logic, 0.95f), Mean(outside), Percentile(outside, 0.95f));
    g_period.clear();
    g_periodStart = now;
}

// ---- detours --------------------------------------------------------------------------

void __fastcall PhysicsStepDetour(void* self, void* edx, float dt) {
    LONGLONG start = Now();
    g_physicsStep(self, edx, dt);
    g_physicsTicks += Now() - start;
}

void __fastcall EngineTickDetour(void* self, void* edx, float dt) {
    LONGLONG start = Now();
    g_physicsTicks = 0;
    g_engineTick(self, edx, dt);
    LONGLONG end = Now();

    Frame f{g_lastStart ? Milliseconds(start - g_lastStart) : 0.0f, Milliseconds(end - start),
            Milliseconds(g_physicsTicks), g_lastEnd ? Milliseconds(start - g_lastEnd) : 0.0f};
    g_lastStart = start;
    g_lastEnd = end;

    // One line per frame, until the size limit.
    if (g_csv && g_lines < kMaxLines) {
        std::fprintf(g_csv, "%.3f,%.3f,%.3f,%.3f,%.3f,%.3f\n", Milliseconds(start), f.interval, dt * 1000.0f, f.tick,
                     f.physics, f.outside);
        ++g_lines;

        // Flush now and then, so a quit keeps most of it.
        if (g_lines % 256 == 0) {
            std::fflush(g_csv);
        }
    }

    g_period.push_back(f);

    // The summary every 10 seconds.
    if (Milliseconds(end - g_periodStart) >= 10000.0f) {
        LogPeriod(end);
    }
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero when a hook cannot be placed.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;
    QueryPerformanceFrequency(&g_frequency);
    g_periodStart = Now();

    bool ok = t3mod::Hook(api, kEngineTick, reinterpret_cast<void*>(&EngineTickDetour),
                          reinterpret_cast<void**>(&g_engineTick), "engine tick") &&
              t3mod::Hook(api, kPhysicsStep, reinterpret_cast<void*>(&PhysicsStepDetour),
                          reinterpret_cast<void**>(&g_physicsStep), "physics step");

    // Without both hooks the numbers would mislead.
    if (!ok) {
        return 1;
    }

    g_csv = _wfopen(t3mod::ModFile(L".csv").c_str(), L"w");

    // The summaries in the log work without the file.
    if (g_csv) {
        std::fputs("t_ms,frame_ms,game_dt_ms,tick_ms,physics_ms,outside_ms\n", g_csv);
    }

    api->Log("profiling frames: tick, physics, present and loop (frame-profile.csv)");
    return 0;
}
