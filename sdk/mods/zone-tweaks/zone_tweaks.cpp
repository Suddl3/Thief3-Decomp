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
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <cstring>
#include <cwchar>
#include <string>
#include <unordered_set>

namespace {

constexpr uint32_t kAmbientBrightness = 0xDC;  // BYTE
constexpr uint32_t kDistanceFogStart = 0xE4;   // FLOAT
constexpr uint32_t kDistanceFogEnd = 0xE8;     // FLOAT

const T3SdkApi* g_api = nullptr;
float g_fogDistance = 1.0f;
float g_ambientLight = 1.0f;
T3Object* g_zoneClass = nullptr;
std::unordered_set<T3Object*> g_done;
DWORD g_lastScan = 0;

template <class T>
T& Field(T3Object* object, uint32_t offset) {
    return *reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(object) + offset);
}

void Adjust(T3Object* zone) {
    if (g_fogDistance != 1.0f) {
        Field<float>(zone, kDistanceFogStart) *= g_fogDistance;
        Field<float>(zone, kDistanceFogEnd) *= g_fogDistance;
    }
    if (g_ambientLight != 1.0f) {
        float brightness = Field<uint8_t>(zone, kAmbientBrightness) * g_ambientLight;
        Field<uint8_t>(zone, kAmbientBrightness) = uint8_t(brightness > 255.0f ? 255.0f : brightness + 0.5f);
    }
}

void T3SDK_CALL OnFrame(void*) {
    if (!g_api->EngineReady()) {
        return;
    }
    DWORD now = GetTickCount();
    if (now - g_lastScan < 1000) {
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

std::wstring IniPath() {
    HMODULE self = nullptr;
    GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                       reinterpret_cast<LPCWSTR>(&IniPath), &self);
    wchar_t path[MAX_PATH];
    GetModuleFileNameW(self, path, MAX_PATH);
    std::wstring ini = path;
    return ini.substr(0, ini.find_last_of(L'.')) + L".ini";
}

float ReadFactor(const wchar_t* key, const std::wstring& ini) {
    wchar_t text[32];
    GetPrivateProfileStringW(L"Zones", key, L"1", text, 32, ini.c_str());
    float value = float(wcstod(text, nullptr));
    return value > 0.0f && value <= 100.0f ? value : 1.0f;
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;
    std::wstring ini = IniPath();
    g_fogDistance = ReadFactor(L"FogDistance", ini);
    g_ambientLight = ReadFactor(L"AmbientLight", ini);
    if (g_fogDistance == 1.0f && g_ambientLight == 1.0f) {
        api->Log("nothing to change; off");
        return 1;
    }
    api->AddFrameCallback(OnFrame, nullptr);
    return 0;
}
