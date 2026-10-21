// Game/Unsorted_10A32090.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A31F00;

class Class_10A32170;

class Class_10A31F00_Owner
{
public:
    virtual void Virtual0(int A, Class_10A32170* B);
    virtual void Virtual1();
    virtual int Virtual2(Class_10A31F00* A, int B);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(Class_10A31F00* A);
};

class Class_10A31F00
{
public:
    Class_10A31F00_Owner* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10A32170
{
public:
    Class_10A31F00_Owner* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;

    Class_10A32170* FUN_10a32170(Class_10A31F00* A);
};

// FUNCTION: 0x10A32170 ?FUN_10a32170@Class_10A32170@@QAEPAV1@PAVClass_10A31F00@@@Z
Class_10A32170* Class_10A32170::FUN_10a32170(Class_10A31F00* A)
{
    if (!A->Unknown00)
    {
        Unknown04 = -1;
        Unknown08 = -1;
        Unknown0C = -1;
        Unknown00 = 0;
        return this;
    }
    else if (!A->Unknown00->Virtual7(A))
    {
        Unknown04 = -1;
        Unknown08 = -1;
        Unknown0C = -1;
        Unknown00 = 0;
        return this;
    }
    else
    {
        A->Unknown00->Virtual0(A->Unknown04, this);
        Unknown0C = A->Unknown0C;
        return this;
    }
}
