// Game/Unsorted_10A0FFD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AAB5C0;

class Class_10A0FFD0_Item;

class Class_10A0FFD0_Unknown08;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int* A);
};

extern Class_10F46DA0* DAT_10f46da0;

// Copied from include/Game/Class_10AAB5C0.h, with its base's placeholder of the same size
// (the vptr and two ints) and Virtual1 returning bool, as the call site tests it.
class Class_10AAB5C0
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
    virtual void FUN_10a94fc0();
    virtual void Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);

    int GetUnknown08();

    char Pad04[0x8];
    union
    {
        int Unknown08;
        int unknown_08;
    };
};

class Class_10A0FFD0
{
public:
    bool FUN_10a0ffd0(int A, int B, int C, Class_10AAB5C0* D);

    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, Class_10AAB5C0* B);
};

class Class_10A0FFD0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10A0FFD0_Item* Virtual4(int A);
};

class Class_10A0FFD0_Item
{
public:
    virtual void Virtual0();
    virtual int Virtual1();

    bool FUN_10a7f0e0(int A);
};

// FUNCTION: 0x10A0FFD0 ?FUN_10a0ffd0@Class_10A0FFD0@@QAE_NHHHPAVClass_10AAB5C0@@@Z
bool Class_10A0FFD0::FUN_10a0ffd0(int A, int B, int C, Class_10AAB5C0* D)
{
    Class_10A0FFD0_Unknown08* List = (Class_10A0FFD0_Unknown08*)D->GetUnknown08();
    for (int i = 0; i < List->Virtual3(); i++)
    {
        Class_10A0FFD0_Item* Item = List->Virtual4(i);
        if (Item->Virtual1() == 5 && !Item->FUN_10a7f0e0(A))
        {
            if (D->Virtual1())
            {
                Virtual5(A, D);
                DAT_10f46da0->Virtual2(&D->Unknown08);
            }
            return false;
        }
    }
    return true;
}
