// Game/Unsorted_10A4C0D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A4C4A0;

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

class Class_10A4C4A0
{
public:
    Struct_10A4C4A0* FUN_10a4c0d0(int A, int B);

    char Unknown00[0x4];
    int Unknown04;
};

class Class_10A4C130
{
public:
    void* FUN_10a4c130(int Count, int B);

    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10A4C0D0 ?FUN_10a4c0d0@Class_10A4C4A0@@QAEPAUStruct_10A4C4A0@@HH@Z
Struct_10A4C4A0* Class_10A4C4A0::FUN_10a4c0d0(int A, int B)
{
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 16, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        FUN_10905aa0()->Virtual9();
    return (Struct_10A4C4A0*)Memory;
}

// FUNCTION: 0x10A4C130 ?FUN_10a4c130@Class_10A4C130@@QAEPAXHH@Z
void* Class_10A4C130::FUN_10a4c130(int Count, int B)
{
    if (Unknown04)
        FUN_10905aa0()->Virtual8(0, 0);
    int Tag = 0;
    void* Result = operator new(Count * 4, Tag, 0, 0, 0, 0);
    if (Unknown04)
        FUN_10905aa0()->Virtual9();
    return Result;
}
