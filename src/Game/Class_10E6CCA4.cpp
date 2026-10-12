// Game/Class_10E6CCA4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A93D00.h"
#include "Game/Class_10D52BD0.h"
#include "Game/Class_10E6CCA4.h"

class Class_10A174E0
{
public:
    virtual int Virtual0(int A);
};

Class_10A174E0* GetStats();

Class_10D52BD0* __stdcall FUN_10d52dd0(int A, int B);

struct Struct_10A93D60
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10A93D60 ?FUN_10a93d60@Class_10E6CCA4@@UAEHHHPAVClass_10A93D00@@@Z
int Class_10E6CCA4::FUN_10a93d60(int A, int B, Class_10A93D00* C)
{
    int First = C->Virtual5(0);
    Struct_10A93D60* Second = C->Virtual4(1);
    Class_10A174E0* Manager = GetStats();
    int Id = Second->Unknown04;
    FUN_10d52dd0(First, Manager->Virtual0(Id))->FUN_10d52bd0();
    return 1;
}
