// Game/Class_10E8C378_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);

    char* Unknown00;
};

class cString : public Class_1090A780
{
public:
    cString& operator=(const cString& Other);

    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
};

cString FUN_10c12e40(const Class_1090A780& Name, int Value);

extern cString DAT_10ff7064;

class Class_10E8C378
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10c13030();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual int Virtual14();
};

// FUNCTION: 0x10C13030 ?FUN_10c13030@Class_10E8C378@@UAEXXZ
void Class_10E8C378::FUN_10c13030()
{
    DAT_10ff7064 = FUN_10c12e40(DAT_10ff7064, Virtual14());
}
