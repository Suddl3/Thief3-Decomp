// Crash reporter: a vectored exception handler that logs the first few faults
// (location, registers, code addresses on the stack) and then always defers
// to whatever handler would have run without it (see crash.hpp).
//
// The handler is registered first in the chain, so it sees every first-chance
// exception before the game's own handlers. It only reports the kinds of fault
// that signal a bug, reports each fault address once, and stops after
// kMaxReports reports so a fault in a loop cannot flood the log.
#include "crash.hpp"

#include "log.hpp"
#include "mods.hpp"

#include <intrin.h>

#include <atomic>
#include <cstdint>
#include <cstdio>

namespace t3sdk::crash {
namespace {

// The most faults the handler reports in one run.
constexpr int kMaxReports = 32;

// Where T3Main.exe is loaded; the SDK refuses to run on any other base (engine.cpp's CheckBuild), docs/engine.md.
constexpr uintptr_t kGameBase = 0x10900000;

// The address range of the SDK DLL's image, set by Install.
uintptr_t g_sdkBegin = 0;
uintptr_t g_sdkEnd = 0;

// The end of T3Main.exe's image, set by Install.
uintptr_t g_gameEnd = 0;

// How many faults the handler has claimed a report slot for; any thread may raise one.
std::atomic<int> g_reports{0};

// The fault address of each report, so one address is reported only once.
uintptr_t g_reported[kMaxReports] = {};

// The first address after the image loaded at `base`.
uintptr_t ImageEnd(uintptr_t base) {
    auto nt =
        reinterpret_cast<const IMAGE_NT_HEADERS*>(base + reinterpret_cast<const IMAGE_DOS_HEADER*>(base)->e_lfanew);
    return base + nt->OptionalHeader.SizeOfImage;
}

// True when `address` lies in T3Main.exe or in the SDK DLL.
bool InGameOrSdk(uintptr_t address) {
    return (address >= kGameBase && address < g_gameEnd) || (address >= g_sdkBegin && address < g_sdkEnd);
}

// "T3Main.exe+0x123", "T3SDK+0x45", "<mod>+0x67" or the raw address.
// No loader calls: they can deadlock while the faulting thread holds the loader lock.
void Describe(uintptr_t address, char* out, size_t size) {
    // The game's image first: report the offset from T3Main.exe's fixed base.
    if (address >= kGameBase && address < g_gameEnd) {
        snprintf(out, size, "T3Main.exe+0x%X (%08X)", unsigned(address - kGameBase), unsigned(address));
    } else if (address >= g_sdkBegin && address < g_sdkEnd) {
        snprintf(out, size, "T3SDK+0x%X", unsigned(address - g_sdkBegin));
    } else if (const char* mod = mods::NameAt(reinterpret_cast<const void*>(address))) {
        snprintf(out, size, "mod %s (%08X)", mod, unsigned(address));
    } else {
        snprintf(out, size, "%08X", unsigned(address));
    }
}

// True for the exception codes that signal a bug; the others (C++ exceptions, debugger breaks, ...) are ignored.
bool Interesting(DWORD code) {
    // Only these exception codes signal a bug worth reporting.
    switch (code) {
        case EXCEPTION_ACCESS_VIOLATION:
        case EXCEPTION_ILLEGAL_INSTRUCTION:
        case EXCEPTION_PRIV_INSTRUCTION:
        case EXCEPTION_INT_DIVIDE_BY_ZERO:
        case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:
        case EXCEPTION_STACK_OVERFLOW:
        case STATUS_STACK_BUFFER_OVERRUN:
            return true;

        // An int3 reached without a debugger: code jumped into padding, or the game's own debug break
        // on a failed check. It ends the game (exit code 0x80000003), so it is worth its stack.
        case EXCEPTION_BREAKPOINT:
            return !IsDebuggerPresent();
        default:
            return false;
    }
}

// Claims a report slot for a fault at `address`. False when the address was already reported or the slots are used up.
bool ClaimReport(uintptr_t address) {
    int slot = g_reports.load();

    // Skip an address that already has a report.
    for (int i = 0; i < slot && i < kMaxReports; ++i) {
        // Same fault address as an earlier report.
        if (g_reported[i] == address) {
            return false;
        }
    }

    slot = g_reports.fetch_add(1);

    // All report slots are used; stay quiet from here on.
    if (slot >= kMaxReports) {
        return false;
    }

    g_reported[slot] = address;
    return true;
}

// Logs the fault's code, location, thread and, for an access violation, the kind of access and the address.
void LogFault(const EXCEPTION_RECORD* record, uintptr_t address) {
    char where[96];
    Describe(address, where, sizeof(where));

    // An access violation also says whether it read, wrote or executed, and at which address.
    if (record->ExceptionCode == EXCEPTION_ACCESS_VIOLATION && record->NumberParameters >= 2) {
        const char* op = record->ExceptionInformation[0] == 0   ? "reading"
                         : record->ExceptionInformation[0] == 1 ? "writing"
                                                                : "executing";
        T3_LOG("first-chance fault 0x%08lX at %s: %s %08X (thread %lu)", record->ExceptionCode, where, op,
               unsigned(record->ExceptionInformation[1]), GetCurrentThreadId());
    } else {
        T3_LOG("first-chance fault 0x%08lX at %s (thread %lu)", record->ExceptionCode, where, GetCurrentThreadId());
    }
}

// Logs the general-purpose registers at the fault.
void LogRegisters(const CONTEXT* context) {
    T3_LOG("  eax=%08lX ebx=%08lX ecx=%08lX edx=%08lX esi=%08lX edi=%08lX ebp=%08lX esp=%08lX", context->Eax,
           context->Ebx, context->Ecx, context->Edx, context->Esi, context->Edi, context->Ebp, context->Esp);
}

// Logs the first few values on the stack that point into game, SDK or mod code. They approximate the call chain
// (frame pointers are omitted).
void LogStack(const CONTEXT* context) {
    char line[512];
    int length = snprintf(line, sizeof(line), "  stack:");
    auto stack = reinterpret_cast<const uintptr_t*>(context->Esp);
    auto stackBase = reinterpret_cast<const uintptr_t*>(__readfsdword(0x04));  // NT_TIB::StackBase

    int found = 0;

    // Scan the stack for at most 256 words, until 10 code addresses are found or the line buffer is nearly full.
    for (int i = 0; i < 256 && stack + i < stackBase && found < 10 && length < int(sizeof(line)) - 40; ++i) {
        uintptr_t value = stack[i];
        bool isCode = InGameOrSdk(value) || mods::NameAt(reinterpret_cast<const void*>(value));

        // Only code addresses help to rebuild the call chain.
        if (!isCode) {
            continue;
        }

        char text[96];
        Describe(value, text, sizeof(text));
        length += snprintf(line + length, sizeof(line) - length, " %s", text);
        ++found;
    }

    T3_LOG("%s", line);
}

// Logs how much of the process's address space is in use and the largest free block left. The game's
// allocator stops with a breakpoint when VirtualAlloc fails, so this tells running out of address space
// (2 GB for this 32-bit game) from a real bug. VirtualQuery allocates nothing: safe in the handler.
void LogAddressSpace() {
    uintptr_t free = 0;
    uintptr_t largest = 0;
    MEMORY_BASIC_INFORMATION info;

    // Walk the user address space region by region.
    for (uintptr_t address = 0x10000; address < 0x7FFF0000;) {
        // A failed query means the walk left the address space.
        if (!VirtualQuery(reinterpret_cast<const void*>(address), &info, sizeof(info))) {
            break;
        }

        // Free regions are what VirtualAlloc can still hand out.
        if (info.State == MEM_FREE) {
            free += info.RegionSize;
            largest = info.RegionSize > largest ? info.RegionSize : largest;
        }

        address = reinterpret_cast<uintptr_t>(info.BaseAddress) + info.RegionSize;
    }

    T3_LOG("  address space: %u MB of 2047 MB in use, %u MB free, largest free block %u MB",
           unsigned((0x7FFF0000 - 0x10000 - free) >> 20), unsigned(free >> 20), unsigned(largest >> 20));
}

// The vectored handler: reports a fault the first time its address is seen, then always lets the search go on, so
// the game's own handlers still run.
LONG CALLBACK Handler(EXCEPTION_POINTERS* info) {
    const EXCEPTION_RECORD* record = info->ExceptionRecord;

    // Ignore exceptions that are not bugs (C++ exceptions, debugger breaks, ...).
    if (!Interesting(record->ExceptionCode)) {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    auto address = reinterpret_cast<uintptr_t>(record->ExceptionAddress);

    // Each address is reported once, and only up to the limit.
    if (!ClaimReport(address)) {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    LogFault(record, address);
    LogRegisters(info->ContextRecord);
    LogStack(info->ContextRecord);
    LogAddressSpace();
    return EXCEPTION_CONTINUE_SEARCH;
}

}  // namespace

void Install(HMODULE self) {
    g_sdkBegin = reinterpret_cast<uintptr_t>(self);
    g_sdkEnd = ImageEnd(g_sdkBegin);
    g_gameEnd = ImageEnd(kGameBase);
    AddVectoredExceptionHandler(1, &Handler);
}

}  // namespace t3sdk::crash
