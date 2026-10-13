// Game/Class_10E6C364_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A846C0_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
};

class Class_10E6C364
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10a846c0();

    int Unknown04;
    int Unknown08;
    char Unknown0C[4];
    Class_10A846C0_Unknown10** Unknown10;
};

// FUNCTION: 0x10A846C0 ?FUN_10a846c0@Class_10E6C364@@UAEHXZ
int Class_10E6C364::FUN_10a846c0()
{
    int Result;
    if (Unknown04 != 0)
    {
        if (Unknown04 <= 0 || Unknown04 > 2)
            return 0;
        Result = 0;
    }
    else
        Result = 1;
    for (int i = 0; i < Unknown08; i++)
    {
        int Value = Unknown10[i]->Virtual5();
        switch (Unknown04)
        {
        case 0:
            if (Value == 0)
                return 0;
            break;
        case 1:
            if (Value != 0)
                return 1;
            break;
        case 2:
            if (Value == 0)
                Result = 1;
            break;
        }
    }
    return Result;
}
