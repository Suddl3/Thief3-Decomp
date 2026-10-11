// Game/Unsorted_10A84040_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AAB590_Param
{
public:
    virtual void Virtual0(int* Value);
    virtual void Virtual1(int Value);
};

class Class_10A84610_Unknown10
{
public:
    virtual void Virtual0();
    virtual int Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(Class_10AAB590_Param* Ar);
};

class Class_10E6C364
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10a84610(Class_10AAB590_Param* Ar);

    int Unknown04;
    int Unknown08;
    char Unknown0C[4];
    Class_10A84610_Unknown10** Unknown10;
};

// FUNCTION: 0x10A84610 ?FUN_10a84610@Class_10E6C364@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6C364::FUN_10a84610(Class_10AAB590_Param* Ar)
{
    Ar->Virtual1(Unknown04);
    Ar->Virtual1(Unknown08);
    for (int i = 0; i < Unknown08; i++)
    {
        Ar->Virtual1(Unknown10[i]->Virtual1());
        Unknown10[i]->Virtual7(Ar);
    }
    return 1;
}
