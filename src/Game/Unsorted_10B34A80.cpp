// Game/Unsorted_10B34A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AF3AA0.h"

class cString
{
public:
    char* Unknown00;
};

class Class_10E7C178
{
public:
    virtual void Virtual0();
    virtual int Virtual1();
    virtual int FUN_10b34a80(int A, Class_10E7C178* B);

    cString Unknown04;
};

extern Class_10AF3AA0* GLog;

bool FUN_1090f010(const int* A, const int* B);

bool FUN_1094c430(const cString& A, const cString& B);

// FUNCTION: 0x10B34A80 ?FUN_10b34a80@Class_10E7C178@@UAEHHPAV1@@Z
int Class_10E7C178::FUN_10b34a80(int A, Class_10E7C178* B)
{
    if (B->Virtual1() != 4)
    {
        GLog->FUN_10af3aa0("cInventoryClassParam tried to relate a parameter of other type %d!", B->Virtual1());
        return 0;
    }
    switch (A)
    {
    case 1:
        return FUN_1090f010((const int*)&Unknown04, (const int*)&B->Unknown04);
    case 6:
        return FUN_1094c430(Unknown04, B->Unknown04);
    }
    GLog->FUN_10af3aa0("cInventoryClassParam relation not supported %d!", A);
    return 0;
}
