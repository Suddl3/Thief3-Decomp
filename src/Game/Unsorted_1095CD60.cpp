// Game/Unsorted_1095CD60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1095CF00.h"
#include "Game/Struct_1095CF00.h"

// FUNCTION: 0x1095CF00 ?FUN_1095cf00@@YG_NPAUStruct_1095CF00@@PAVClass_1095CF00@@@Z
bool __stdcall FUN_1095cf00(Struct_1095CF00* Key, Class_1095CF00* Set)
{
    for (int i = 0; i < (Set->Unknown08 == 0 ? 0 : Set->Unknown0C - Set->Unknown08); i++)
    {
        Struct_1095CF00* Element = Set->Unknown08[i];
        if (Element->Unknown00 == Key->Unknown00 && Element->Unknown04 == Key->Unknown04 && Element->Unknown08 == Key->Unknown08)
            return true;
    }
    return false;
}
