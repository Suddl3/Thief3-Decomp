// Game/Unsorted_10B31B70_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1098E330;

class Class_10B32160;

class Class_10DD7640
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3(int A);
};

Class_10DD7640* FUN_10dd7640();

class Class_10B32100_Unknown10
{
public:
    float FUN_10ac1610();

    char Unknown00[0x44];
    float Unknown44;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x10];
    Class_10B32100_Unknown10* Unknown10;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10B32160
{
public:
    void FUN_10b32100(Class_1098E330* A);
    void FUN_10b31a70(Class_1098E330* A);
    void FUN_10b31ad0(Class_1098E330* A);
};

// FUNCTION: 0x10B32100 ?FUN_10b32100@Class_10B32160@@QAEXPAVClass_1098E330@@@Z
void Class_10B32160::FUN_10b32100(Class_1098E330* A)
{
    if (FUN_10dd7640()->Virtual3(0x3c))
    {
        Class_10B32100_Unknown10* Object = DAT_10f3a3d8->Unknown10;
        if (Object->Unknown44 == Object->FUN_10ac1610())
            FUN_10b31a70(A);
        else
            FUN_10b31ad0(A);
    }
}
