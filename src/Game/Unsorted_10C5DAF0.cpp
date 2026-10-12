// Game/Unsorted_10C5DAF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C80360_Unknown10
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10C80360_Unknown14
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10C80360_Unknown18
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10C80360_Unknown1C
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10C80360
{
public:
    void Reset();

    char Unknown00[0x0D];
    bool Unknown0D;
    char Unknown0E[2];
    Class_10C80360_Unknown10* Unknown10;
    Class_10C80360_Unknown14* Unknown14;
    Class_10C80360_Unknown18* Unknown18;
    Class_10C80360_Unknown1C* Unknown1C;
};

// FUNCTION: 0x10C5DAF0 ?Reset@Class_10C80360@@QAEXXZ
void Class_10C80360::Reset()
{
    if (Unknown1C)
    {
        Unknown1C->Virtual2();
        Unknown1C = 0;
    }
    if (Unknown18)
    {
        Unknown18->Virtual2();
        Unknown18 = 0;
    }
    if (Unknown14)
    {
        Unknown14->Virtual2();
        Unknown14 = 0;
    }
    if (Unknown10)
    {
        Unknown10->Virtual2();
        Unknown10 = 0;
    }
    Unknown0D = false;
}
