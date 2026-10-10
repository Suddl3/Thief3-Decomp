// Game/Unsorted_10C1A0C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern int* DAT_10ff708c;

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

// FUNCTION: 0x10C1A0C0 ?FUN_10c1a0c0@@YAXXZ
void FUN_10c1a0c0()
{
    if (!DAT_10ff708c)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        int* Result = new(0, 0, 0, 0, 0) int();
        DAT_10ff708c = Result;
        FUN_10905aa0()->Virtual9();
    }
    ++*DAT_10ff708c;
}
