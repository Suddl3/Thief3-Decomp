// Game/Unsorted_10C20050_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10C20050.h"
#include "Game/Class_10C20010.h"

// FUNCTION: 0x10C20050 ?FindInRadius@Class_10C20050@@QAEXPAMMPAVcIntArray@@@Z
void Class_10C20050::FindInRadius(float* Center, float Radius, cIntArray* Out)
{
    Radius = Radius * Radius;
    for (int i = 0; i < Unknown00; i++)
    {
        Class_10C20010* Item = (Class_10C20010*)Unknown08[i];
        if (Item->FUN_10c20010().IsWithin(Center, Radius))
        {
            int Index = Out->Count;
            Out->SetCount(Index + 1);
            Out->Data[Index] = (int)Item;
        }
    }
}
