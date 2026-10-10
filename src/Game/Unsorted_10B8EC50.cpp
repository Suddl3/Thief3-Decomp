// Game/Unsorted_10B8EC50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

extern void* DAT_10e89720[];

class Class_10E89720
{
public:
    Class_10E89720() : VTable(DAT_10e89720), Unknown04(3) {}

    void** VTable;
    int Unknown04;
};

class Class_10E88D3C
{
public:
    virtual Class_10E89720* FUN_10b8ec50(int A, int B);
};

// FUNCTION: 0x10B8EC50 ?FUN_10b8ec50@Class_10E88D3C@@UAEPAVClass_10E89720@@HH@Z
Class_10E89720* Class_10E88D3C::FUN_10b8ec50(int A, int B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E89720* Result = new(0, 0, 0, 0, 0) Class_10E89720;
    FUN_10905aa0()->Virtual9();
    return Result;
}
