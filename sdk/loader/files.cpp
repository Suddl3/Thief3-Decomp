// Mod folders that override the game's loose files without touching the
// install. T3Main.exe reaches files through kernel32 imports; the ones that
// open or look up a single file are patched here: CreateFileA/W (read-only
// opens of existing files), GetFileAttributesA and FindFirstFileA without
// wildcards. A path inside the game folder is looked up in the override
// folders, newest first, and the first one that has the file answers.
// Directory listings are not merged, and writes always go to the game's path.
#include "files.hpp"

#include "iat.hpp"
#include "log.hpp"

#include <cstring>
#include <string>
#include <vector>

namespace t3sdk::files {
namespace {

namespace fs = std::filesystem;

struct Root {
    std::wstring dir;  // absolute, no trailing separator
    HMODULE owner;
};

using CreateFileAFn = HANDLE(WINAPI*)(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
using CreateFileWFn = HANDLE(WINAPI*)(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
using GetFileAttributesAFn = DWORD(WINAPI*)(LPCSTR);
using FindFirstFileAFn = HANDLE(WINAPI*)(LPCSTR, LPWIN32_FIND_DATAA);

CreateFileAFn g_createFileA = nullptr;
CreateFileWFn g_createFileW = nullptr;
GetFileAttributesAFn g_getFileAttributesA = nullptr;
FindFirstFileAFn g_findFirstFileA = nullptr;

std::wstring g_gameRoot;  // with a trailing separator
SRWLOCK g_lock = SRWLOCK_INIT;
std::vector<Root> g_roots;
bool g_any = false;

constexpr DWORD kWriteAccess = GENERIC_WRITE | GENERIC_ALL | FILE_WRITE_DATA | FILE_APPEND_DATA | FILE_WRITE_EA |
                               FILE_WRITE_ATTRIBUTES | DELETE | WRITE_DAC | WRITE_OWNER;

std::wstring Widen(const char* text) {
    int size = MultiByteToWideChar(CP_ACP, 0, text, -1, nullptr, 0);
    if (size <= 0) {
        return {};
    }
    std::wstring wide(size_t(size - 1), L'\0');
    MultiByteToWideChar(CP_ACP, 0, text, -1, wide.data(), size);
    return wide;
}

// The override for `path`, or an empty string when no folder has it.
std::wstring Redirect(const wchar_t* path) {
    if (!g_any || !path || !*path) {
        return {};
    }
    wchar_t full[MAX_PATH * 2];
    DWORD length = GetFullPathNameW(path, DWORD(std::size(full)), full, nullptr);
    if (!length || length >= std::size(full) || length <= g_gameRoot.size() ||
        _wcsnicmp(full, g_gameRoot.c_str(), g_gameRoot.size()) != 0) {
        return {};
    }
    const wchar_t* relative = full + g_gameRoot.size();

    std::wstring found;
    AcquireSRWLockShared(&g_lock);
    for (auto it = g_roots.rbegin(); it != g_roots.rend() && found.empty(); ++it) {
        std::wstring candidate = it->dir + L'\\' + relative;
        DWORD attributes = GetFileAttributesW(candidate.c_str());
        if (attributes != INVALID_FILE_ATTRIBUTES && !(attributes & FILE_ATTRIBUTE_DIRECTORY)) {
            found = std::move(candidate);
        }
    }
    ReleaseSRWLockShared(&g_lock);
    return found;
}

std::wstring Redirect(const char* path) { return g_any && path ? Redirect(Widen(path).c_str()) : std::wstring(); }

bool ReadOnlyOpen(DWORD access, DWORD disposition) {
    return disposition == OPEN_EXISTING && !(access & kWriteAccess);
}

HANDLE WINAPI CreateFileADetour(LPCSTR name, DWORD access, DWORD share, LPSECURITY_ATTRIBUTES security,
                                DWORD disposition, DWORD flags, HANDLE templateFile) {
    if (ReadOnlyOpen(access, disposition)) {
        if (std::wstring over = Redirect(name); !over.empty()) {
            return CreateFileW(over.c_str(), access, share, security, disposition, flags, templateFile);
        }
    }
    return g_createFileA(name, access, share, security, disposition, flags, templateFile);
}

HANDLE WINAPI CreateFileWDetour(LPCWSTR name, DWORD access, DWORD share, LPSECURITY_ATTRIBUTES security,
                                DWORD disposition, DWORD flags, HANDLE templateFile) {
    if (ReadOnlyOpen(access, disposition)) {
        if (std::wstring over = Redirect(name); !over.empty()) {
            return g_createFileW(over.c_str(), access, share, security, disposition, flags, templateFile);
        }
    }
    return g_createFileW(name, access, share, security, disposition, flags, templateFile);
}

DWORD WINAPI GetFileAttributesADetour(LPCSTR name) {
    if (std::wstring over = Redirect(name); !over.empty()) {
        return GetFileAttributesW(over.c_str());
    }
    return g_getFileAttributesA(name);
}

// FindFirstFileA on one file (no wildcard) is how the engine asks for a file's
// size and time; the found name is the file's own, which an override shares.
HANDLE WINAPI FindFirstFileADetour(LPCSTR name, LPWIN32_FIND_DATAA data) {
    if (name && !strpbrk(name, "*?")) {
        if (std::wstring over = Redirect(name); !over.empty()) {
            int size = WideCharToMultiByte(CP_ACP, 0, over.c_str(), -1, nullptr, 0, nullptr, nullptr);
            std::string narrow(size_t(size > 0 ? size : 1), '\0');
            WideCharToMultiByte(CP_ACP, 0, over.c_str(), -1, narrow.data(), size, nullptr, nullptr);
            return g_findFirstFileA(narrow.c_str(), data);
        }
    }
    return g_findFirstFileA(name, data);
}

template <class Fn>
void Patch(HMODULE exe, const char* function, Fn detour, Fn* original, int* patched) {
    *original = reinterpret_cast<Fn>(PatchImport(exe, "KERNEL32.dll", function, reinterpret_cast<void*>(detour)));
    *patched += *original != nullptr;
}

}  // namespace

void Install(const fs::path& gameRoot) {
    g_gameRoot = gameRoot.lexically_normal().wstring();
    if (!g_gameRoot.empty() && g_gameRoot.back() != L'\\') {
        g_gameRoot += L'\\';
    }
    HMODULE exe = GetModuleHandleW(nullptr);
    int patched = 0;
    Patch(exe, "CreateFileA", &CreateFileADetour, &g_createFileA, &patched);
    Patch(exe, "CreateFileW", &CreateFileWDetour, &g_createFileW, &patched);
    Patch(exe, "GetFileAttributesA", &GetFileAttributesADetour, &g_getFileAttributesA, &patched);
    Patch(exe, "FindFirstFileA", &FindFirstFileADetour, &g_findFirstFileA, &patched);
    if (patched != 4) {
        T3_LOG("files: %d of 4 file imports patched; file overrides are incomplete", patched);
    }
}

int AddRoot(const fs::path& dir, HMODULE owner) {
    std::error_code ec;
    fs::path absolute = fs::absolute(dir, ec).lexically_normal();
    if (ec || !fs::is_directory(absolute, ec)) {
        return -1;
    }
    std::wstring text = absolute.wstring();
    while (!text.empty() && (text.back() == L'\\' || text.back() == L'/')) {
        text.pop_back();
    }
    AcquireSRWLockExclusive(&g_lock);
    g_roots.push_back({text, owner});
    g_any = true;
    ReleaseSRWLockExclusive(&g_lock);
    T3_LOG("files: overrides from %s", absolute.string().c_str());
    return 0;
}

void DropOwner(HMODULE owner) {
    AcquireSRWLockExclusive(&g_lock);
    std::erase_if(g_roots, [owner](const Root& r) { return r.owner == owner; });
    g_any = !g_roots.empty();
    ReleaseSRWLockExclusive(&g_lock);
}

}  // namespace t3sdk::files
