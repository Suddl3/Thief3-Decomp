// Game/Unsorted_10B3B2A0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B3B490_Base
{
public:
    Class_10B3B490_Base()
    {
        Unknown00 = 0;
    }

    int Unknown00;
};

class Class_10E6D208 : public Class_10B3B490_Base
{
public:
    Class_10E6D208()
    {
        Unknown08 = 0;
    }

    virtual ~Class_10E6D208() {}

    int Unknown08;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, Class_10E6D208* C, int* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10B3B490_Arg
{
public:
    char Unknown00[0x31C];
    int Unknown31C;
};

void FUN_10b1f1c0(Class_10B3B490_Arg* Obj);

class Class_10AC9F60
{
public:
    float FUN_10ac9f60(int A);
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x130];
    Class_10AC9F60* Unknown130;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

extern float DAT_10eafbdc;

// FUNCTION: 0x10B3B490 ?FUN_10b3b490@@YGXPAVClass_10B3B490_Arg@@@Z
void __stdcall FUN_10b3b490(Class_10B3B490_Arg* Obj)
{
    if (DAT_10f3a3d8->Unknown130->FUN_10ac9f60(12) > DAT_10eafbdc && Obj->Unknown31C != 0)
    {
        FUN_10b1f1c0(Obj);
        if (Obj->Unknown31C != 0)
        {
            int Key = 0;
            Class_10E6D208 Local;
            DAT_10f46da0->Virtual5(0x34, Obj->Unknown31C, &Local, &Key);
        }
        Obj->Unknown31C = 0;
    }
}
