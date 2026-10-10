// Game/Unsorted_10A84EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A854C0
{
public:
    virtual void Virtual0();
    virtual ~Class_10A854C0();
};

extern Class_10A854C0* DAT_10f3a198;

class Class_10C3F110
{
public:
    void FUN_10c3f120(int A, float B);
};

Class_10C3F110* FUN_10c3fb10();

class Class_10A850C0
{
public:
    void FUN_10a850c0();

    char Unknown00[0x3C];
    float Unknown3C;
    float Unknown40;
    float Unknown44;
    float Unknown48;
};

class Class_10A84F00_Param
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
    virtual int Virtual22();
};

// FUNCTION: 0x10A84F00 ?FUN_10a84f00@@YGHPAVClass_10A84F00_Param@@@Z
int __stdcall FUN_10a84f00(Class_10A84F00_Param* Object)
{
    if (Object->Virtual22() & 0x400)
        return 4;
    if (Object->Virtual22() & 1)
        return 1;
    if (!(Object->Virtual22() & 4) && !(Object->Virtual22() & 0x200))
        return 3;
    return 2;
}

// FUNCTION: 0x10A850C0 ?FUN_10a850c0@Class_10A850C0@@QAEXXZ
void Class_10A850C0::FUN_10a850c0()
{
    FUN_10c3fb10()->FUN_10c3f120(0, Unknown3C);
    FUN_10c3fb10()->FUN_10c3f120(1, Unknown40);
    FUN_10c3fb10()->FUN_10c3f120(2, Unknown44);
    FUN_10c3fb10()->FUN_10c3f120(3, Unknown48);
}

// FUNCTION: 0x10A854C0 ?FUN_10a854c0@@YAXXZ
void FUN_10a854c0()
{
    if (DAT_10f3a198)
    {
        delete DAT_10f3a198;
        DAT_10f3a198 = 0;
    }
}
