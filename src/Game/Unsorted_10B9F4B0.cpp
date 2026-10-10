// Game/Unsorted_10B9F4B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B9F5B0_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* V, int Length);
};

class Class_10B9F5B0_Unknown20
{
public:
    char Unknown00[0x24];
    int Unknown24[2];
};

class Class_10B9F5B0
{
public:
    void FUN_10b9f5b0(Class_10B9F5B0_Param* A);

    char Unknown00[0x14];
    int* Unknown14;
    int Unknown18;
    int Unknown1C;
    Class_10B9F5B0_Unknown20** Unknown20;
};

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
    void FUN_10b9f810();

    int Unknown00;
    int Unknown04;
    Struct_10B9F810** Unknown08;
};

// FUNCTION: 0x10B9F5B0 ?FUN_10b9f5b0@Class_10B9F5B0@@QAEXPAVClass_10B9F5B0_Param@@@Z
void Class_10B9F5B0::FUN_10b9f5b0(Class_10B9F5B0_Param* A)
{
    for (int i = 0; i < Unknown18; i++)
    {
        int* Dest = Unknown20[i]->Unknown24;
        for (int j = 0; j < 2; j++)
        {
            int Index;
            A->Virtual1(&Index, 4);
            *Dest++ = Unknown14[Index];
        }
    }
}

// FUNCTION: 0x10B9F810 ?FUN_10b9f810@Class_10BFBD70@@QAEXXZ
void Class_10BFBD70::FUN_10b9f810()
{
    for (int i = 0; i < Unknown00; i++)
        delete Unknown08[i];
    Unknown00 = 0;
    FUN_10bfbd70(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
