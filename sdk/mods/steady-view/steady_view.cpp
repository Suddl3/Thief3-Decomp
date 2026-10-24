// Steady first-person view: three fixes for a camera that is tied too closely
// to Garrett's animated body (docs/engine.md, "First-person camera").
//
// - Eye: the first-person eye is the "Camera Attach" bone of Garrett's
//   skeleton, so every animation moves the view: breathing, the walk bob,
//   the jump (the eye rises 8 units above his centre in the air), the climb
//   (it swings over 30 units) and the landing. Here the eye stays at a resting
//   spot relative to Garrett and the way he looks (height, forward, side).
//   On the ground that spot slowly follows the bone's average place, which
//   changes with his stance (standing, moving, crouching); while he moves up
//   or down (jumping, falling, climbing) it holds still. A little of the
//   animation's motion stays on top, as head bob.
// - Snaps: on touching the ground Garrett's physics body drops about 19 units
//   in one frame (its airborne shape becomes its standing one), then settles.
//   The eye keeps to the path his vertical speed predicted and eases into the
//   new height, so a landing or the top of a climb no longer jolts the view.
// - Turning: once Garrett moves, his body turns toward the view at about
//   302 degrees a second, and movement input is applied in the body's frame,
//   so walking off at an angle curves. The turn rate is a constant; it is
//   raised so the body faces the view at once (or set to any speed).
// - Clipping: the scene is drawn with its near plane 1 unit from the eye, and
//   the bow and held items, drawn with the world, cut into it (more so with a
//   wider FOV). The near plane is moved closer.
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cmath>
#include <cstdint>
#include <cstdio>
#include <iterator>

namespace {

// ---- game addresses -----------------------------------------------------------------

// FVector* __thiscall AGarrett::GetCameraTargetLocation(FVector* out): the "Camera Attach" bone's world
// position (Location without one), pulled back from walls along the view.
constexpr uintptr_t kGetCameraTargetLocation = 0x10B21830;

// float: the body's turn rate toward the view while moving, in rotation units (65536 a turn) per second,
// read only by the body-turn function (0x10B19300).
constexpr uintptr_t kBodyTurnRate = 0x10E793FC;
constexpr float kGameTurnRate = 55000.0f;

// The near-plane distance the scene render (0x109FCF10) pushes for each pass: `push 1.0` immediates.
constexpr uintptr_t kNearPlanes[] = {0x109FD10E, 0x109FD3FD, 0x109FD54E, 0x109FD5FC};
constexpr float kGameNearPlane = 1.0f;

// AActor / APawn / AGarrett fields.
constexpr uint32_t kLocation = 0x2C;
constexpr uint32_t kVelocity = 0x44;
constexpr uint32_t kBodyYaw = 0x3C;
constexpr uint32_t kBaseEyeHeight = 0x118;
constexpr uint32_t kEyeHeight = 0x11C;
constexpr uint32_t kViewYaw = 0x404;           // HeadRot.Yaw: where Garrett looks
constexpr uint32_t kGarrettFlags = 0x450;      // bit 1: crouching
constexpr uint32_t kThirdPersonFlags = 0x490;  // bit 0: bIn3rdPersonMode

// Rotation units per degree, and per radian.
constexpr float kUnitsPerDegree = 65536.0f / 360.0f;
constexpr float kRadiansPerUnit = 6.2831853f / 65536.0f;

// ---- settings -----------------------------------------------------------------------

struct Settings {
    // How long the resting eye spot takes to follow a change of stance, in seconds (0 = the eye rides the bone).
    float smoothing = 0.25f;

    // How much of the animation's motion stays on top of the resting spot, 0 to 1.
    float headBob = 0.15f;

    // How long the eye takes to settle after Garrett's body snaps to a new height, in seconds (0 = at once).
    float landing = 0.12f;

    // Body turn speed in degrees a second while moving; 0 = at once.
    float turnSpeed = 0.0f;

    // The near plane's distance from the eye, in Unreal units.
    float nearPlane = 0.5f;

    // Write every camera update to steady-view-trace.csv (debugging).
    bool trace = false;
};

Settings g_settings;

// ---- the eye ---------------------------------------------------------------------------

struct FVector {
    float x, y, z;
};

using GetCameraTargetLocationFn = FVector*(__fastcall*)(void* pawn, void* edx, FVector* out);

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// The original GetCameraTargetLocation (MinHook trampoline).
GetCameraTargetLocationFn g_getCameraTargetLocation = nullptr;

// Above this vertical speed (units a second) Garrett is jumping, falling or climbing: the resting spot holds.
constexpr float kSteadySpeed = 20.0f;

// A height change this far (units) from what his vertical speed predicted, plus 150 units a second of frame
// time, is a snap of the physics body (a landing, a stair step), not motion.
constexpr float kSnapDistance = 1.5f;
constexpr float kSnapPerSecond = 150.0f;

// A snap or change larger than this (units) is a teleport or a new level: start afresh.
constexpr float kTeleport = 100.0f;

// What the eye keeps from one camera update to the next.
struct EyeState {
    bool tracking = false;

    // Garrett's height at the last update, and his vertical speed as the last frames showed it.
    float lastZ = 0.0f;
    float speedZ = 0.0f;

    // How far the eye stays above (or below) his new height after a snap; eases back to 0.
    float snap = 0.0f;

    // The resting spot, relative to Garrett and the way he looks: forward, to the side, up.
    float forward = 0.0f;
    float side = 0.0f;
    float up = 0.0f;

    LARGE_INTEGER last = {};
};

EyeState g_eye;

// Seconds since the last call, at most 0.1 (a paused game, a loading screen).
float SinceLastCall() {
    LARGE_INTEGER now;
    LARGE_INTEGER frequency;
    QueryPerformanceCounter(&now);
    QueryPerformanceFrequency(&frequency);
    float dt = float(double(now.QuadPart - g_eye.last.QuadPart) / double(frequency.QuadPart));
    g_eye.last = now;
    return dt < 0.1f ? dt : 0.1f;
}

// The share of the way to a target that `dt` covers with time constant `tau` (all of it when tau is 0).
float Approach(float dt, float tau) {
    return tau > 0.0f ? 1.0f - std::exp(-dt / tau) : 1.0f;
}

// ---- camera trace (debugging) ------------------------------------------------------------

// The most lines the trace writes, about 20 minutes at 165 frames a second.
constexpr int kMaxTraceLines = 200000;

// steady-view-trace.csv next to the DLL, while [Debug] TraceCamera is on.
FILE* g_trace = nullptr;
int g_traceLines = 0;

// Opens the trace and writes its header.
void OpenTrace() {
    g_trace = _wfopen(t3mod::ModFile(L"-trace.csv").c_str(), L"w");

    // Without the file there is no trace; the mod works the same.
    if (g_trace) {
        std::fputs(
            "t_ms,dt_ms,x,y,z,vx,vy,vz,eye_x,eye_y,eye_z,out_x,out_y,out_z,base_eye,eye_height,flags,body_yaw,"
            "view_yaw,speed_z,snap\n",
            g_trace);
    }
}

// One line per camera update: what the game gave and what the mod made of it.
void Trace(void* pawn, float dt, const FVector& raw, const FVector& out) {
    // Stop at the size limit: the file is for a short test.
    if (!g_trace || g_traceLines >= kMaxTraceLines) {
        return;
    }

    LARGE_INTEGER now;
    LARGE_INTEGER frequency;
    QueryPerformanceCounter(&now);
    QueryPerformanceFrequency(&frequency);
    const FVector& at = t3mod::Field<FVector>(pawn, kLocation);
    const FVector& v = t3mod::Field<FVector>(pawn, kVelocity);
    std::fprintf(g_trace,
                 "%.3f,%.3f,%.3f,%.3f,%.3f,%.2f,%.2f,%.2f,%.3f,%.3f,%.3f,%.3f,%.3f,%.3f,%.2f,%.2f,%u,%d,%d,%.2f,%.3f\n",
                 double(now.QuadPart) * 1000.0 / double(frequency.QuadPart), dt * 1000.0f, at.x, at.y, at.z, v.x, v.y,
                 v.z, raw.x, raw.y, raw.z, out.x, out.y, out.z, t3mod::Field<float>(pawn, kBaseEyeHeight),
                 t3mod::Field<float>(pawn, kEyeHeight), t3mod::Field<uint32_t>(pawn, kGarrettFlags),
                 t3mod::Field<int>(pawn, kBodyYaw), t3mod::Field<int>(pawn, kViewYaw), g_eye.speedZ, g_eye.snap);
    ++g_traceLines;

    // Flush now and then, so a crash or a quit keeps most of it.
    if (g_traceLines % 256 == 0) {
        std::fflush(g_trace);
    }
}

// ---- the hook --------------------------------------------------------------------------

FVector* __fastcall GetCameraTargetLocationDetour(void* pawn, void* edx, FVector* out) {
    FVector* eye = g_getCameraTargetLocation(pawn, edx, out);
    float dt = SinceLastCall();
    FVector raw = *eye;

    // Third person keeps the game's camera; start afresh when first person comes back.
    if (t3mod::Field<uint32_t>(pawn, kThirdPersonFlags) & 1) {
        g_eye.tracking = false;
        Trace(pawn, dt, raw, *eye);
        return eye;
    }

    const FVector& body = t3mod::Field<FVector>(pawn, kLocation);
    float yaw = float(t3mod::Field<int>(pawn, kViewYaw)) * kRadiansPerUnit;
    float c = std::cos(yaw);
    float s = std::sin(yaw);

    // The bone's place relative to Garrett and the way he looks.
    float dx = raw.x - body.x;
    float dy = raw.y - body.y;
    float forward = dx * c + dy * s;
    float side = dy * c - dx * s;
    float up = raw.z - body.z;

    // The first update, or a teleport: take the bone's place as the resting spot.
    if (!g_eye.tracking || std::fabs(body.z - g_eye.lastZ) > kTeleport) {
        g_eye = {true, body.z, 0.0f, 0.0f, forward, side, up, g_eye.last};
    }

    // A second call in the same frame (the game asks more than once) changes nothing: only a frame moves the state.
    if (dt > 0.0005f) {
        float dz = body.z - g_eye.lastZ;
        float error = dz - g_eye.speedZ * dt;
        g_eye.lastZ = body.z;

        // The body jumped away from where its speed was taking it: keep the eye on that path, and ease it over.
        if (std::fabs(error) > kSnapDistance + kSnapPerSecond * dt) {
            g_eye.snap -= error;
        } else {
            g_eye.speedZ += (dz / dt - g_eye.speedZ) * Approach(dt, 0.04f);
        }

        g_eye.snap *= 1.0f - Approach(dt, g_settings.landing);

        // A snap that never settles (a lift, a teleport the check missed) is let go.
        if (std::fabs(g_eye.snap) > kTeleport) {
            g_eye.snap = 0.0f;
        }

        // On the ground the resting spot follows the bone's average place; in the air or climbing it holds.
        if (std::fabs(g_eye.speedZ) < kSteadySpeed) {
            float k = Approach(dt, g_settings.smoothing);
            g_eye.forward += (forward - g_eye.forward) * k;
            g_eye.side += (side - g_eye.side) * k;
            g_eye.up += (up - g_eye.up) * k;
        }
    }

    // The resting spot, with a share of the animation's motion as head bob.
    float f = g_eye.forward + g_settings.headBob * (forward - g_eye.forward);
    float r = g_eye.side + g_settings.headBob * (side - g_eye.side);
    float u = g_eye.up + g_settings.headBob * (up - g_eye.up);

    // The game pulls the eye back from a wall in front: on the ground, follow it there.
    if (forward < f && std::fabs(g_eye.speedZ) < kSteadySpeed) {
        f = forward;
    }

    eye->x = body.x + f * c - r * s;
    eye->y = body.y + f * s + r * c;
    eye->z = body.z + u + g_eye.snap;

    Trace(pawn, dt, raw, *eye);
    return eye;
}

// ---- setup ----------------------------------------------------------------------------

void ReadSettings() {
    std::wstring ini = t3mod::SettingsFile();
    g_settings.smoothing = t3mod::ReadFloat(ini, L"View", L"Smoothing", 250.0f, 0.0f, 2000.0f) / 1000.0f;
    g_settings.headBob = t3mod::ReadFloat(ini, L"View", L"HeadBob", 0.15f, 0.0f, 1.0f);
    g_settings.landing = t3mod::ReadFloat(ini, L"View", L"LandingSmoothing", 120.0f, 0.0f, 1000.0f) / 1000.0f;
    g_settings.turnSpeed = t3mod::ReadFloat(ini, L"Turning", L"BodyTurnSpeed", 0.0f, 0.0f, 3600.0f);
    g_settings.nearPlane = t3mod::ReadFloat(ini, L"Clipping", L"NearClip", 0.5f, 0.05f, 1.0f);
    g_settings.trace = t3mod::ReadBool(ini, L"Debug", L"TraceCamera", false);
}

}  // namespace

// Called by the SDK when the mod is loaded. Each part that is set to change
// something is applied on its own; returns non-zero (the mod unloads) when none is.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;
    ReadSettings();
    int applied = 0;

    // Eye: smoothing 0 leaves the camera on the bone, as the game has it.
    if (g_settings.smoothing > 0.0f) {
        bool hooked =
            t3mod::Hook(api, kGetCameraTargetLocation, reinterpret_cast<void*>(&GetCameraTargetLocationDetour),
                        reinterpret_cast<void**>(&g_getCameraTargetLocation), "camera target location");

        // A missing hook leaves the eye as the game has it; the other parts still apply.
        if (hooked) {
            api->Log("steady eye: stance follows over %.0f ms, %.0f%% head bob, landings settle over %.0f ms",
                     g_settings.smoothing * 1000.0f, g_settings.headBob * 100.0f, g_settings.landing * 1000.0f);
            ++applied;
        }

        // The trace records in the eye hook.
        if (hooked && g_settings.trace) {
            OpenTrace();
            api->Log("tracing the camera to steady-view-trace.csv");
        }
    }

    // Turning: 0 is "at once", which a rate far above any frame's turn gives.
    float rate = g_settings.turnSpeed > 0.0f ? g_settings.turnSpeed * kUnitsPerDegree : 1.0e7f;

    // The game's own 302 degrees a second needs no patch.
    if (rate != kGameTurnRate && t3mod::Patch(api, kBodyTurnRate, kGameTurnRate, rate, "body turn rate")) {
        // Say which of the two the setting asked for.
        if (g_settings.turnSpeed > 0.0f) {
            api->Log("body turns at %.0f degrees a second", g_settings.turnSpeed);
        } else {
            api->Log("body faces the view at once");
        }

        ++applied;
    }

    // Clipping: the four render passes share the near plane; patch all or report the ones that differ.
    if (g_settings.nearPlane != kGameNearPlane) {
        int patched = 0;

        // Each pass pushes its own copy of the near-plane distance.
        for (uintptr_t address : kNearPlanes) {
            patched += t3mod::Patch(api, address, kGameNearPlane, g_settings.nearPlane, "near plane") ? 1 : 0;
        }

        // Count the clipping fix as applied only if every pass got the new distance.
        if (patched == int(std::size(kNearPlanes))) {
            api->Log("near plane at %.2f units", g_settings.nearPlane);
            ++applied;
        }
    }

    return applied ? 0 : 1;
}
