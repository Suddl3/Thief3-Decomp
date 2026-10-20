// Game/Unsorted_10A99CE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A7F5A0.h"
#include "Core/Core.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10E6D0F8.h"

class Class_10A99F80_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

extern UClass* DAT_10f3eda0;

Class_10A73EF0_Table* FUN_10af3470();

UClass* FUN_10af1d40(const char* A);

void FUN_10aef840();

// FUNCTION: 0x10A99F80 ?FUN_10a99f80@Class_10E6D0F8@@QAEHHPAVClass_10A99F80_Param@@@Z
int Class_10E6D0F8::FUN_10a99f80(int A, Class_10A99F80_Param* B)
{
    Class_10AAB5C0* V = B->Virtual4(0);
    Class_10A73EF0_Object* Obj = FUN_10af3470()->FUN_10af33e0(V->GetUnknown08());
    if (!DAT_10f3eda0)
    {
        DAT_10f3eda0 = FUN_10af1d40("Core");
        FUN_10aef840();
    }
    if (!((UObject*)Obj)->IsA(DAT_10f3eda0))
        FUN_10a99ce0(A, Obj, V->GetUnknown08(), B->Virtual4(1), B->Virtual4(2), B->Virtual4(3));
    return 1;
}
