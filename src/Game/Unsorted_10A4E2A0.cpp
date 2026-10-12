// Game/Unsorted_10A4E2A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cIntArray.h"
#include "Game/Class_10A4E630.h"

class AActor
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)
};

class Class_10B9D4B0_Result;

void* FUN_10add8a0(const char* Name);

void FUN_10ad1fa0();

Class_10B9D4B0_Result* FUN_10adc3b0(void* Package, int Class, const char* Name, int Exact);

extern void* DAT_10f3e46c;

// FUNCTION: 0x10A4E630 ?AddBoundKeys@Class_10A4E630@@QAEXPAVcIntArray@@@Z
void Class_10A4E630::AddBoundKeys(cIntArray* Set)
{
    for (int i = 0; i < 0xff; i++)
    {
        if (m_KeyBindings[i] != 0x40)
        {
            if (Set->FindIndex(i) == -1)
            {
                int Count = Set->Count;
                Set->SetCount(Count + 1);
                Set->Data[Count] = i;
            }
            else
            {
                UClass* Class = AActor::StaticClass();
                if (!DAT_10f3e46c)
                {
                    DAT_10f3e46c = FUN_10add8a0("Core");
                    FUN_10ad1fa0();
                }
                FUN_10adc3b0(DAT_10f3e46c, (int)Class, "EInputKey", 0);
            }
        }
    }
}
