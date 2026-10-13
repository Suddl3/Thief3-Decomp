// Game/Unsorted_10C08590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BB7670.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BAA6B0_Param.h"
#include "Game/Class_10BABED0.h"
#include "Game/Class_10C08590.h"

double GetTimeSeconds();

class Class_10C08590_Owner
{
public:
    char Pad00[0x30];
    Class_10BFD210 Unknown30;
};

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Param);

// FUNCTION: 0x10C08590 ?FUN_10c08590@Class_10C08590@@QAE_NXZ
bool Class_10C08590::FUN_10c08590()
{
    if (GetTimeSeconds() - LastTime < 0.1f)
        return LastResult;
    LastTime = (float)GetTimeSeconds();
    for (int i = 0; i < Count; i++)
    {
        Class_10BAA6B0_Param* Item = (Class_10BAA6B0_Param*)Data[i];
        if (!Item)
            continue;
        if (Item->Virtual85())
        {
            int Value = Data[i];
            int Index = FindIndex(Value);
            if (Index != -1)
                RemoveAt(Index);
            i--;
        }
        else
        {
            Class_10BABED0* Obj = FUN_10baa6b0((Class_10BAA6B0_Param*)Data[i]);
            if (Obj)
            {
                Class_10BB7670* Node = Obj->FUN_10ba9fd0();
                if (Node->FUN_10bb7670())
                {
                    Class_10C08590_Owner* Owner = Obj->FUN_10baa6f0();
                    float L = Owner->Unknown30.FUN_10bfc3a0();
                    float Y = Obj->FUN_10dbd510(0x40100577)->GetFloat();
                    if (Y < L)
                    {
                        LastResult = false;
                        return false;
                    }
                }
            }
        }
    }
    LastResult = true;
    return true;
}
