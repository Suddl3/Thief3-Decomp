// Game/Unsorted_10C54BB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C54BB0;

class Class_10C54BB0_Unknown08;

class Class_10C56E40
{
public:
    Class_10C56E40() : Ptr(0) {}
    Class_10C56E40(const Class_10C56E40& Other);
    ~Class_10C56E40();
    Class_10C56E40& operator=(const Class_10C56E40& Other);

    Class_10C54BB0_Unknown08* Ptr;
};

class Class_10C54BB0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    void FUN_10c54af0(Class_10C54BB0* A);

    char Unknown04[4];
    Class_10C56E40 Unknown08;
};

class Class_10C54BB0
{
public:
    void FUN_10c54bb0(Class_10C56E40 New);

    char Unknown00[8];
    Class_10C56E40 Unknown08;
};

inline Class_10C56E40::Class_10C56E40(const Class_10C56E40& Other)
{
    Ptr = Other.Ptr;
    if (Ptr)
        Ptr->Virtual1();
}

inline Class_10C56E40::~Class_10C56E40()
{
    if (Ptr)
        Ptr->Virtual2();
}

inline Class_10C56E40& Class_10C56E40::operator=(const Class_10C56E40& Other)
{
    Class_10C54BB0_Unknown08* Old = Ptr;
    Ptr = Other.Ptr;
    if (Ptr)
        Ptr->Virtual1();
    if (Old)
        Old->Virtual2();
    return *this;
}

// FUNCTION: 0x10C54BB0 ?FUN_10c54bb0@Class_10C54BB0@@QAEXVClass_10C56E40@@@Z
void Class_10C54BB0::FUN_10c54bb0(Class_10C56E40 New)
{
    if (Unknown08.Ptr)
        Unknown08.Ptr->Unknown08 = Class_10C56E40();
    Unknown08 = New;
    Unknown08.Ptr->FUN_10c54af0(this);
}
