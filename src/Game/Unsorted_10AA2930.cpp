// Game/Unsorted_10AA2930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// FUN_10aa2860 is the constructor: it stores the vtable and returns this.
class Class_10E6D418
{
public:
    Class_10E6D418* FUN_10aa2860();

    void* Unknown00;
};

class Class_10E5D9C4
{
public:
    virtual Class_10E6D418* FUN_10aa2b10();
};

// FUN_10aa2880 is the constructor: it stores the vtable and returns this.
class Class_10E6D424
{
public:
    Class_10E6D424* FUN_10aa2880();

    void* Unknown00;
};

class Class_10E5D9C8
{
public:
    virtual Class_10E6D424* FUN_10aa2b60();
};

// FUN_10aa28c0 is the constructor: it stores the vtable and returns this.
class Class_10E6D430
{
public:
    Class_10E6D430* FUN_10aa28c0();

    void* Unknown00;
};

class Class_10E5D9CC
{
public:
    virtual Class_10E6D430* FUN_10aa2bb0();
};

// FUN_10aa2910 is the constructor: it stores the vtable and returns this.
class Class_10E6D43C
{
public:
    Class_10E6D43C* FUN_10aa2910();

    void* Unknown00;
};

class Class_10E5D9C0
{
public:
    virtual Class_10E6D43C* FUN_10aa2c00();
};

// FUNCTION: 0x10AA2B10 ?FUN_10aa2b10@Class_10E5D9C4@@UAEPAVClass_10E6D418@@XZ
Class_10E6D418* Class_10E5D9C4::FUN_10aa2b10()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D418* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D418), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D418*>(Memory)->FUN_10aa2860();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA2B60 ?FUN_10aa2b60@Class_10E5D9C8@@UAEPAVClass_10E6D424@@XZ
Class_10E6D424* Class_10E5D9C8::FUN_10aa2b60()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D424* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D424), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D424*>(Memory)->FUN_10aa2880();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA2BB0 ?FUN_10aa2bb0@Class_10E5D9CC@@UAEPAVClass_10E6D430@@XZ
Class_10E6D430* Class_10E5D9CC::FUN_10aa2bb0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D430* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D430), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D430*>(Memory)->FUN_10aa28c0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA2C00 ?FUN_10aa2c00@Class_10E5D9C0@@UAEPAVClass_10E6D43C@@XZ
Class_10E6D43C* Class_10E5D9C0::FUN_10aa2c00()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D43C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D43C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D43C*>(Memory)->FUN_10aa2910();
    FUN_10905aa0()->Virtual9();
    return Result;
}
