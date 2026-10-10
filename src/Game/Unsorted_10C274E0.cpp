// Game/Unsorted_10C274E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e99350[];

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

struct Struct_10B9F810 {};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    Struct_10B9F810** Unknown08;
};

class Class_10E99350
{
public:
    void FUN_10c274e0();

    void** VTable;
    int Unknown04;
    Class_10BFBD70 Unknown08;
};

// FUNCTION: 0x10C274E0 ?FUN_10c274e0@Class_10E99350@@QAEXXZ
void Class_10E99350::FUN_10c274e0()
{
    Class_10BFBD70& Array = Unknown08;
    VTable = DAT_10e99350;
    for (int i = 0; i < Array.Unknown00; i++)
        delete Array.Unknown08[i];
    Array.Unknown00 = 0;
    Array.FUN_10bfbd70(0);
    if (Array.Unknown04)
    {
        FUN_10905aa0()->Virtual5(Array.Unknown08);
        Array.Unknown08 = 0;
        Array.Unknown04 = 0;
    }
}
