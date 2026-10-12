// Game/Unsorted_10BC4BF0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AAF570_Field10.h"
#include "Game/Class_10BC4BF0.h"
#include "Game/Class_10BC4BF0_Member.h"

class Class_10E92B20
{
public:
    virtual void Virtual0();

    void FUN_10bc4ee0(int* p1, int p2);

    // The accessor at 0x10BC4BF0, which the compiler inlines here.
    int GetTargetLinkType()
    {
        Class_10AAF570* Target = Unknown04->Unknown0C;
        if (!Target)
            return 0;
        return Target->GetLinkType();
    }

    Class_10BC4BF0_Member* Unknown04;
};

class Class_10C02030
{
public:
    ~Class_10C02030();
};

struct Struct_10BC5560
{
    int Count;
    int Unknown04;
    Class_10C02030** Items;
};

// FUNCTION: 0x10BC4BF0 ?GetTargetLinkType@Class_10BC4BF0@@QAEHXZ
int Class_10BC4BF0::GetTargetLinkType()
{
    Class_10AAF570* Target = Unknown04->Unknown0C;
    if (!Target)
        return 0;
    return Target->GetLinkType();
}

// FUNCTION: 0x10BC4EE0 ?FUN_10bc4ee0@Class_10E92B20@@QAEXPAHH@Z
void Class_10E92B20::FUN_10bc4ee0(int* p1, int p2)
{
    if (GetTargetLinkType())
        ((Class_10AAF570_Field10*)GetTargetLinkType())->Virtual69(p1, p2);
}

// FUNCTION: 0x10BC5560 ?DeleteAllItems@@YAXPAUStruct_10BC5560@@@Z
void DeleteAllItems(Struct_10BC5560* Array)
{
    for (int i = 0; i < Array->Count; i++)
        delete Array->Items[i];
    Array->Count = 0;
}
