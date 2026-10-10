// Game/Unsorted_10B31B70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern const char* DAT_10ff37f8;

class Class_10993E20
{
public:
    void FUN_10993e20(int A);
};

class Class_10B21820;

struct Struct_10B21820_Object
{
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
    virtual void Virtual44(int A, int B, int C, int D, int E, int F, float G, int H);
    virtual void Virtual45();
    virtual void Virtual46();
    virtual int Virtual47(FName Name);
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
    virtual void Virtual60(int A);
};

class Class_10B21820 : public Class_10993E20
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

// FUNCTION: 0x10B31B70 ?FUN_10b31b70@@YGXPAVClass_10B21820@@H@Z
void __stdcall FUN_10b31b70(Class_10B21820* A, int B)
{
    Struct_10B21820_Object* Obj = A->FUN_10991e10();
    int R = Obj->Virtual47(DAT_10ff37f8);
    Obj->Virtual60(0);
    Obj->Virtual44(R, 0, 0, 0, B, -1, 1.0f, 1);
    A->FUN_10993e20(0);
}
