// Game/Unsorted_10B9EEE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B9F200_Item
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
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10B9F200
{
public:
    void FUN_10b9f200();
    void FUN_10b9d2b0();
    void FUN_10b9ea00(int A);
    void FUN_10b9d660();

    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[4];
    Class_10B9F200_Item** Unknown18;
    char Unknown1C[0x20];
    Class_10BFBD70 Unknown3C;
};

// FUNCTION: 0x10B9F200 ?FUN_10b9f200@Class_10B9F200@@QAEXXZ
void Class_10B9F200::FUN_10b9f200()
{
    Unknown3C.FUN_10bfbd70(0);
    FUN_10b9d2b0();
    FUN_10b9ea00(0);
    int Count = Unknown10;
    if (Count)
    {
        Class_10B9F200_Item* Item = Unknown18[Count - 1];
        if (Item)
        {
            Item->Virtual6();
            Item->Virtual7();
        }
    }
    FUN_10b9d660();
}
