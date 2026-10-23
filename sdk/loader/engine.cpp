// See engine.hpp for what this module is for.
//
// The engine's object table (GObjObjects) and name table are read through the
// addresses in <t3sdk/unreal.hpp>. Two UObject fields have no fixed place in
// this engine fork, so OnFrame() finds them once the object system is up: the
// offset of Outer, and the offset of the field that chains each class to its
// parent (SuperField). Until that check passes Ready() is false and no engine
// object is touched. Everything else here is lookups over those tables, the
// hook on the engine's log file device, and the two diagnostic dumps.
#include "engine.hpp"

#include "executable_hash.hpp"
#include "log.hpp"

#include <MinHook.h>

#include <windows.h>

#include <cstdio>
#include <cstring>
#include <unordered_set>
#include <vector>

namespace t3sdk::engine {

using t3::UObject;

namespace {

// The longest Outer or SuperField chain the code follows, in case a chain is ever cyclic.
constexpr int kMaxOuterDepth = 32;
constexpr int kMaxSuperDepth = 64;

// The offsets searched for UObject::Outer (a field of class Object that holds package Core) ...
constexpr uint32_t kOuterSearchBegin = 0x0C;
constexpr uint32_t kOuterSearchEnd = 0x20;

// ... and for UStruct::SuperField (docs/engine.md, "UObject layout": stock Unreal Engine 2 has it at 0x28, this fork
// at 0x2C).
constexpr uint32_t kSuperSearchBegin = 0x28;
constexpr uint32_t kSuperSearchEnd = 0x80;

// How long OnFrame() waits between attempts to validate the object layout.
constexpr DWORD kValidateRetryMs = 1000;

// The offset of a class's default object in a UClass (docs/engine.md, class +0xE8 `Defaults`); read by the
// reflection dump.
constexpr uint32_t kClassDefaultsOffset = 0xE8;

// The number of entries in GNatives (docs/engine.md, "GNatives").
constexpr int kNativeCount = 4096;

// How many bytes of each field object the reflection dump writes: more than the largest of them (a UClass is 0x114).
constexpr size_t kDumpBytes = 0x120;

// ---- state --------------------------------------------------------------------

// The offsets found by TryValidateLayout; zero until it passes. Main thread only.
Layout g_layout;

// True once the layout is validated.
bool g_ready = false;

// True once Exiting() has seen the engine begin to shut down; never reset.
bool g_exiting = false;

// True once GIsRunning has been seen set, so that clearing it can be told from never having been set.
bool g_sawRunning = false;

// True once the "layout not validated yet" message has been logged, so it appears once.
bool g_loggedFailure = false;

// GetTickCount() of the last attempt to validate the layout.
DWORD g_lastAttempt = 0;

// The receiver of engine log lines (SetLogSink). Called from whichever thread logs.
LogSink g_sink = nullptr;

// The address HookEngineLog hooked, or nullptr while the hook is not installed.
void* g_serializeTarget = nullptr;

// ---- build and executable identity ---------------------------------------------

// Hashes T3Main.exe and compares it with the supported build's SHA-1. Logs why when the hash cannot be computed or
// differs. Returns true only when it matches.
bool SupportedExecutableHash() {
    // Grow the buffer until the path fits (GetModuleFileNameW truncates silently).
    std::vector<wchar_t> path(512);
    DWORD pathLength = 0;

    // Grow the buffer until the path fits.
    for (;;) {
        pathLength = GetModuleFileNameW(nullptr, path.data(), DWORD(path.size()));

        // A zero length means the call failed.
        if (!pathLength) {
            T3_LOG("cannot verify T3Main.exe SHA-1: GetModuleFileNameW failed (error %lu)", GetLastError());
            return false;
        }

        // A length below the buffer size means the path was not truncated.
        if (pathLength < path.size() - 1) {
            break;
        }

        // Stop growing at the longest path Windows allows.
        if (path.size() >= 32768) {
            T3_LOG("cannot verify T3Main.exe SHA-1: executable path is too long");
            return false;
        }

        path.resize(path.size() * 2);
    }

    HashCheck check = CheckSupportedExecutableHash(path.data());

    // Log the reason the hash could not be checked, or that it differs.
    if (check.failure == HashFailure::OpenFile) {
        T3_LOG("cannot verify T3Main.exe SHA-1: opening executable failed (error %lu)", check.win32Error);
    } else if (check.failure == HashFailure::ReadFile) {
        T3_LOG("cannot verify T3Main.exe SHA-1: reading executable failed (error %lu)", check.win32Error);
    } else if (check.failure == HashFailure::Crypto) {
        T3_LOG("cannot verify T3Main.exe SHA-1: Windows CNG failed (status 0x%08lX)", check.cryptoStatus);
    } else if (!check.matches) {
        T3_LOG("unsupported T3Main.exe SHA-1; SDK disabled");
    }

    return check.failure == HashFailure::None && check.matches;
}

// ---- engine log hook ------------------------------------------------------------

// FOutputDeviceFile::Serialize(const char* text, EName event), __thiscall: the log file
// device GLog points at (docs/engine.md, "Logging"). __fastcall with a dummy EDX stands in for __thiscall.
using SerializeFn = void(__fastcall*)(void* self, void* edx, const char* text, uint32_t event);

// The original Serialize, filled in by the hook.
SerializeFn g_serialize = nullptr;

// True once CheckGLog has looked at GLog.
bool g_checkedGLog = false;

// True on a thread that is inside SerializeDetour's call to the sink.
thread_local bool t_inSerialize = false;

// The engine's log output device, or nullptr before it exists.
void* GLog() {
    return *reinterpret_cast<void**>(t3::addr::GLog);
}

// Hands each engine log line to the sink, then calls the original Serialize.
void __fastcall SerializeDetour(void* self, void* edx, const char* text, uint32_t event) {
    // Serialize re-enters itself in some error paths; report each line once.
    if (g_sink && text && !t_inSerialize) {
        t_inSerialize = true;
        g_sink(text, event);
        t_inSerialize = false;
    }

    g_serialize(self, edx, text, event);
}

// Once GLog exists, confirm the hooked function really is its Serialize.
void CheckGLog() {
    void* glog = GLog();

    // GLog does not exist yet, or has no vtable yet; check again on a later frame.
    if (!glog || !*reinterpret_cast<void***>(glog)) {
        return;
    }

    g_checkedGLog = true;
    void* serialize = (*reinterpret_cast<void***>(glog))[0];

    // The device's Serialize is not the function that was hooked, so some lines would be missed.
    if (serialize != reinterpret_cast<void*>(t3::addr::FOutputDeviceFileSerialize)) {
        T3_LOG("warning: GLog %p serializes through %p, not the hooked %p; engine log capture is incomplete", glog,
               serialize, reinterpret_cast<void*>(t3::addr::FOutputDeviceFileSerialize));
    }
}

// ---- name and object helpers ----------------------------------------------------

// True once the name table is initialised and has entries.
bool NamesReady() {
    return *reinterpret_cast<int*>(t3::addr::FNameInitialized) != 0 && t3::FNameNames().Num > 0;
}

// Base text of a name (without its number), or nullptr for an invalid name.
const char* NameText(uint32_t value) {
    auto& names = t3::FNameNames();
    uint32_t index = value & 0xFFFF;

    // An index past the name table is not a valid name.
    if (index >= uint32_t(names.Num)) {
        return nullptr;
    }

    t3::FNameEntry* entry = names.Data[index];
    return entry ? entry->Name : nullptr;
}

// True when `object` is named exactly `text`, with no number.
bool NameIs(const UObject* object, const char* text) {
    const char* name = NameText(object->Name.Value);
    return name && object->Name.Number() == 0 && strcmp(name, text) == 0;
}

// The object pointer stored `offset` bytes into `object`.
UObject* Field(const UObject* object, uint32_t offset) {
    return *reinterpret_cast<UObject* const*>(reinterpret_cast<const uint8_t*>(object) + offset);
}

UObject* ClassOf(const UObject* object) {
    return reinterpret_cast<UObject*>(object->Class);
}

// Copies `size` bytes at `address` into `out`; false if any of them is unreadable.
bool SafeRead(const void* address, void* out, size_t size) {
    // Reading engine memory can fault; report that as an unreadable range instead of crashing.
    __try {
        memcpy(out, address, size);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

// The object that is its own class and is named Class (the class of every class), or nullptr.
UObject* FindClassClass() {
    UObject* classClass = nullptr;

    // Look at every live object for the one that is its own class.
    for (UObject* object : t3::GObjObjects()) {
        // The class of all classes is named Class and is its own class.
        if (object && ClassOf(object) == object && NameIs(object, "Class")) {
            classClass = object;
        }
    }

    return classClass;
}

// The class object named `name` (a class of class Class), or nullptr.
UObject* FindClassNamed(UObject* classClass, const char* name) {
    // Look at every live object for a class with this name.
    for (UObject* object : t3::GObjObjects()) {
        // A class here is an object whose class is Class.
        if (object && ClassOf(object) == classClass && NameIs(object, name)) {
            return object;
        }
    }

    return nullptr;
}

// ---- object layout validation ----------------------------------------------------

// The offset in a UObject that holds package Core when read from class Object (that is Object's Outer), or 0.
uint32_t FindOuterOffset(UObject* objectClass, UObject* packageClass, const std::unordered_set<const UObject*>& live) {
    // Try each candidate offset for Outer.
    for (uint32_t offset = kOuterSearchBegin; offset < kOuterSearchEnd; offset += 4) {
        UObject* candidate = Field(objectClass, offset);

        // Object's Outer is the package Core.
        if (live.count(candidate) && ClassOf(candidate) == packageClass && NameIs(candidate, "Core")) {
            return offset;
        }
    }

    return 0;
}

// Finds the offset whose field chains the most classes up to class Object, and how many classes it does that for.
// Each chain is followed for at most kMaxSuperDepth steps and only through live class objects.
uint32_t FindSuperFieldOffset(UObject* objectClass, UObject* classClass, const std::unordered_set<const UObject*>& live,
                              int* bestHits) {
    auto isClass = [&](const UObject* object) {
        return object && ClassOf(object) == classClass;
    };

    uint32_t bestOffset = 0;
    *bestHits = 0;

    // Try each candidate offset for SuperField.
    for (uint32_t offset = kSuperSearchBegin; offset < kSuperSearchEnd; offset += 4) {
        int hits = 0;

        // Count how many classes this offset chains up to Object.
        for (UObject* object : t3::GObjObjects()) {
            // Only class objects have a SuperField.
            if (!isClass(object)) {
                continue;
            }

            const UObject* cls = object;

            // Follow the chain a bounded number of steps.
            for (int depth = 0; depth < kMaxSuperDepth; ++depth) {
                // Reached class Object: this class chains up correctly.
                if (cls == objectClass) {
                    ++hits;
                    break;
                }

                UObject* super = Field(cls, offset);

                // Stop at a pointer that is not a live class.
                if (!live.count(super) || !isClass(super)) {
                    break;
                }

                cls = super;
            }
        }

        // Keep the offset that chains the most classes.
        if (hits > *bestHits) {
            *bestHits = hits;
            bestOffset = offset;
        }
    }

    return bestOffset;
}

// Checks the UObject layout against known objects and finds the offsets that
// stock Unreal Engine 2 layouts do not pin down for this fork. On failure
// returns false with the reason in `*why`; on success stores the offsets in g_layout.
bool TryValidateLayout(const char** why) {
    auto& objects = t3::GObjObjects();

    // The name table or the object table is not filled in yet.
    if (!NamesReady() || objects.Num <= 0) {
        *why = "object system not initialised";
        return false;
    }

    std::unordered_set<const UObject*> live;
    live.reserve(size_t(objects.Num) * 2);

    // Collect the live objects for the pointer checks below.
    for (UObject* object : objects) {
        // Skip empty slots of the object table.
        if (object) {
            live.insert(object);
        }
    }

    UObject* classClass = FindClassClass();

    // Without the class of classes nothing else can be checked.
    if (!classClass) {
        *why = "no object named Class that is its own class";
        return false;
    }

    auto isClass = [&](const UObject* object) {
        return object && ClassOf(object) == classClass;
    };
    UObject* objectClass = FindClassNamed(classClass, "Object");
    UObject* packageClass = FindClassNamed(classClass, "Package");

    // Both classes are needed to locate the offsets.
    if (!objectClass || !packageClass) {
        *why = "classes Object/Package not found";
        return false;
    }

    // Outer: the field of class Object that holds package Core.
    uint32_t outer = FindOuterOffset(objectClass, packageClass, live);

    // Outer was not found at any candidate offset.
    if (!outer) {
        *why = "no UObject field of class Object points at package Core";
        return false;
    }

    // SuperField: the field that chains (nearly) every class up to Object.
    int classes = 0;

    // Count the class objects: the total the SuperField offset is judged against.
    for (UObject* object : objects) {
        classes += isClass(object);
    }

    int bestHits = 0;
    uint32_t bestOffset = FindSuperFieldOffset(objectClass, classClass, live, &bestHits);

    // Accept the offset only when at least 95 percent of the classes reach Object through it.
    if (bestHits * 100 < classes * 95) {
        *why = "no class field chains the classes up to Object";
        return false;
    }

    g_layout.outer = outer;
    g_layout.superField = bestOffset;
    T3_LOG(
        "object layout validated: %d objects, %d classes, Outer at 0x%X, SuperField at 0x%X (%d/%d classes reach "
        "Object)",
        objects.Num, classes, outer, bestOffset, bestHits, classes);
    return true;
}

// Recursive helper for PathName(): writes outermost object first, then '.',
// down to `object` itself; capped in case an Outer chain is ever cyclic.
void AppendPath(UObject* object, std::string& out, int depth) {
    UObject* outer = Outer(object);

    // Write the outer chain first, up to a depth limit.
    if (outer && depth < kMaxOuterDepth) {
        AppendPath(outer, out, depth + 1);
        out += '.';
    }

    out += ObjectName(object);
}

// ---- reflection dump -------------------------------------------------------------

// Writes one "N <index> <function>" line for every non-null entry of GNatives: the native function of each opcode
// and numbered native.
void WriteNatives(FILE* file) {
    auto natives = reinterpret_cast<const uint32_t*>(t3::addr::GNatives);

    // Visit every entry of GNatives.
    for (int i = 0; i < kNativeCount; ++i) {
        uint32_t function = 0;

        // Write the entries that are readable and not null.
        if (SafeRead(natives + i, &function, sizeof(function)) && function) {
            fprintf(file, "N %d %08X\n", i, function);
        }
    }
}

// Writes "O <index> <address> <class> <path> <bytes>" for a field object (class, state, function, struct, property,
// ...): its raw bytes from the vtable on, as many as are readable up to kDumpBytes. For a class also writes
// "V <path> <default object> <vtable>": the class's default object (class + kClassDefaultsOffset) and that
// object's vtable.
void WriteFieldObject(FILE* file, int index, UObject* object, UObject* classClass) {
    static const char kHexDigits[] = "0123456789ABCDEF";
    uint8_t bytes[kDumpBytes];
    char hex[kDumpBytes * 2 + 1];

    size_t size = kDumpBytes;

    // Shrink the read until it stays inside readable memory.
    while (size && !SafeRead(object, bytes, size)) {
        size -= 0x10;  // the object ends at unreadable memory
    }

    // Write each byte as two hex digits.
    for (size_t i = 0; i < size; ++i) {
        hex[2 * i] = kHexDigits[bytes[i] >> 4];
        hex[2 * i + 1] = kHexDigits[bytes[i] & 0xF];
    }

    hex[2 * size] = 0;

    std::string path = PathName(object);
    fprintf(file, "O %d %08X %s %s %s\n", index, uint32_t(reinterpret_cast<uintptr_t>(object)),
            ObjectName(ClassOf(object)).c_str(), path.c_str(), hex);

    // A class also gets its default object and that object's vtable written.
    if (ClassOf(object) == classClass) {
        uint32_t defaults = 0;
        uint32_t vtable = 0;

        // The default object pointer must be readable and not null before its vtable is read.
        if (SafeRead(reinterpret_cast<const uint8_t*>(object) + kClassDefaultsOffset, &defaults, sizeof(defaults)) &&
            defaults) {
            SafeRead(reinterpret_cast<const void*>(uintptr_t(defaults)), &vtable, sizeof(vtable));
        }

        fprintf(file, "V %s %08X %08X\n", path.c_str(), defaults, vtable);
    }
}

}  // namespace

// ---- public API (engine.hpp) -----------------------------------------------------

Build CheckBuild() {
    auto base = reinterpret_cast<BYTE*>(GetModuleHandleW(nullptr));
    auto nt = reinterpret_cast<IMAGE_NT_HEADERS*>(base + reinterpret_cast<IMAGE_DOS_HEADER*>(base)->e_lfanew);

    Build build{nt->FileHeader.TimeDateStamp, nt->OptionalHeader.SizeOfImage, false};
    build.supported = build.timestamp == kSupportedTimestamp && build.imageSize == kSupportedImageSize &&
                      reinterpret_cast<uintptr_t>(base) == 0x10900000;

    // Only a build with the right timestamp, size and base is worth hashing.
    if (build.supported) {
        build.supported = SupportedExecutableHash();
    }

    return build;
}

const Layout& GetLayout() {
    return g_layout;
}

bool Exiting() {
    // Once the engine is shutting down it stays that way.
    if (g_exiting) {
        return true;
    }

    auto flag = [](uintptr_t address) {
        return *reinterpret_cast<const int*>(address) != 0;
    };
    bool running = flag(t3::addr::GIsRunning);
    g_sawRunning |= running;

    // Exit requested, critical error, or GIsRunning dropped after having been set.
    if (flag(t3::addr::GIsRequestingExit) || flag(t3::addr::GIsCriticalError) || (g_sawRunning && !running)) {
        g_exiting = true;
        T3_LOG("engine shutting down (requesting exit %d, critical error %d, running %d); engine access closed",
               flag(t3::addr::GIsRequestingExit), flag(t3::addr::GIsCriticalError), running);
    }

    return g_exiting;
}

bool Ready() {
    return g_ready && !Exiting();
}

void SetLogSink(LogSink sink) {
    g_sink = sink;
}

bool HookEngineLog() {
    auto target = reinterpret_cast<void*>(t3::addr::FOutputDeviceFileSerialize);
    MH_STATUS status =
        MH_CreateHook(target, reinterpret_cast<void*>(&SerializeDetour), reinterpret_cast<void**>(&g_serialize));

    // Enable the hook only once it was created.
    if (status == MH_OK) {
        status = MH_EnableHook(target);
    }

    // Creating or enabling the hook failed.
    if (status != MH_OK) {
        T3_LOG("engine log hook failed: %s", MH_StatusToString(status));
        return false;
    }

    g_serializeTarget = target;
    return true;
}

void OnFrame() {
    // Check GLog's Serialize once, after the hook is in place.
    if (g_serializeTarget && !g_checkedGLog) {
        CheckGLog();
    }

    // Nothing more to do once the layout is validated.
    if (g_ready) {
        return;
    }

    DWORD now = GetTickCount();

    // Try at most once per interval.
    if (now - g_lastAttempt < kValidateRetryMs) {
        return;
    }

    g_lastAttempt = now;

    const char* why = "";
    g_ready = TryValidateLayout(&why);

    // Log a failure once, and only after the object system exists.
    if (!g_ready && !g_loggedFailure && NamesReady() && t3::GObjObjects().Num > 0) {
        g_loggedFailure = true;
        T3_LOG("object layout not validated yet (%s); retrying every second", why);
    }
}

int ObjectCount() {
    return Ready() ? t3::GObjObjects().Num : 0;
}

UObject* ObjectAt(int index) {
    auto& objects = t3::GObjObjects();
    return Ready() && index >= 0 && index < objects.Num ? objects.Data[index] : nullptr;
}

UObject* Outer(UObject* object) {
    return object && g_layout.outer ? Field(object, g_layout.outer) : nullptr;
}

bool IsA(UObject* object, UObject* cls) {
    // Not usable before the layout is validated, or without both objects.
    if (!Ready() || !object || !cls) {
        return false;
    }

    UObject* current = ClassOf(object);

    // Walk up the class chain, bounded in case it is cyclic.
    for (int depth = 0; current && depth < kMaxSuperDepth; ++depth) {
        // Found the class asked for.
        if (current == cls) {
            return true;
        }

        current = Field(current, g_layout.superField);
    }

    return false;
}

UObject* FindObject(const char* className, const char* pathName) {
    // Not usable before the layout is validated, or without a path.
    if (!Ready() || !pathName) {
        return nullptr;
    }

    // Look at every live object.
    for (UObject* object : t3::GObjObjects()) {
        // Skip empty slots and objects of another class than the one asked for.
        if (!object || (className && ObjectName(ClassOf(object)) != className)) {
            continue;
        }

        // The full path matches.
        if (PathName(object) == pathName) {
            return object;
        }
    }

    return nullptr;
}

std::string NameToString(uint32_t name) {
    const char* text = NameText(name);

    // An invalid name has no text.
    if (!text) {
        return "<invalid name>";
    }

    std::string out = text;

    // A name number other than zero is written as a suffix.
    if (uint16_t number = uint16_t(name >> 16)) {
        out += "__" + std::to_string(number - 1);
    }

    return out;
}

std::string ObjectName(UObject* object) {
    return object ? NameToString(object->Name.Value) : "None";
}

std::string PathName(UObject* object) {
    std::string out;

    // A null object has an empty path.
    if (object) {
        AppendPath(object, out, 0);
    }

    return out;
}

int DumpObjects(const std::filesystem::path& file) {
    // Not usable before the engine is ready.
    if (!Ready()) {
        return 0;
    }

    FILE* out = _wfopen(file.c_str(), L"w");

    // The file could not be created.
    if (!out) {
        return 0;
    }

    int count = 0;
    auto& objects = t3::GObjObjects();

    // Write a line for each live object.
    for (int i = 0; i < objects.Num; ++i) {
        // Skip empty slots.
        if (UObject* object = objects.Data[i]) {
            fprintf(out, "%6d %-32s %s\n", i, ObjectName(ClassOf(object)).c_str(), PathName(object).c_str());
            ++count;
        }
    }

    fclose(out);
    return count;
}

int DumpReflection(const std::filesystem::path& file) {
    // Not usable before the engine is ready.
    if (!Ready()) {
        return 0;
    }

    UObject* classClass = FindClassClass();
    UObject* fieldClass = classClass ? FindClassNamed(classClass, "Field") : nullptr;

    // The Field class is needed to select the objects to dump.
    if (!fieldClass) {
        return 0;
    }

    FILE* out = _wfopen(file.c_str(), L"w");

    // The file could not be created.
    if (!out) {
        return 0;
    }

    auto& objects = t3::GObjObjects();
    fprintf(out, "# T3SDK reflection dump: %d objects, Outer at 0x%X, SuperField at 0x%X\n", objects.Num,
            g_layout.outer, g_layout.superField);
    WriteNatives(out);

    int count = 0;

    // Dump every object whose class derives from Field.
    for (int i = 0; i < objects.Num; ++i) {
        UObject* object = objects.Data[i];

        // Skip empty slots and objects that are not fields.
        if (!object || !IsA(object, fieldClass)) {
            continue;
        }

        WriteFieldObject(out, i, object, classClass);
        ++count;
    }

    fclose(out);
    return count;
}

}  // namespace t3sdk::engine
