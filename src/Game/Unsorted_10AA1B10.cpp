// Game/Unsorted_10AA1B10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// FUN_10aa1a60 is the constructor: it stores the vtable and returns this.
class Class_10E6D390
{
public:
    Class_10E6D390* FUN_10aa1a60();

    void* Unknown00;
};

class Class_10E5D99C
{
public:
    virtual Class_10E6D390* FUN_10aa1b10();
};

// FUN_10aa1a80 is the constructor: it stores the vtable and returns this.
class Class_10E6D39C
{
public:
    Class_10E6D39C* FUN_10aa1a80();

    void* Unknown00;
};

class Class_10E5D994
{
public:
    virtual Class_10E6D39C* FUN_10aa1b60();
};

// FUN_10aa1aa0 is the constructor: it stores the vtable and returns this.
class Class_10E6D3A8
{
public:
    Class_10E6D3A8* FUN_10aa1aa0();

    void* Unknown00;
};

class Class_10E5D9A0
{
public:
    virtual Class_10E6D3A8* FUN_10aa1bb0();
};

// FUN_10aa1b00 is the constructor: it stores the vtable and returns this.
class Class_10E6D3B4
{
public:
    Class_10E6D3B4* FUN_10aa1b00();

    void* Unknown00;
};

class Class_10E5D998
{
public:
    virtual Class_10E6D3B4* FUN_10aa1c00();
};

// FUNCTION: 0x10AA1B10 ?FUN_10aa1b10@Class_10E5D99C@@UAEPAVClass_10E6D390@@XZ
Class_10E6D390* Class_10E5D99C::FUN_10aa1b10()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D390* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D390), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D390*>(Memory)->FUN_10aa1a60();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA1B60 ?FUN_10aa1b60@Class_10E5D994@@UAEPAVClass_10E6D39C@@XZ
Class_10E6D39C* Class_10E5D994::FUN_10aa1b60()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D39C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D39C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D39C*>(Memory)->FUN_10aa1a80();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA1BB0 ?FUN_10aa1bb0@Class_10E5D9A0@@UAEPAVClass_10E6D3A8@@XZ
Class_10E6D3A8* Class_10E5D9A0::FUN_10aa1bb0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D3A8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D3A8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D3A8*>(Memory)->FUN_10aa1aa0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA1C00 ?FUN_10aa1c00@Class_10E5D998@@UAEPAVClass_10E6D3B4@@XZ
Class_10E6D3B4* Class_10E5D998::FUN_10aa1c00()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D3B4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D3B4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D3B4*>(Memory)->FUN_10aa1b00();
    FUN_10905aa0()->Virtual9();
    return Result;
}
