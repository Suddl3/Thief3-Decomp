// Game/Unsorted_10C3FBE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Class_10C3FF10.h"
#include "Game/Class_10C40590.h"
#include "Game/Class_10C41500.h"
#include "Game/Class_10C63E90.h"
#include "Game/Struct_10C40590_Item.h"
#include "Game/Struct_10C41500.h"
#include "Game/Struct_10C63E90.h"

// FUNCTION: 0x10C3FF10 ?FUN_10c3ff10@Class_10C3FF10@@QAEXH@Z
void Class_10C3FF10::FUN_10c3ff10(int Value)
{
    if (Unknown128 != -1)
    {
        if (Value != -1)
        {
            Unknown128 = Value;
        }
        UnknownF0 = Unknown128;
        Unknown128 = -1;
    }
}

// FUNCTION: 0x10C40590 ?FUN_10c40590@Class_10C40590@@QAEHXZ
int Class_10C40590::FUN_10c40590()
{
    return Unknown0BC.size();
}

// FUNCTION: 0x10C41500 ?FUN_10c41500@Class_10C41500@@QAE?AUStruct_10C63E90@@H@Z
Struct_10C63E90 Class_10C41500::FUN_10c41500(int Index)
{
    return UnknownBC[Index].Unknown00->FUN_10c63e90();
}
