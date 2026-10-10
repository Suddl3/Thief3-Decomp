// Game/Unsorted_10953C90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Item_10953AC0;

class Class_10953AC0
{
public:
    void FUN_10953ac0(int A);

    int Unknown00;
    int Unknown04;
    Item_10953AC0* Unknown08;
};

class Class_10953E40_Member
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

class Class_10953B60
{
public:
    void FUN_10953e40();

    float Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    float Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    float Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    float Unknown3C;
    Class_10953AC0 Unknown40;
    char Unknown4C[8];
    int Unknown54;
    int Unknown58;
    Class_10953E40_Member* Unknown5C;
};

// FUNCTION: 0x10953E40 ?FUN_10953e40@Class_10953B60@@QAEXXZ
void Class_10953B60::FUN_10953e40()
{
    Unknown40.FUN_10953ac0(0);
    Unknown54 = 0;
    Unknown58 = 0;
    if (Unknown5C)
    {
        Unknown5C->Virtual2();
        Unknown5C = 0;
    }
    Unknown2C = 0;
    Unknown1C = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown08 = 0;
    Unknown04 = 0;
    Unknown38 = 0;
    Unknown34 = 0;
    Unknown30 = 0;
    Unknown24 = 0;
    Unknown20 = 0;
    Unknown18 = 0;
    Unknown3C = 1.0f;
    Unknown28 = 1.0f;
    Unknown14 = 1.0f;
    Unknown00 = 1.0f;
}
