// Loads mod DLLs from System/mods/: first the packaged mods that
// load-order.txt lists (written by the launcher; docs/mods.md), in its
// order, then every loose *.dll in the folder not loaded yet, in filename
// order. Runs their T3Mod_Shutdown at exit (newest first), and maps a code
// address back to the mod that owns it, for log-line tagging and crash reports.
#include "mods.hpp"

#include "log.hpp"

#include <algorithm>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

namespace t3sdk::mods {
namespace {

// A loaded mod: its name for the log, and the address range of its image.
struct Mod {
    std::string name;
    HMODULE module;
    uintptr_t begin;
    uintptr_t end;
    T3ModShutdownFn shutdown;  // nullptr when the mod has none
};

// A DLL named by load-order.txt, the name it goes by (its folder's), and
// the line that named it (UTF-8, for the log).
struct Listed {
    std::filesystem::path file;
    std::string name;
    std::string line;
};

// The loaded mods, in load order. Only the loader's start-up and exit paths change it.
std::vector<Mod> g_mods;

// The address just past the image of a loaded module.
uintptr_t ImageEnd(HMODULE module) {
    auto base = reinterpret_cast<const BYTE*>(module);
    auto nt =
        reinterpret_cast<const IMAGE_NT_HEADERS*>(base + reinterpret_cast<const IMAGE_DOS_HEADER*>(base)->e_lfanew);
    return reinterpret_cast<uintptr_t>(base) + nt->OptionalHeader.SizeOfImage;
}

// Calls the mod's T3Mod_Init; returns the exception code, or 0 when it returned
// normally (its result in `result`).
DWORD CallInit(T3ModInitFn init, const T3SdkApi* api, int* result) {
    // A mod's bug must not take the game down: its exception only unloads that mod.
    __try {
        *result = init(api);
        return 0;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return GetExceptionCode();
    }
}

// Returns the exception code, or 0 when the mod's shutdown returned normally.
DWORD CallShutdown(T3ModShutdownFn shutdown) {
    // One mod's failing shutdown must not stop the others from running theirs.
    __try {
        shutdown();
        return 0;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return GetExceptionCode();
    }
}

// The loaded mod whose image contains `address`, or nullptr.
const Mod* Find(const void* address) {
    auto target = reinterpret_cast<uintptr_t>(address);

    // Each mod owns one contiguous image.
    for (const Mod& mod : g_mods) {
        // Inside the image when the address lies between its first and last byte.
        if (target >= mod.begin && target < mod.end) {
            return &mod;
        }
    }

    return nullptr;
}

// UTF-8 to UTF-16; empty for text that is not UTF-8.
std::wstring Widen(const std::string& text) {
    int length = static_cast<int>(text.size());
    int size = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, text.data(), length, nullptr, 0);

    // Invalid UTF-8 (or empty text) gives no conversion.
    if (size <= 0) {
        return {};
    }

    std::wstring wide(static_cast<size_t>(size), L'\0');
    MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, text.data(), length, wide.data(), size);
    return wide;
}

// load-order.txt: one `<folder>/<dll>` per line, relative to `dir`; blank
// lines and `#` comments are skipped, and so is a line with an absolute path
// or `..`, with a log line.
std::vector<Listed> ReadLoadOrder(const std::filesystem::path& dir) {
    std::vector<Listed> listed;
    std::ifstream in(dir / "load-order.txt", std::ios::binary);

    // No file is the normal case when no packaged mod is installed.
    if (!in) {
        return listed;
    }

    std::string line;

    // One mod per line.
    for (int number = 1; std::getline(in, line); ++number) {
        // A byte-order mark from a hand edit would end up in the first name.
        if (number == 1 && line.starts_with("\xEF\xBB\xBF")) {
            line.erase(0, 3);
        }

        // Blank lines and comments are skipped.
        size_t first = line.find_first_not_of(" \t\r");

        // Blank lines and comments are skipped.
        if (first == std::string::npos || line[first] == '#') {
            continue;
        }

        line = line.substr(first, line.find_last_not_of(" \t\r") - first + 1);

        std::wstring wide = Widen(line);
        std::filesystem::path relative(wide);
        bool leavesFolder =
            std::any_of(relative.begin(), relative.end(), [](const auto& part) { return part == L".."; });

        // Only paths inside the mods folder may be loaded.
        if (wide.empty() || relative.has_root_name() || relative.has_root_directory() || leavesFolder) {
            T3_LOG("load-order.txt line %d: \"%s\" is not a path inside System/mods; skipped", number, line.c_str());
            continue;
        }

        // A packaged mod goes by its folder's name, a DLL listed on its own by its file name.
        size_t slash = line.find_first_of("/\\");
        std::string name = slash != std::string::npos ? line.substr(0, slash) : line.substr(0, line.find_last_of('.'));
        listed.push_back({dir / relative, name, line});
    }

    return listed;
}

// Whether two paths name the same file, ignoring case and `.`/`..` segments.
bool SamePath(const std::filesystem::path& first, const std::filesystem::path& second) {
    return _wcsicmp(first.lexically_normal().c_str(), second.lexically_normal().c_str()) == 0;
}

// Whether `file` is already in `tried`.
bool WasTried(const std::vector<std::filesystem::path>& tried, const std::filesystem::path& file) {
    return std::any_of(tried.begin(), tried.end(), [&](const auto& other) { return SamePath(other, file); });
}

// The log text for a mod whose init failed: no export, an exception, or a non-zero result.
std::string InitFailure(T3ModInitFn init, DWORD code, int result) {
    char why[64];

    // The export is missing, the init crashed, or it returned an error.
    if (!init) {
        snprintf(why, sizeof(why), "no T3Mod_Init export");
    } else if (code) {
        snprintf(why, sizeof(why), "T3Mod_Init raised exception 0x%08lX", code);
    } else {
        snprintf(why, sizeof(why), "T3Mod_Init returned %d", result);
    }

    return why;
}

// Loads one mod and calls its T3Mod_Init. A packaged mod's DLL is loaded with
// its own folder on the DLL search path, so it can ship helper DLLs next to it.
// A mod whose init fails is unloaded again, after `onUnload` is told.
void Load(const std::filesystem::path& file, const std::string& name, bool packaged, const T3SdkApi* api,
          void (*onUnload)(HMODULE mod)) {
    HMODULE module =
        packaged ? LoadLibraryExW(file.c_str(), nullptr, LOAD_WITH_ALTERED_SEARCH_PATH) : LoadLibraryW(file.c_str());

    // A DLL that does not load is skipped; the others still load.
    if (!module) {
        T3_LOG("mod %s: LoadLibrary failed (error %lu)", name.c_str(), GetLastError());
        return;
    }

    // Registered before init so the mod's log lines and callbacks are attributed to it.
    g_mods.push_back({name, module, reinterpret_cast<uintptr_t>(module), ImageEnd(module), nullptr});

    auto init = reinterpret_cast<T3ModInitFn>(GetProcAddress(module, "T3Mod_Init"));
    int result = -1;
    DWORD code = init ? CallInit(init, api, &result) : 0;

    // A mod that cannot start is dropped, with whatever it registered.
    if (code || result != 0) {
        T3_LOG("mod %s: %s; unloading", name.c_str(), InitFailure(init, code, result).c_str());
        onUnload(module);
        g_mods.pop_back();
        FreeLibrary(module);
        return;
    }

    g_mods.back().shutdown = reinterpret_cast<T3ModShutdownFn>(GetProcAddress(module, "T3Mod_Shutdown"));
    T3_LOG("mod %s loaded", name.c_str());
}

// Loads the packaged mods load-order.txt lists, in its order, adding each file to `tried`.
void LoadListed(const std::filesystem::path& dir, const T3SdkApi* api, void (*onUnload)(HMODULE mod),
                std::vector<std::filesystem::path>& tried) {
    std::vector<Listed> listed = ReadLoadOrder(dir);

    // Nothing is logged when there is no list.
    if (!listed.empty()) {
        T3_LOG("load-order.txt lists %zu mods", listed.size());
    }

    std::error_code ec;

    // The launcher's order is the load order.
    for (const Listed& mod : listed) {
        // A DLL listed twice loads once.
        if (WasTried(tried, mod.file)) {
            continue;
        }

        tried.push_back(mod.file);

        // A stale list entry must not stop the other mods from loading.
        if (!std::filesystem::is_regular_file(mod.file, ec)) {
            T3_LOG("mod %s: %s not found (listed in load-order.txt)", mod.name.c_str(), mod.line.c_str());
            continue;
        }

        Load(mod.file, mod.name, true, api, onUnload);
    }
}

// Loads the DLLs straight in `dir` that are not in `tried`, in name order.
void LoadLoose(const std::filesystem::path& dir, const T3SdkApi* api, void (*onUnload)(HMODULE mod),
               const std::vector<std::filesystem::path>& tried) {
    std::error_code ec;
    std::vector<std::filesystem::path> files;

    // Look at every entry of the folder.
    for (const auto& entry : std::filesystem::directory_iterator(dir, ec)) {
        // Regular files only, and only those named *.dll.
        if (entry.is_regular_file() && _wcsicmp(entry.path().extension().c_str(), L".dll") == 0) {
            files.push_back(entry.path());
        }
    }

    std::sort(files.begin(), files.end());  // deterministic load order

    // Each remaining DLL becomes a loose mod.
    for (const auto& file : files) {
        // Packaged mods are already loaded.
        if (WasTried(tried, file)) {
            continue;
        }

        Load(file, file.stem().string(), false, api, onUnload);
    }
}

}  // namespace

void LoadAll(const std::filesystem::path& dir, const T3SdkApi* api, void (*onUnload)(HMODULE mod)) {
    std::error_code ec;

    // Without a mods folder there is nothing to load.
    if (!std::filesystem::is_directory(dir, ec)) {
        T3_LOG("no mods folder at %s", dir.string().c_str());
        return;
    }

    // Packaged mods first, in the launcher's load order, then loose DLLs as before packages existed.
    std::vector<std::filesystem::path> tried;
    LoadListed(dir, api, onUnload, tried);
    LoadLoose(dir, api, onUnload, tried);
}

void ShutdownAll() {
    // Newest first, so a mod goes down before the mods it was loaded after.
    for (auto it = g_mods.rbegin(); it != g_mods.rend(); ++it) {
        // Shutdown is optional.
        if (!it->shutdown) {
            continue;
        }

        // A crashing shutdown is logged and the next mod still gets its turn.
        if (DWORD code = CallShutdown(it->shutdown)) {
            T3_LOG("mod %s: T3Mod_Shutdown raised exception 0x%08lX", it->name.c_str(), code);
        }
    }
}

HMODULE ModuleAt(const void* address) {
    const Mod* mod = Find(address);
    return mod ? mod->module : nullptr;
}

const char* NameAt(const void* address) {
    const Mod* mod = Find(address);
    return mod ? mod->name.c_str() : nullptr;
}

}  // namespace t3sdk::mods
