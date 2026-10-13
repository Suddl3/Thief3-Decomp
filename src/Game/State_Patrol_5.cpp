// Game/State_Patrol_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include "Core/Core.h"
#include "Game/cIntArray.h"

class State_Patrol : public UObject
{
public:
    virtual void FUN_10bed530(DWORD A);

    char Unknown2C[0x2C];
    cIntArray Unknown58;
    char Unknown64[0xC];
    int Unknown70;
    int Unknown74;
    int Unknown78;
};

// FUNCTION: 0x10BED530 ?FUN_10bed530@State_Patrol@@UAEXK@Z
void State_Patrol::FUN_10bed530(DWORD A)
{
    UObject::ProcessState(*(FLOAT*)&A);
    if (Unknown70 == A)
        Unknown70 = 0;
    if (Unknown74 == A)
        Unknown74 = 0;
    if (Unknown78 == A)
        Unknown78 = 0;
    for (int i = 0; i < Unknown58.Count; i++)
    {
        if (Unknown58.Data[i] == A)
        {
            cIntArray& Array = Unknown58;
            int Last = Array.Count - 1;
            int Tmp = Array.Data[i];
            Array.Data[i] = Array.Data[Last];
            Array.Data[Last] = Tmp;
            Array.SetCount(Array.Count - 1);
            i--;
        }
    }
}
