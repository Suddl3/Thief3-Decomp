// Game/Class_10E6FD0C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10E6FD0C
{
public:
    virtual void FUN_10ac9a40(int Unused1, int Value, int Unused3, int** Key);

    cIntArray Unknown04;
};

// FUNCTION: 0x10AC9A40 ?FUN_10ac9a40@Class_10E6FD0C@@UAEXHHHPAPAH@Z
void Class_10E6FD0C::FUN_10ac9a40(int Unused1, int Value, int Unused3, int** Key)
{
    if (Key[1] && *Key[1] >= 0)
    {
        int Index = *Key[1];
        cIntArray* Array = &Unknown04;
        while (Unknown04.Count < Index + 1)
        {
            int Old = Array->Count;
            Array->SetCount(Old + 1);
            Array->Data[Old] = 0;
        }
        Unknown04.Data[Index] = Value;
        return;
    }
    if (Key[0] && *Key[0] >= 0)
        Unknown04.Data[*Key[0]] = 0;
}
