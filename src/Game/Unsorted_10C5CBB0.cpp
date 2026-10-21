// Game/Unsorted_10C5CBB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10c7d690
{
public:
    bool FUN_10c7d690(int p1);
};

class Class_10E9C858
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool FUN_10c5cbb0();

    char Unknown04[4];
    int Unknown08;
    Class_10c7d690* Unknown0C;
};

// FUNCTION: 0x10C5CBB0 ?FUN_10c5cbb0@Class_10E9C858@@UAE_NXZ
bool Class_10E9C858::FUN_10c5cbb0()
{
    Class_10c7d690* p = Unknown0C;
    return p->FUN_10c7d690(Unknown08);
}
