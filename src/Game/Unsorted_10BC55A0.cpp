// Game/Unsorted_10BC55A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10BBA020.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_109081E0.h"

class Class_10E50610
{
public:
    virtual ~Class_10E50610() {}
};

class Class_10E90914 : public Class_10E50610
{
public:
    Class_10E90914(const Class_109081E0& A);

    virtual void Virtual1();
    virtual bool FUN_10bb44f0(Class_10E90914* Other);

    Class_109081E0 Unknown04;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e90c5c[];

class Class_10E90C5C
{
public:
    Class_10E90C5C() : VTable(DAT_10e90c5c) {}

    void** VTable;
};

class Class_10E94578
{
public:
    void FUN_10bc5b50();

    char Unknown00[0x1C];
    Class_10E90C5C* Unknown1C;
};

class Class_10E8BE68
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
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual char FUN_10bc5bc0();

    Class_10BBA020* Unknown04;
};

// FUNCTION: 0x10BC5B50 ?FUN_10bc5b50@Class_10E8BE68@@QAEXXZ
void Class_10E94578::FUN_10bc5b50()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E90C5C* Result = new(0, 0, 0, 0, 0) Class_10E90C5C;
    if (Unknown1C)
        delete Unknown1C;
    Unknown1C = Result;
    FUN_10905aa0()->Virtual9();
}

// FUNCTION: 0x10BC5BC0 ?FUN_10bc5bc0@Class_10E8BE68@@UAEDXZ
char Class_10E8BE68::FUN_10bc5bc0()
{
    if (Unknown04->FUN_10bba020())
        return true;
    int Value = 0;
    Class_10C7D570* Props = Unknown04->Unknown08;
    if (!((Class_1098E330*)Props->FUN_10c7d570())->FUN_1098e330(0x4080069f, &Value) || !Value)
        return Unknown04->Unknown08->FUN_10dbd510(0x4200057f)->FUN_10bbdb80() == 0;
    return true;
}

// FUNCTION: 0x10BC6A30 ??0Class_10E90914@@QAE@ABVClass_109081E0@@@Z
Class_10E90914::Class_10E90914(const Class_109081E0& A) : Unknown04(A)
{
}
