// Game/Unsorted_10A8C2F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A8C2B0_Inner
{
    char Unknown00[0x34];
    int* Unknown34;
    int Unknown38;
};

struct Struct_10A8C2B0_Outer
{
    char Unknown00[0x60];
    Struct_10A8C2B0_Inner* Unknown60;
};

extern int DAT_10f3a1f0;

class Class_10E6C6FC
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10a8c2b0();
    virtual void FUN_10a8c2f0();
    virtual int FUN_10a8c350();

    Struct_10A8C2B0_Outer* Unknown04;
};

// FUNCTION: 0x10A8C2F0 ?FUN_10a8c2f0@Class_10E6C6FC@@UAEXXZ
void Class_10E6C6FC::FUN_10a8c2f0()
{
    if (Unknown04 && Unknown04->Unknown60)
    {
        if (DAT_10f3a1f0 < Unknown04->Unknown60->Unknown38)
        {
            DAT_10f3a1f0++;
            while (DAT_10f3a1f0 < Unknown04->Unknown60->Unknown38)
            {
                if (Unknown04->Unknown60->Unknown34[DAT_10f3a1f0] != 0)
                    return;
                DAT_10f3a1f0++;
            }
        }
    }
    else if (DAT_10f3a1f0 < 0xff)
        DAT_10f3a1f0++;
}
