// Example mod. Shows the three things a mod does with the SDK:
//   - react to frames (on the game's main thread),
//   - read engine objects once the engine is up,
//   - listen to the engine's log.
// Every ten seconds it logs the number of live objects, the player controller,
// and how many engine log lines of each category it has seen. It has no
// settings.
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstring>
#include <map>
#include <mutex>
#include <string>

namespace {

// How often the report is logged, in milliseconds.
constexpr DWORD kReportIntervalMs = 10000;

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// Whether the first frame with the engine up has been seen (the class lookup below is done then).
bool g_engineUp = false;

// GetTickCount() of the last report.
DWORD g_lastReport = 0;

// The Engine.PlayerController class, or null until found (or when the game has no such class).
T3Object* g_playerControllerClass = nullptr;

// Engine log lines seen so far, by category. Engine log callbacks run on
// whichever thread logged, frame callbacks on the main thread: the counts they
// share are locked.
std::map<std::string, int> g_logLines;
std::mutex g_logLinesMutex;

// Engine log callback: counts the line under its category. May run on any thread.
void T3SDK_CALL OnEngineLog(void*, const char*, const char* category) {
    std::lock_guard<std::mutex> lock(g_logLinesMutex);
    ++g_logLines[category];
}

// The live player controller, or null when there is none. The class default
// object (whose name starts with "Default") is an instance of the class too,
// and is skipped. Main thread only.
T3Object* FindPlayerController() {
    if (!g_playerControllerClass) {
        return nullptr;
    }

    for (int i = 0, n = g_api->ObjectCount(); i < n; ++i) {
        T3Object* object = g_api->ObjectAt(i);
        char name[128];

        if (object && g_api->IsA(object, g_playerControllerClass) && g_api->ObjectName(object, name, sizeof(name)) &&
            strncmp(name, "Default", 7) != 0) {
            return object;
        }
    }

    return nullptr;
}

// The number of object slots that hold an object. Main thread only.
int CountLiveObjects() {
    int live = 0;

    for (int i = 0, n = g_api->ObjectCount(); i < n; ++i) {
        live += g_api->ObjectAt(i) != nullptr;
    }

    return live;
}

// The engine log counts as "category=count category=count ... ".
std::string DescribeLogLines() {
    std::string lines;
    std::lock_guard<std::mutex> lock(g_logLinesMutex);

    for (const auto& [category, count] : g_logLines) {
        lines += category + "=" + std::to_string(count) + " ";
    }

    return lines;
}

// Frame callback (main thread): finds the player controller class when the
// engine comes up, then logs the report every kReportIntervalMs.
void T3SDK_CALL OnFrame(void*) {
    if (!g_api->EngineReady()) {
        return;
    }

    if (!g_engineUp) {
        g_engineUp = true;
        g_playerControllerClass = g_api->FindObject("Class", "Engine.PlayerController");
        g_api->Log("engine up: %d object slots; class Engine.PlayerController %s", g_api->ObjectCount(),
                   g_playerControllerClass ? "found" : "not found");
    }

    DWORD now = GetTickCount();

    if (now - g_lastReport < kReportIntervalMs) {
        return;
    }

    g_lastReport = now;

    int live = CountLiveObjects();

    char controller[256] = "none";

    if (T3Object* playerController = FindPlayerController()) {
        g_api->ObjectPathName(playerController, controller, sizeof(controller));
    }

    std::string lines = DescribeLogLines();
    g_api->Log("%d live objects; player controller %s; engine log lines: %s", live, controller, lines.c_str());
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero (the mod stays
// off) when the SDK is older than the one this mod was built against.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (api->version < T3SDK_API_VERSION) {
        return 1;
    }

    g_api = api;

    api->AddFrameCallback(OnFrame, nullptr);
    api->AddEngineLogCallback(OnEngineLog, nullptr);

    api->Log("hello: waiting for the engine");
    return 0;
}

// Called by the SDK when the game exits.
T3SDK_EXPORT void T3SDK_CALL T3Mod_Shutdown(void) {
    g_api->Log("hello: shutting down");
}
