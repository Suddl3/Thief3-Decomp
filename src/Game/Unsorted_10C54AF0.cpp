// Game/Unsorted_10C54AF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C54AF0_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C56E40
{
public:
    Class_10C54AF0_Unknown00* Unknown00;

    Class_10C56E40(Class_10C54AF0_Unknown00* Other)
    {
        Unknown00 = Other;
        if (Unknown00)
        {
            Unknown00->Virtual1();
        }
    }

    Class_10C56E40& operator=(const Class_10C56E40& Other)
    {
        Class_10C54AF0_Unknown00* Old = Unknown00;
        Unknown00 = Other.Unknown00;
        if (Unknown00)
        {
            Unknown00->Virtual1();
        }
        if (Old)
        {
            Old->Virtual2();
        }
        return *this;
    }

    ~Class_10C56E40()
    {
        if (Unknown00)
        {
            Unknown00->Virtual2();
        }
    }
};

class Class_10C54AF0
{
public:
    void FUN_10c54af0(Class_10C54AF0_Unknown00* New);

    char Unknown00[8];
    Class_10C56E40 Unknown08;
};

// FUNCTION: 0x10C54AF0 ?FUN_10c54af0@Class_10C54AF0@@QAEXPAVClass_10C54AF0_Unknown00@@@Z
void Class_10C54AF0::FUN_10c54af0(Class_10C54AF0_Unknown00* New)
{
    Unknown08 = New;
}
