// Game/Unsorted_10AA5210_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void* Virtual3(void* A, int B, int C, int D, int E, int F);
    virtual void Virtual4();
    virtual void Virtual5(void* A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* GetAllocator();

class Class_10AA52C0
{
public:
    void FUN_10aa5240();
    void FUN_10aa5250(int p1);
    void FUN_10aa52c0();

    void* Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10AA5250 ?FUN_10aa5250@Class_10AA52C0@@QAEXH@Z
void Class_10AA52C0::FUN_10aa5250(int p1)
{
    if (Unknown00)
    {
        GetAllocator()->Virtual5(Unknown00);
        Unknown00 = 0;
    }
    if (p1)
    {
        GetAllocator()->Virtual8(0, 0);
        Unknown00 = GetAllocator()->Virtual3(Unknown00, p1 * 28, 0, 0, 0, 0);
        GetAllocator()->Virtual9();
    }
    Unknown04 = p1;
}
