// Game/Unsorted_10C18520_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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

class Class_10C19FD0
{
public:
    Class_10C19FD0()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

extern Class_10C19FD0* DAT_10ff7088;

// FUNCTION: 0x10C1A030 ?FUN_10c1a030@@YAXXZ
void FUN_10c1a030()
{
    if (DAT_10ff7088 == 0)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        Class_10C19FD0* Result = new(0, 0, 0, 0, 0) Class_10C19FD0;
        DAT_10ff7088 = Result;
        FUN_10905aa0()->Virtual9();
    }
    DAT_10ff7088->Unknown00++;
}
