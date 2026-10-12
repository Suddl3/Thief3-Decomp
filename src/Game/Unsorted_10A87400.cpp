// Game/Unsorted_10A87400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10A854C0.h"
#include "Game/Class_10A86300.h"
#include "Game/Class_10B1BD70.h"
#include "Game/Struct_10A87A70.h"

extern Struct_10AA3520* DAT_10f35dec;

extern class Class_10A854C0* DAT_10f3a198;

extern Class_10A86300 DAT_10f3a1a0;

extern Struct_10A87A70* DAT_10f3a1a4;

class Class_10E6C390
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
    virtual void Virtual4();
    virtual bool Virtual5(int A);
};

Class_10E6C390* FUN_10a86080();

// FUNCTION: 0x10A87950 ?FUN_10a87950@@YAXH@Z
void FUN_10a87950(int A)
{
    if (DAT_10f35dec->UnknownBC->Virtual15(A))
        return;
    if (DAT_10f3a198)
    {
        DAT_10f3a198->Virtual6(A);
        if (DAT_10f3a198->Virtual3())
            return;
        if (DAT_10f3a1a0.Unknown00 <= 0)
            return;
        A = DAT_10f3a1a4 ? DAT_10f3a1a4->Unknown08 : 0;
        if (!DAT_10f35dec->UnknownBC->Virtual19(A))
            return;
        if (DAT_10f35dec->UnknownBC->Virtual14(A, DAT_10f3a198))
            return;
        if (DAT_10f3a198->Virtual5(A))
            DAT_10f3a1a0.Remove(A);
    }
    else
    {
        if (DAT_10f3a1a0.Unknown00 <= 0)
            return;
        A = DAT_10f3a1a4 ? DAT_10f3a1a4->Unknown08 : 0;
        if (!DAT_10f35dec->UnknownBC->Virtual19(A))
            return;
        if (DAT_10f35dec->UnknownBC->Virtual14(A, FUN_10a86080()))
            return;
        if (FUN_10a86080()->Virtual5(A))
            DAT_10f3a1a0.Remove(A);
    }
}
