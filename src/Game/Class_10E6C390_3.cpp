// Game/Class_10E6C390_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A84DB0_Unknown08
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
    virtual bool Virtual9();
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
    virtual void Virtual20();
    virtual void Virtual21();
    virtual int Virtual22();
};

class Class_10E6C390
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10a84db0(Class_10A84DB0_Unknown08* A);

    int Unknown04;
    Class_10A84DB0_Unknown08* Unknown08;
};

// FUNCTION: 0x10A84DB0 ?FUN_10a84db0@Class_10E6C390@@UAE_NPAVClass_10A84DB0_Unknown08@@@Z
bool Class_10E6C390::FUN_10a84db0(Class_10A84DB0_Unknown08* Other)
{
    if (!Unknown08)
        return true;
    if (Unknown08 == Other)
        return false;
    bool Result = false;
    if (Other->Virtual9())
    {
        if (Unknown08->Virtual22() & 1)
            Result = true;
        else if (Unknown08->Virtual22() & 4)
            Result = true;
    }
    else if (Other->Virtual22() & 1)
    {
        if (!Unknown08->Virtual9())
            Result = true;
    }
    else if (Other->Virtual22() & 0x10)
    {
        if (!Unknown08->Virtual9())
        {
            if (!(Unknown08->Virtual22() & 1))
                Result = true;
        }
    }
    return Result;
}
