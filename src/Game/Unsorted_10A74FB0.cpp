// Game/Unsorted_10A74FB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_Field04.h"

// FUNCTION: 0x10A74FB0 ?HasFieldString@@YG_NPAVClass_Field04@@H@Z
bool __stdcall HasFieldString(Class_Field04* Field, int Id)
{
    FString Name;
    if (Field->FUN_1098e290(Id, &Name))
        return Name.Len() != 0;
    return false;
}
