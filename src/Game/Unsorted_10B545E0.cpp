// Game/Unsorted_10B545E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10B54760
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
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70(int A);
};

class Class_10B54760
{
public:
    void FUN_10b54760();
    void FUN_10b545e0(float A);
    void FUN_10b53fd0();

    int Unknown00;
    char Unknown04[0xC];
    Object_10B54760** Unknown10;
};

class Class_10905A90_Member
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
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10B542D0
{
public:
    Class_10B542D0()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = 0;
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
};

extern Class_10B542D0* DAT_10ff6580;

// FUNCTION: 0x10B546F0 ?FUN_10b546f0@@YAPAVClass_10B542D0@@XZ
Class_10B542D0* FUN_10b546f0()
{
    if (DAT_10ff6580 == 0)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        Class_10B542D0* Result = new(0, 0, 0, 0, 0) Class_10B542D0;
        DAT_10ff6580 = Result;
        FUN_10905aa0()->Virtual9();
    }
    return DAT_10ff6580;
}

// FUNCTION: 0x10B54760 ?FUN_10b54760@Class_10B54760@@QAEXXZ
void Class_10B54760::FUN_10b54760()
{
    Unknown10[Unknown00]->Virtual70(2);
    FUN_10b545e0(0.5f);
    Unknown00++;
    FUN_10b53fd0();
}
