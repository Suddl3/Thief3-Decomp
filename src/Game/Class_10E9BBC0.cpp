// Game/Class_10E9BBC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E9BBC0_Unknown3C.h"

struct Entry_10C32C30;

class Class_10C49740
{
public:
    bool FUN_10c49740(int* A, Entry_10C32C30** B);
    void FUN_10c49ab0(int* A);
};

class Class_10E9BBC0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void RemoveEntry(int A);

    Class_10C49740 m_Entries;
    char Unknown05[0x37];
    Class_10E9BBC0_Unknown3C* Unknown3C;
};

// FUNCTION: 0x10C49A60 ?RemoveEntry@Class_10E9BBC0@@UAEXH@Z
void Class_10E9BBC0::RemoveEntry(int A)
{
    Entry_10C32C30* Entry = 0;
    if (m_Entries.FUN_10c49740(&A, &Entry))
    {
        Unknown3C->Virtual1(Entry);
        m_Entries.FUN_10c49ab0(&A);
    }
}
