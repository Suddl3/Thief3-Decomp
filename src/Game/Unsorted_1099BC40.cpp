// Game/Unsorted_1099BC40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

extern UClass* DAT_10f352dc;

// FUNCTION: 0x1099BC40 ?FUN_1099bc40@@YAXXZ
void FUN_1099bc40()
{
    if (ULinkDataObject::StaticClass() != DAT_10f352dc)
        DAT_10f352dc->SuperField = ULinkDataObject::StaticClass();
    else
        DAT_10f352dc->SuperField = NULL;
    DAT_10f352dc->ClassWithin = UObject::StaticClass();
    DAT_10f352dc->SetClass(UClass::StaticClass());
    if (UObject::GetInitialized() && DAT_10f352dc->GetClass() == UClass::StaticClass())
        DAT_10f352dc->Register();
}
