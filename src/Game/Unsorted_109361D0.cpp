// Game/Unsorted_109361D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109373D0.h"

class Class_10937400 : public Class_109373D0
{
public:
    void FUN_10937400(unsigned long Value);
};

class Class_10936AC0 : public Class_10937400
{
};

extern Class_10936AC0* DAT_10f31be0;

class Class_10952690
{
public:
    virtual void Virtual0();
    virtual void Virtual1();

    void FUN_10952690();
};

class Class_109526D0 : public Class_10952690
{
public:
    virtual void Virtual2();
    virtual void Virtual3();

    void FUN_109526d0();

    char Unknown04[0x2C];
    int Unknown30;
    int Unknown34;
    char Unknown38[0x16];
    bool Unknown4E;
};

class Class_10E49F90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool FUN_10936240(Class_109526D0* Item, int A);

    char Unknown04[0x110];
    int Unknown114;
    char Unknown118[0x174];
    int Unknown28C;
};

// FUNCTION: 0x10936240 ?FUN_10936240@Class_10E49F90@@UAE_NPAVClass_109526D0@@H@Z
bool Class_10E49F90::FUN_10936240(Class_109526D0* Item, int A)
{
    if (Item && (Item->Unknown30 & 4) && (Item->Unknown34 & 8) && !Item->Unknown4E)
    {
        DAT_10f31be0->FUN_109373d0(Unknown114);
        DAT_10f31be0->FUN_10937400(Unknown28C);
        Item->FUN_109526d0();
        Item->FUN_10952690();
        Item->Virtual3();
        return true;
    }
    return false;
}
