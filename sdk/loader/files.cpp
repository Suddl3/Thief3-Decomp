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

// Access bits that make an open a write; such opens are never redirected.
constexpr DWORD kWriteAccess = GENERIC_WRITE | GENERIC_ALL | FILE_WRITE_DATA | FILE_APPEND_DATA | FILE_WRITE_EA |
                               FILE_WRITE_ATTRIBUTES | DELETE | WRITE_DAC | WRITE_OWNER;

// The number of file imports Install patches.
constexpr int kPatchedImports = 4;

// A folder a mod added with AddRoot.
struct Root {
    std::wstring dir;  // absolute, no trailing separator
    HMODULE owner;
};

using CreateFileAFn = HANDLE(WINAPI*)(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
using CreateFileWFn = HANDLE(WINAPI*)(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
using GetFileAttributesAFn = DWORD(WINAPI*)(LPCSTR);
using FindFirstFileAFn = HANDLE(WINAPI*)(LPCSTR, LPWIN32_FIND_DATAA);

// The kernel32 functions the exe imported before Install patched its table.
CreateFileAFn g_createFileA = nullptr;
CreateFileWFn g_createFileW = nullptr;
GetFileAttributesAFn g_getFileAttributesA = nullptr;
FindFirstFileAFn g_findFirstFileA = nullptr;

// The game folder (the parent of System/), absolute, with a trailing separator. Set once by Install.
std::wstring g_gameRoot;

// Guards g_roots and g_hasRoots: the game's threads look files up, mods add folders from their own.
SRWLOCK g_lock = SRWLOCK_INIT;

// The override folders in the order they were added; the last one wins.
std::vector<Root> g_roots;

// Whether g_roots is not empty; while false, a file access skips the lookup and the lock.
bool g_hasRoots = false;

// ANSI to UTF-16; empty for empty text.
std::wstring Widen(const char* text) {
    int size = MultiByteToWideChar(CP_ACP, 0, text, -1, nullptr, 0);

    // Nothing to convert.
    if (size <= 0) {
        return {};
    }

    std::wstring wide(size_t(size - 1), L'\0');
    MultiByteToWideChar(CP_ACP, 0, text, -1, wide.data(), size);
    return wide;
}

// UTF-16 to ANSI.
std::string Narrow(const std::wstring& text) {
    int size = WideCharToMultiByte(CP_ACP, 0, text.c_str(), -1, nullptr, 0, nullptr, nullptr);
    std::string narrow(size_t(size > 0 ? size : 1), '\0');
    WideCharToMultiByte(CP_ACP, 0, text.c_str(), -1, narrow.data(), size, nullptr, nullptr);
    return narrow;
}

// The override for `path`, or an empty string when the path is outside the game folder or no
// override folder has a file there.
std::wstring Redirect(const wchar_t* path) {
    // Without override folders (or a path) every access is the game's own.
    if (!g_hasRoots || !path || !*path) {
        return {};
    }

    wchar_t full[MAX_PATH * 2];
    DWORD length = GetFullPathNameW(path, DWORD(std::size(full)), full, nullptr);

    // Only paths inside the game folder are redirected; a path that does not fit the buffer is left alone.
    if (!length || length >= std::size(full) || length <= g_gameRoot.size() ||
        _wcsnicmp(full, g_gameRoot.c_str(), g_gameRoot.size()) != 0) {
        return {};
    }

    const wchar_t* relative = full + g_gameRoot.size();

    std::wstring found;
    AcquireSRWLockShared(&g_lock);

    // Newest folder first; a directory of that name does not count as the file.
    for (auto it = g_roots.rbegin(); it != g_roots.rend() && found.empty(); ++it) {
        std::wstring candidate = it->dir + L'\\' + relative;
        DWORD attributes = GetFileAttributesW(candidate.c_str());

        // The folder has the file when the path exists and is not a directory.
        if (attributes != INVALID_FILE_ATTRIBUTES && !(attributes & FILE_ATTRIBUTE_DIRECTORY)) {
            found = std::move(candidate);
        }
    }

    ReleaseSRWLockShared(&g_lock);

    return found;
}

// The same for an ANSI path.
std::wstring Redirect(const char* path) {
    return g_hasRoots && path ? Redirect(Widen(path).c_str()) : std::wstring();
}

// Whether an open only reads a file that exists: the only kind that is redirected.
bool ReadOnlyOpen(DWORD access, DWORD disposition) {
    return disposition == OPEN_EXISTING && !(access & kWriteAccess);
}

HANDLE WINAPI CreateFileADetour(LPCSTR name, DWORD access, DWORD share, LPSECURITY_ATTRIBUTES security,
                                DWORD disposition, DWORD flags, HANDLE templateFile) {
    // Writes and creations always go to the game's own path.
    if (ReadOnlyOpen(access, disposition)) {
        std::wstring over = Redirect(name);

        // A mod folder has the file: open that one instead.
        if (!over.empty()) {
            return CreateFileW(over.c_str(), access, share, security, disposition, flags, templateFile);
        }
    }

    return g_createFileA(name, access, share, security, disposition, flags, templateFile);
}

HANDLE WINAPI CreateFileWDetour(LPCWSTR name, DWORD access, DWORD share, LPSECURITY_ATTRIBUTES security,
                                DWORD disposition, DWORD flags, HANDLE templateFile) {
    // Writes and creations always go to the game's own path.
    if (ReadOnlyOpen(access, disposition)) {
        std::wstring over = Redirect(name);

        // A mod folder has the file: open that one instead.
        if (!over.empty()) {
            return g_createFileW(over.c_str(), access, share, security, disposition, flags, templateFile);
        }
    }

    return g_createFileW(name, access, share, security, disposition, flags, templateFile);
}

DWORD WINAPI GetFileAttributesADetour(LPCSTR name) {
    std::wstring over = Redirect(name);

    // A mod folder has the file: answer for that one.
    if (!over.empty()) {
        return GetFileAttributesW(over.c_str());
    }

    return g_getFileAttributesA(name);
}

// FindFirstFileA on one file (no wildcard) is how the engine asks for a file's
// size and time; the found name is the file's own, which an override shares.
HANDLE WINAPI FindFirstFileADetour(LPCSTR name, LPWIN32_FIND_DATAA data) {
    // A wildcard is a directory listing, which is not merged.
    if (name && !strpbrk(name, "*?")) {
        std::wstring over = Redirect(name);

        // A mod folder has the file: look that one up.
        if (!over.empty()) {
            return g_findFirstFileA(Narrow(over).c_str(), data);
        }
    }

    return g_findFirstFileA(name, data);
}

// Replaces the exe's import of `function` with `detour`, keeping the original in `original`, and
// counts it in `patched` when the exe imports it.
template <class Fn>
void Patch(HMODULE exe, const char* function, Fn detour, Fn* original, int* patched) {
    *original = reinterpret_cast<Fn>(PatchImport(exe, "KERNEL32.dll", function, reinterpret_cast<void*>(detour)));
    *patched += *original != nullptr;
}

}  // namespace

void Install(const fs::path& gameRoot) {
    g_gameRoot = gameRoot.lexically_normal().wstring();

    // Redirect compares against the folder plus a separator, so "Game2" does not match "Game".
    if (!g_gameRoot.empty() && g_gameRoot.back() != L'\\') {
        g_gameRoot += L'\\';
    }

    HMODULE exe = GetModuleHandleW(nullptr);
    int patched = 0;
    Patch(exe, "CreateFileA", &CreateFileADetour, &g_createFileA, &patched);
    Patch(exe, "CreateFileW", &CreateFileWDetour, &g_createFileW, &patched);
    Patch(exe, "GetFileAttributesA", &GetFileAttributesADetour, &g_getFileAttributesA, &patched);
    Patch(exe, "FindFirstFileA", &FindFirstFileADetour, &g_findFirstFileA, &patched);

    // The game still runs with some imports unpatched; the overrides just do not cover every access.
    if (patched != kPatchedImports) {
        T3_LOG("files: %d of 4 file imports patched; file overrides are incomplete", patched);
    }
}

int AddRoot(const fs::path& dir, HMODULE owner) {
    std::error_code ec;
    fs::path absolute = fs::absolute(dir, ec).lexically_normal();

    // Only an existing folder can hold overrides.
    if (ec || !fs::is_directory(absolute, ec)) {
        return -1;
    }

    // Redirect joins the folder and the relative path with its own separator.
    std::wstring text = absolute.wstring();

    // Drop trailing separators; Redirect adds its own.
    while (!text.empty() && (text.back() == L'\\' || text.back() == L'/')) {
        text.pop_back();
    }

    AcquireSRWLockExclusive(&g_lock);
    g_roots.push_back({text, owner});
    g_hasRoots = true;
    ReleaseSRWLockExclusive(&g_lock);

    T3_LOG("files: overrides from %s", absolute.string().c_str());
    return 0;
}

void DropOwner(HMODULE owner) {
    AcquireSRWLockExclusive(&g_lock);
    std::erase_if(g_roots, [owner](const Root& root) { return root.owner == owner; });
    g_hasRoots = !g_roots.empty();
    ReleaseSRWLockExclusive(&g_lock);
}

}  // namespace t3sdk::files
