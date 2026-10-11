// Game/Unsorted_10B3E820.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C56E40.h"

class Class_10E7E538
{
public:
    virtual void Virtual0();
};

class Class_10B3E820_Unknown08
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
};

class Class_10B3E820_Unknown5C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    char Unknown04[0x4];
    Class_10B3E820_Unknown08* Unknown08;
};

class Class_10B3ED20 : public Class_10E7E538
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    void FUN_10b3ed20();
    void FUN_10b3ea80();
    void FUN_10b3e820(int Index);

    char Unknown04[0x48];
    bool Unknown4C;
    char Pad4D[0x3];
    char Pad50[0xC];
    Class_10B3E820_Unknown5C* Unknown5C[4];
};

// FUNCTION: 0x10B3E820 ?FUN_10b3e820@Class_10B3ED20@@QAEXH@Z
void Class_10B3ED20::FUN_10b3e820(int Index)
{
    if (Index == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            bool Valid = Unknown5C[i] != 0;
            if (Valid)
            {
                Unknown5C[i]->Unknown08->Virtual10();
                Class_10C56E40 Guard;
                Class_10B3E820_Unknown5C* Item = Unknown5C[i];
                Unknown5C[i] = 0;
                if (Item)
                    Item->Virtual2();
            }
        }
    }
    else
    {
        bool Valid = Unknown5C[Index] != 0;
        if (Valid)
        {
            Unknown5C[Index]->Unknown08->Virtual10();
            Class_10C56E40 Guard;
            Class_10B3E820_Unknown5C* Item = Unknown5C[Index];
            Unknown5C[Index] = 0;
            if (Item)
                Item->Virtual2();
        }
    }
}
