// Game/Unsorted_10A9B210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's memory manager (0x10905AA0): the allocation happens inside a
// scope of it (slots 8 and 9).
class Class_10905A90_Member
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
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUN_10a9ac80 is the constructor: it stores the vtable and returns this.
class Class_10E6D1A0
{
public:
    Class_10E6D1A0* FUN_10a9ac80();

    void* Unknown00;
};

class Class_10E5D878
{
public:
    virtual Class_10E6D1A0* FUN_10a9b3e0();
};

class Class_10D43FD0
{
public:
    int FUN_10d43fd0(int A);
    int FUN_10d41050(int A, float B, int C);
};

class Class_10E6D1AC
{
public:
    virtual int FUN_10a9b210(int A, int B, int C, int* D);

    Class_10D43FD0* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A9B210 ?FUN_10a9b210@Class_10E6D1AC@@UAEHHHHPAH@Z
int Class_10E6D1AC::FUN_10a9b210(int A, int B, int C, int* D)
{
    switch (A)
    {
    case 0x7e:
        if (Unknown04 && Unknown08)
            return Unknown04->FUN_10d43fd0(Unknown08);
        break;
    case 0x7d:
        if (Unknown04 && Unknown08)
            return Unknown04->FUN_10d41050(Unknown08, 1.0f, 0);
        break;
    }
}

// FUNCTION: 0x10A9B3E0 ?FUN_10a9b3e0@Class_10E5D878@@UAEPAVClass_10E6D1A0@@XZ
Class_10E6D1A0* Class_10E5D878::FUN_10a9b3e0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D1A0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D1A0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D1A0*>(Memory)->FUN_10a9ac80();
    FUN_10905aa0()->Virtual9();
    return Result;
}
