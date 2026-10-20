// Game/Unsorted_10A3A4E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

// The one the game writes into: 1.0f, kept in memory.
extern float DAT_10e49684;

// The value the game fades: its value and the colour it packs.
class Class_10A3A4E0_Entry
{
public:
    float Unknown00;
    char Unknown04[0xC];
    int Unknown10;
};

// One list the command walks: the entries it holds.
class Class_10A3A4E0_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
    virtual void Virtual3();
    virtual int Virtual4();
    virtual Class_10A3A4E0_Entry* Virtual5(int A);
    virtual void Virtual6();
};

// The class whose table holds the command.
class Class_10E6678C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
    virtual void FUN_10a3a4e0(float A);
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();

    char Unknown04[0x4];
    char Unknown08[0xE0];
    int UnknownE8;
    char UnknownEC[0x4];
    Class_10A3A4E0_Item** UnknownF0;
    char UnknownF4[0x60];
    float Unknown154;
};

// FUNCTION: 0x10A3A4E0 ?FUN_10a3a4e0@Class_10E6678C@@UAEXM@Z
void Class_10E6678C::FUN_10a3a4e0(float A)
{
    if (Virtual3())
        return;
    float Interval = Unknown154;
    for (int i = 0; i < UnknownE8; i++)
    {
        int j = 0;
        if (UnknownF0[i]->Virtual4() > 0)
        {
            float Step = DAT_10e49684 / Interval;
            do
            {
                Class_10A3A4E0_Entry* Sub = UnknownF0[i]->Virtual5(j);
                float Value = A + Sub->Unknown00;
                Sub->Unknown00 = Value;
                int Packed = (int)((float)(1.0 - Value * Step) * 255.0f);
                Sub->Unknown10 = (Packed << 24) | (Sub->Unknown10 & 0xffffff);
                j++;
            } while (j < UnknownF0[i]->Virtual4());
            Virtual7();
        }
    }
    for (int i = 0; i < UnknownE8; i++)
    {
        int Above = 0;
        int j = 0;
        if (UnknownF0[i]->Virtual4() > 0)
        {
            do
            {
                if (UnknownF0[i]->Virtual5(j)->Unknown00 > Interval)
                    Above++;
                j++;
            } while (j < UnknownF0[i]->Virtual4());
            if (Above > 0)
            {
                UnknownF0[i]->Virtual2(Above);
                Virtual7();
            }
        }
    }
}
