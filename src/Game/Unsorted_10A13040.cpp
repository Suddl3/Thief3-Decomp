// Game/Unsorted_10A13040.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A13040_Unknown10
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
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual int Virtual20();
};

class Class_10A13040
{
public:
    int FUN_10a13040();

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Class_10A13040_Unknown10** Unknown10;
};

// FUNCTION: 0x10A13040 ?FUN_10a13040@Class_10A13040@@QAEHXZ
int Class_10A13040::FUN_10a13040()
{
    for (int Id = 0; Id < Unknown08; Id++)
    {
        bool Used = false;
        for (int i = 0; i < Unknown08; i++)
        {
            if (Id == Unknown10[i]->Virtual20())
            {
                Used = true;
                break;
            }
        }
        if (!Used)
            return Id;
    }
    return -1;
}
