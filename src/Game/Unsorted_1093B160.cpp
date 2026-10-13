// Game/Unsorted_1093B160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1093AF30.h"
#include "Game/Class_1093B3A0.h"

extern "C" char* _strlwr(char* String);

struct Struct_1093B3A0
{
    char Unknown00[4];
    cString Unknown04;
};

// FUNCTION: 0x1093B3A0 ?FUN_1093b3a0@Class_1093B3A0@@QAEXH@Z
void Class_1093B3A0::FUN_1093b3a0(int Value)
{
    if (Value)
    {
        Struct_1093B3A0* Entry = (Struct_1093B3A0*)Value;
        cString Key(Entry->Unknown04);
        if (Key.Unknown00)
            _strlwr(Key.Unknown00);
        Insert(Key, Value);
    }
}
