// Game/Unsorted_10B2AC00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

class Class_10B2BC90_Unknown
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual int Virtual8();
};

class cHUDLightGem
{
public:
    Class_10B2BC90_Unknown* GetItem(int A);
    void FUN_10b2b6e0();

    char Unknown00[0x118];
    int Count;
    char Unknown11C[4];
    int* Data;
};

// FUNCTION: 0x10B2B6E0 ?FUN_10b2b6e0@cHUDLightGem@@QAEXXZ
void cHUDLightGem::FUN_10b2b6e0()
{
    for (int i = 0; i < Count; i++)
    {
        Class_10B2BC90_Unknown* A = GetItem(Data[i]);
        Class_10B2BC90_Unknown* B = GetItem(i);
        if (A && B)
            A->Virtual5(B->Virtual8());
    }
}
