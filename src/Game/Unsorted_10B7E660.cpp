// Game/Unsorted_10B7E660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B26930.h"

class Class_10D9D740;

class Class_10D9B090;

class Class_10E4B180_Unknown40;

class Class_10E4B180_Unknown70
{
public:
    char Unknown00[0x4];
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10B26930* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E4B180_Unknown40
{
public:
    virtual void Virtual0(int A);
};

Class_10D9B090* FUN_10d9dcb0();

// Copied from include/Game/Class_10E4B180.h: the header's m_MaskLists and padding
// are the fields this function uses (Unknown38, Unknown40, Unknown98, UnknownA0, UnknownA4).
class Class_10E4B180
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void FUN_10b7e660(int p1);

    void AddToMaskedLists(int Mask, Class_10E4B180_Unknown70* Obj);

    char Unknown04[0x2C];
    int Unknown30;
    Class_10D9D740* Unknown34;
    int Unknown38;
    char Pad3C[0x4];
    Class_10E4B180_Unknown40** Unknown40;
    char Unknown44[0x54];
    Class_10E4B180_Unknown70 Unknown98;
    char Pad9C[0x4];
    Class_10E4B180_Unknown70 UnknownA0;
    Class_10B26930 UnknownA4;
};

// FUNCTION: 0x10B7E660 ?FUN_10b7e660@Class_10E4B180@@UAEXH@Z
void Class_10E4B180::FUN_10b7e660(int p1)
{
    Unknown30 = p1;
    Unknown34 = 0;
    UnknownA4.FUN_10b26930((int)this);
    AddToMaskedLists(0x48, &Unknown98);
    AddToMaskedLists(0x20, &UnknownA0);
    for (int i = 0; i < Unknown38; i++)
    {
        Unknown40[i]->Virtual0(p1);
    }
    DAT_10f46da0->Virtual1(&UnknownA4, 3, -1, -1);
    DAT_10f46da0->Virtual1(&UnknownA4, 4, -1, -1);
    Unknown34 = (Class_10D9D740*)FUN_10d9dcb0();
}
