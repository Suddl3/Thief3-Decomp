// Game/Unsorted_10B19C30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B19C30.h"
#include "Game/Struct_10B19C30.h"

bool FUN_1090f010(const int* A, const int* B);

struct Struct_10B19C30_Unknown08
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10B19C30 ?FindEntry@Class_10B19C30@@QAEHPBHH@Z
int Class_10B19C30::FindEntry(const int* B, int Index)
{
    Struct_10B19C30& Entry = Unknown04[Index];
    for (int i = 0; i < Entry.Unknown00; i++)
    {
        Struct_10B19C30_Unknown08* Item = &Entry.Unknown08[i];
        if (Item && Item->Unknown00 && Item->Unknown04 > 0)
        {
            if (FUN_1090f010(&Item->Unknown08, B))
                return i;
        }
    }
    return 0;
}
