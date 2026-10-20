// Game/Unsorted_10A11AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A11E90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int p1);
};

extern int DAT_10f39874;

// FUNCTION: 0x10A11E90 ?FUN_10a11e90@@YAXXZ
void FUN_10a11e90()
{
    if (DAT_10f39874)
    {
        ((Class_10A11E90*)DAT_10f39874)->Virtual2(1);
    }
    DAT_10f39874 = 0;
}
