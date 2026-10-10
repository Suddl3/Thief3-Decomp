// Game/Class_10E6D8F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6D8F0_Unknown10
{
public:
    virtual void Virtual0();
    virtual int Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A);
};

class Class_10E6D8F0
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
    virtual int FUN_10aa6600(int Index, int Value);

    char Unknown04[0xC];
    Class_10E6D8F0_Unknown10** Unknown10;
};

// FUNCTION: 0x10AA6600 ?FUN_10aa6600@Class_10E6D8F0@@UAEHHH@Z
int Class_10E6D8F0::FUN_10aa6600(int Index, int Value)
{
    Class_10E6D8F0_Unknown10* Item = Unknown10[Index];
    if (Item)
    {
        for (int i = 0; i < Item->Virtual1(); i++)
        {
            if (Item->Virtual6(i) == Value)
                return i;
        }
    }
    return -1;
}
