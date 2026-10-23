// See iat.hpp for what this module is for.
#include "iat.hpp"

#include <cstring>

namespace t3sdk {

void* PatchImport(HMODULE module, const char* dll, const char* function, void* replacement) {
    auto base = reinterpret_cast<BYTE*>(module);
    auto nt = reinterpret_cast<IMAGE_NT_HEADERS*>(base + reinterpret_cast<IMAGE_DOS_HEADER*>(base)->e_lfanew);
    const IMAGE_DATA_DIRECTORY& directory = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];

    // The module has no import table.
    if (!directory.VirtualAddress) {
        return nullptr;
    }

    // Find the descriptor for `dll`, then, by parallel walking `OriginalFirstThunk`
    // (import names, untouched) and `FirstThunk` (the actual call slots the game
    // uses), the slot bound to `function`.
    auto descriptor = reinterpret_cast<IMAGE_IMPORT_DESCRIPTOR*>(base + directory.VirtualAddress);

    // Walk the import descriptors.
    for (; descriptor->Name; ++descriptor) {
        // Not the DLL asked for.
        if (_stricmp(reinterpret_cast<const char*>(base + descriptor->Name), dll) != 0) {
            continue;
        }

        auto names = reinterpret_cast<IMAGE_THUNK_DATA*>(base + descriptor->OriginalFirstThunk);
        auto slots = reinterpret_cast<IMAGE_THUNK_DATA*>(base + descriptor->FirstThunk);

        // Walk the imported names and call slots together.
        for (; names->u1.AddressOfData; ++names, ++slots) {
            // Imports by ordinal have no name to compare.
            if (IMAGE_SNAP_BY_ORDINAL(names->u1.Ordinal)) {
                continue;
            }

            auto byName = reinterpret_cast<IMAGE_IMPORT_BY_NAME*>(base + names->u1.AddressOfData);

            // Not the function asked for.
            if (strcmp(reinterpret_cast<const char*>(byName->Name), function) != 0) {
                continue;
            }

            void* previous = reinterpret_cast<void*>(slots->u1.Function);
            DWORD protect;
            VirtualProtect(&slots->u1.Function, sizeof(void*), PAGE_READWRITE, &protect);
            slots->u1.Function = reinterpret_cast<ULONG_PTR>(replacement);
            VirtualProtect(&slots->u1.Function, sizeof(void*), protect, &protect);
            return previous;
        }
    }

    return nullptr;
}

}  // namespace t3sdk
