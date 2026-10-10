// Game/Unsorted_10924270.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10924370.h"
#include "Game/Class_1094D740.h"
#include "Game/Struct_10924370.h"

struct Struct_10924370_Rect
{
    int X;
    int Y;
    float W;
    float H;
};

// FUNCTION: 0x10924370 ?FUN_10924370@Class_10924370@@QAEXH@Z
void Class_10924370::FUN_10924370(int Index)
{
    Struct_10924370_Rect Rect = { 0, 0, 1.0f, 1.0f };
    if (Index != -1)
    {
        if (Unknown48[Index].Unknown00)
        {
            Rect.X = Unknown48[Index].Unknown04;
            Rect.Y = Unknown48[Index].Unknown08;
            Unknown30.FUN_1094d740(Unknown14, (int)&Rect, 0);
        }
    }
}
