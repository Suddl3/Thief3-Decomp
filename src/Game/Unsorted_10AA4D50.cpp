// Game/Unsorted_10AA4D50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

extern void* DAT_10e6d5b0[];

class Class_10E6D5B0
{
public:
    Class_10E6D5B0()
    {
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = 0;
        VTable = DAT_10e6d5b0;
    }

    void** VTable;
    char Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x10AA5110 ?FUN_10aa5110@@YAPAVClass_10E6D5B0@@XZ
Class_10E6D5B0* FUN_10aa5110()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D5B0* Result = new(0, 0, 0, 0, 0) Class_10E6D5B0;
    FUN_10905aa0()->Virtual9();
    return Result;
}
