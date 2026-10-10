// Game/Unsorted_10924A00_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10924A90
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10924B70
{
public:
    void FUN_10924a90();
    void FUN_109243f0();

    bool Unknown00;
    Object_10924A90* Unknown04;
    Object_10924A90* Unknown08;
    Object_10924A90* Unknown0C;
    int Unknown10;
    char Unknown14[0x94];
    int UnknownA8;
};

// FUNCTION: 0x10924A90 ?FUN_10924a90@Class_10924B70@@QAEXXZ
void Class_10924B70::FUN_10924a90()
{
    FUN_109243f0();
    if (Unknown08)
    {
        Unknown08->Virtual2();
        Unknown08 = 0;
    }
    if (Unknown0C)
    {
        Unknown0C->Virtual2();
        Unknown0C = 0;
    }
    if (Unknown04)
    {
        Unknown04->Virtual2();
        Unknown04 = 0;
    }
    Unknown10 = 0;
    Unknown00 = false;
    UnknownA8 = -1;
}
