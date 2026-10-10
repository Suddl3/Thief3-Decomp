// Game/Unsorted_10C40000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C40C50;

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

class Class_10C40160
{
public:
    Struct_10C40C50* FUN_10c40160(int A, int B);

    char Unknown00[0x4];
    int Unknown04;
};

class Class_10C401D0
{
public:
    void* FUN_10c401d0(int A, int B);

    char Unknown00[0x4];
    int Unknown04;
};

class Class_10C40240
{
public:
    void* FUN_10c40240(int A, int B);

    char Unknown00[0x4];
    int Unknown04;
};

// FUNCTION: 0x10C40160 ?FUN_10c40160@Class_10C40160@@QAEPAUStruct_10C40C50@@HH@Z
Struct_10C40C50* Class_10C40160::FUN_10c40160(int A, int B)
{
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 20, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual9();
    return (Struct_10C40C50*)Memory;
}

// FUNCTION: 0x10C401D0 ?FUN_10c401d0@Class_10C401D0@@QAEPAXHH@Z
void* Class_10C401D0::FUN_10c401d0(int A, int B)
{
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 24, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual9();
    return Memory;
}

// FUNCTION: 0x10C40240 ?FUN_10c40240@Class_10C40240@@QAEPAXHH@Z
void* Class_10C40240::FUN_10c40240(int A, int B)
{
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 44, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual9();
    return Memory;
}
