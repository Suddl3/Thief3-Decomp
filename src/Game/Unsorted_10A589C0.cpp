// Game/Unsorted_10A589C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10970890.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10A58B40.h"
#include "Game/Class_10A58BE0_Member.h"
#include "Game/cSequence.h"
#include "Game/Object_10970890.h"

class Class_10E68D80
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual Class_1090A780 GetItem(int Index);

    char Unknown04[0x1B8];
    Class_1090A780 m_Items[15];
};

struct Struct_10A58B40
{
    Class_1098E330* Unknown00;
};

// FUNCTION: 0x10A58B40 ?FUN_10a58b40@Class_10A58B40@@QAEHXZ
int Class_10A58B40::FUN_10a58b40()
{
    int Result = 0;
    Class_1098E330* Owner = Unknown128->Unknown00;
    if (Owner)
    {
        Class_10970890* A = Owner->FUN_10991eb0();
        if (A)
        {
            Object_10970890* B = A->FUN_10970890();
            if (B)
                Result = B->Virtual21();
        }
    }
    return Result;
}

// FUNCTION: 0x10A58BE0 ?FUN_10a58be0@cSequence@@UAEXXZ
void cSequence::FUN_10a58be0()
{
    m_Items[m_Current]->Virtual2();
}

// FUNCTION: 0x10A59320 ?GetItem@Class_10E68D80@@UAE?AVClass_1090A780@@H@Z
Class_1090A780 Class_10E68D80::GetItem(int Index)
{
    return m_Items[Index];
}
