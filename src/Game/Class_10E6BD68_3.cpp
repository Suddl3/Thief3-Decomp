// Game/Class_10E6BD68_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10E6BD68_Unknown0C.h"
#include "Game/Class_10E6BD68_Unknown18.h"

class Class_10E6BD68
{
public:
    virtual void FUN_10a795d0();
    virtual void FUN_10a79610();
    virtual void Virtual2();
    virtual void AddItem(int Item);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10a7a340(void* A, int B);

    int Unknown04;
    int Unknown08;
    Class_10E6BD68_Unknown0C** Unknown0C;
    int Unknown10;
    int Unknown14;
    Class_10E6BD68_Unknown18** Unknown18;
    char Unknown1C[0xC];
    cIntArray m_Items;
};

// FUNCTION: 0x10A79610 ?FUN_10a79610@Class_10E6BD68@@UAEXXZ
void Class_10E6BD68::FUN_10a79610()
{
    for (int i = 0; i < Unknown10; i++)
        delete Unknown18[i];
    Unknown10 = 0;
}
