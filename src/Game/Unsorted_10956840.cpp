// Game/Unsorted_10956840.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cD3DStateCache.h"
#include "Game/Class_10955C80.h"

void FUN_1092bdb0(void* Memory);

class Class_10E4AE8C
{
public:
    void FreeEntry(int Index);

    char Unknown00[0x29C];
    void* m_Entries[1];
};

class Class_10956DB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int);

    void Reset();

    char Unknown04[0x290];
    char Unknown294;
    int Unknown298;
    int m_Entries[9];
};

class cD3DStateCache;

class Class_10955C80;

// FUNCTION: 0x10956DB0 ?Reset@Class_10956DB0@@QAEXXZ
void Class_10956DB0::Reset()
{
    for (int i = 0; i < 9; i++)
        m_Entries[i] = 0;
    Unknown298 = 0;
    Virtual5(0);
    Unknown294 = 0;
}

// FUNCTION: 0x10956F20 ?FreeEntry@Class_10E4AE8C@@QAEXH@Z
void Class_10E4AE8C::FreeEntry(int Index)
{
    if (m_Entries[Index])
    {
        FUN_1092bdb0(m_Entries[Index]);
        m_Entries[Index] = 0;
    }
}
