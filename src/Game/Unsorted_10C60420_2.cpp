// Game/Unsorted_10C60420_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Item_10C50320;

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

class Class_10C50320
{
public:
    void FUN_10c4f690(int NewCount);

    int Unknown00;
    int Unknown04;
    Item_10C50320* Unknown08;
};

class Class_10C60480
{
public:
    void FUN_10c60420();

    int Unknown00;
    int Unknown04;
    Class_10C50320* Unknown08;
};

// FUNCTION: 0x10C60420 ?FUN_10c60420@Class_10C60480@@QAEXXZ
void Class_10C60480::FUN_10c60420()
{
    for (int i = 0; i < Unknown00; i++)
    {
        Class_10C50320* Item = &Unknown08[i];
        Item->FUN_10c4f690(0);
        if (Item->Unknown04)
        {
            FUN_10905aa0()->Virtual5(Item->Unknown08);
            Item->Unknown08 = 0;
            Item->Unknown04 = 0;
        }
    }
    Unknown00 = 0;
}
