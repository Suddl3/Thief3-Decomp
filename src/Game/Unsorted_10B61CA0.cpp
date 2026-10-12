// Game/Unsorted_10B61CA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B61CA0.h"

class cIntArray
{
public:
    int Unknown00;
    int m_CapacityBytes;
    void** Unknown08;
};

class Class_10B61CE0
{
public:
    int FUN_10b61ce0();

    char Unknown00[0xC4];
    void* UnknownC4;
    char UnknownC8[0xD4];
    cIntArray Unknown19C;
};

// FUNCTION: 0x10B61CA0 ?FUN_10b61ca0@Class_10B61CA0@@QAEHXZ
int Class_10B61CA0::FUN_10b61ca0()
{
    int Result = -1;
    int i = 0;
    bool Done = false;
    while (!Done)
    {
        if (i >= Unknown190)
        {
            Result = -1;
            Done = true;
        }
        else if (Unknown198[i] == UnknownC4)
        {
            Result = i;
            Done = true;
        }
        i++;
    }
    return Result;
}

// FUNCTION: 0x10B61CE0 ?FUN_10b61ce0@Class_10B61CE0@@QAEHXZ
int Class_10B61CE0::FUN_10b61ce0()
{
    int Index = -1;
    int i = 0;
    bool Found = false;
    while (!Found)
    {
        if (i >= Unknown19C.Unknown00)
        {
            Index = -1;
            Found = true;
        }
        else if (Unknown19C.Unknown08[i] == UnknownC4)
        {
            Index = i;
            Found = true;
        }
        i++;
    }
    return Index;
}
