// Game/Unsorted_10AAF930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AB0130_Delegate
{
public:
    void Method();
};

class Class_10E6DD68
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10ab0130();

    char Unknown04[0x1c];
    void (Class_10AB0130_Delegate::*Unknown20)();
    Class_10AB0130_Delegate* Unknown24;
};

// FUNCTION: 0x10AB0130 ?FUN_10ab0130@Class_10E6DD68@@UAEXXZ
void Class_10E6DD68::FUN_10ab0130()
{
    (Unknown24->*Unknown20)();
}
