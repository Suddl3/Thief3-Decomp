// Steady first-person view: three fixes for a camera that is tied too closely
// to Garrett's animated body (docs/engine.md, "First-person camera").
//
// - Eye: the first-person eye is the "Camera Attach" bone of Garrett's
//   skeleton, so every animation moves the view: breathing, the walk bob, the
//   dip of the landing animation, crouch blends. The eye's height above
//   Garrett's collision centre is smoothed here, keeping a little of the
//   animation as head bob. Smoothing the height above the centre (not the
//   eye's absolute height) means falls and lifts are not delayed.
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

// AActor / AGarrett fields.
constexpr uint32_t kLocationZ = 0x34;
constexpr uint32_t kThirdPersonFlags = 0x490;  // bit 0: bIn3rdPersonMode

// Rotation units per degree.
constexpr float kUnitsPerDegree = 65536.0f / 360.0f;

// ---- settings -----------------------------------------------------------------------

struct Settings {
    // How long the eye takes to follow the animation, in seconds (0 = as the game has it).
    float smoothing = 0.08f;

    // How much of the animation's motion stays on top of the smoothed eye, 0 to 1.
    float headBob = 0.25f;

    // Body turn speed in degrees a second while moving; 0 = at once.
    float turnSpeed = 0.0f;

    // The near plane's distance from the eye, in Unreal units.
    float nearPlane = 0.5f;
};

Settings g_settings;

// ---- eye smoothing --------------------------------------------------------------------

struct FVector {
    float x, y, z;
};

using GetCameraTargetLocationFn = FVector*(__fastcall*)(void* pawn, void* edx, FVector* out);

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// The original GetCameraTargetLocation (MinHook trampoline).
GetCameraTargetLocationFn g_getCameraTargetLocation = nullptr;

// The smoothed height of the eye above Garrett's centre, and when it was last updated.
float g_height = 0.0f;
LARGE_INTEGER g_last = {};
bool g_tracking = false;

// Seconds since the last call, at most 0.1 (a paused game, a loading screen).
float SinceLastCall() {
    LARGE_INTEGER now;
    LARGE_INTEGER frequency;
    QueryPerformanceCounter(&now);
    QueryPerformanceFrequency(&frequency);
    float dt = float(double(now.QuadPart - g_last.QuadPart) / double(frequency.QuadPart));
    g_last = now;
    return dt < 0.1f ? dt : 0.1f;
}

FVector* __fastcall GetCameraTargetLocationDetour(void* pawn, void* edx, FVector* out) {
    FVector* eye = g_getCameraTargetLocation(pawn, edx, out);
    float dt = SinceLastCall();

    // Third person keeps the game's camera; start afresh when first person comes back.
    if (t3mod::Field<uint32_t>(pawn, kThirdPersonFlags) & 1) {
        g_tracking = false;
        return eye;
    }

    float centre = t3mod::Field<float>(pawn, kLocationZ);
    float height = eye->z - centre;

    // The first frame, or a jump the smoothing should not show (a teleport, a new level): take it as it is.
    if (!g_tracking || std::fabs(height - g_height) > 60.0f) {
        g_height = height;
        g_tracking = true;
    } else {
        g_height += (height - g_height) * (1.0f - std::exp(-dt / g_settings.smoothing));
    }

    eye->z = centre + g_height + g_settings.headBob * (height - g_height);
    return eye;
}

// ---- setup ----------------------------------------------------------------------------

void ReadSettings() {
    std::wstring ini = t3mod::SettingsFile();
    g_settings.smoothing = t3mod::ReadFloat(ini, L"View", L"Smoothing", 80.0f, 0.0f, 500.0f) / 1000.0f;
    g_settings.headBob = t3mod::ReadFloat(ini, L"View", L"HeadBob", 0.25f, 0.0f, 1.0f);
    g_settings.turnSpeed = t3mod::ReadFloat(ini, L"Turning", L"BodyTurnSpeed", 0.0f, 0.0f, 3600.0f);
    g_settings.nearPlane = t3mod::ReadFloat(ini, L"Clipping", L"NearClip", 0.5f, 0.05f, 1.0f);
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
            api->Log("eye smoothed over %.0f ms, %.0f%% head bob", g_settings.smoothing * 1000.0f,
                     g_settings.headBob * 100.0f);
            ++applied;
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
