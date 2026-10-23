// Changes every level's fog distance and ambient light. Both come from the
// level's zone actors (AZoneInfo, sky zones included), which the renderer
// reads each frame: DistanceFogStart/End (0xE4/0xE8) and AmbientBrightness
// (0xDC; include/Engine/EngineClasses.h). The game restarts for every level,
// so each zone is scaled once, from its own values, when it first appears.
//
// Settings, in zone-tweaks.ini next to the DLL:
//   [Zones]
//   FogDistance=1.0    multiplies where fog starts and ends (2 = half as foggy)
//   AmbientLight=1.0   multiplies the zones' ambient brightness
// Both take a number above 0 up to 100; anything else counts as 1.0. With
// both at 1.0 the mod stays off.
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <cstring>
#include <cwchar>
#include <string>
#include <unordered_set>

namespace {

// Offsets in an AZoneInfo (include/Engine/EngineClasses.h).
constexpr uint32_t kAmbientBrightness = 0xDC;  // BYTE
constexpr uint32_t kDistanceFogStart = 0xE4;   // FLOAT
constexpr uint32_t kDistanceFogEnd = 0xE8;     // FLOAT

// Largest accepted factor.
constexpr float kMaxFactor = 100.0f;

// How often the object table is scanned for new zones, in milliseconds.
constexpr DWORD kScanIntervalMs = 1000;

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// Settings: the fog distance and ambient brightness multipliers.
float g_fogDistance = 1.0f;
float g_ambientLight = 1.0f;

// The Engine.ZoneInfo class, or null until found.
T3Object* g_zoneClass = nullptr;

// The zones already scaled, so each is scaled once. Main thread only.
std::unordered_set<T3Object*> g_done;

// GetTickCount() of the last scan.
DWORD g_lastScan = 0;

// A multiplier from the settings: a number above 0 up to kMaxFactor, else 1.
// Unlike t3mod::ReadFloat, which takes a closed range, this excludes 0.
float ReadFactor(const wchar_t* key, const std::wstring& ini) {
    wchar_t text[32];
    GetPrivateProfileStringW(L"Zones", key, L"1", text, 32, ini.c_str());
    float value = float(wcstod(text, nullptr));
    return value > 0.0f && value <= kMaxFactor ? value : 1.0f;
}

// Scales one zone's fog distance and ambient brightness (clamped to a byte).
void Adjust(T3Object* zone) {
    if (g_fogDistance != 1.0f) {
        t3mod::Field<float>(zone, kDistanceFogStart) *= g_fogDistance;
        t3mod::Field<float>(zone, kDistanceFogEnd) *= g_fogDistance;
    }

    if (g_ambientLight != 1.0f) {
        float brightness = t3mod::Field<uint8_t>(zone, kAmbientBrightness) * g_ambientLight;
        t3mod::Field<uint8_t>(zone, kAmbientBrightness) = uint8_t(brightness > 255.0f ? 255.0f : brightness + 0.5f);
    }
}

// Frame callback (main thread): once a second, scales the zones that appeared
// since the last scan and logs how many.
void T3SDK_CALL OnFrame(void*) {
    if (!g_api->EngineReady()) {
        return;
    }

    DWORD now = GetTickCount();

    if (now - g_lastScan < kScanIntervalMs) {
        return;
    }

    g_lastScan = now;

    if (!g_zoneClass) {
        g_zoneClass = g_api->FindObject("Class", "Engine.ZoneInfo");

        if (!g_zoneClass) {
            return;
        }
    }

    int adjusted = 0;

    for (int i = 0, n = g_api->ObjectCount(); i < n; ++i) {
        T3Object* object = g_api->ObjectAt(i);
        char name[16];

        // Class default objects (Default__ZoneInfo, ...) keep the values new zones start from.
        if (!object || !g_api->IsA(object, g_zoneClass) || g_done.count(object) ||
            (g_api->ObjectName(object, name, sizeof(name)) && strncmp(name, "Default__", 9) == 0)) {
            continue;
        }

        g_done.insert(object);
        Adjust(object);
        ++adjusted;
    }

    if (adjusted) {
        g_api->Log("%d zones adjusted (fog distance x%.2f, ambient light x%.2f)", adjusted, g_fogDistance,
                   g_ambientLight);
    }
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero (the mod stays
// off) when both multipliers are 1.0, so there is nothing to change.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;

    std::wstring ini = t3mod::SettingsFile();
    g_fogDistance = ReadFactor(L"FogDistance", ini);
    g_ambientLight = ReadFactor(L"AmbientLight", ini);

    if (g_fogDistance == 1.0f && g_ambientLight == 1.0f) {
        api->Log("nothing to change; off");
        return 1;
    }

    api->AddFrameCallback(OnFrame, nullptr);
    return 0;
}
