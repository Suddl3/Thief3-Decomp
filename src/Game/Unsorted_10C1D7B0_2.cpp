// Game/Unsorted_10C1D7B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAE580.h"
#include "Game/Class_10C1F4D0.h"
#include "Game/Class_10DC1750.h"
#include "Game/Class_10DC1750_Result.h"
#include "Game/Class_10FF667C.h"

class Class_10E991C4;

class Class_10E991C4
{
public:
    virtual void Virtual0();
    virtual void FUN_10c1f420(int A);

    Class_10DC1750* Unknown04;
};

extern Class_10FF667C* DAT_10ff667c;

struct Struct_10C1F4D0
{
    int Unknown00;
};

// FUNCTION: 0x10C1F420 ?FUN_10c1f420@Class_10E991C4@@UAEXH@Z
void Class_10E991C4::FUN_10c1f420(int A)
{
    Class_10DC1750_Result* Result = Unknown04->FUN_10dc1750();
    ((Class_10BAE580*)&Result->Unknown1C)->FUN_10bae580(A, this);
}

// FUNCTION: 0x10C1F4D0 ?FUN_10c1f4d0@Class_10C1F4D0@@QAEHPAUStruct_10C1F4D0@@@Z
int Class_10C1F4D0::FUN_10c1f4d0(Struct_10C1F4D0* A)
{
    int Kind = A->Unknown00;
    if (Kind == DAT_10ff667c->Unknown6C || Kind == DAT_10ff667c->Unknown70 || Kind == DAT_10ff667c->Unknown74)
        return 1;
    return 0;
}
