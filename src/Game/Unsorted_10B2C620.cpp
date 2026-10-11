// Game/Unsorted_10B2C620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

class Class_10B2BC90_Unknown
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
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38(Class_10BFBD70& Found);
};

// Copied whole from include/Game/Class_10A52EE0.h, with FUN_10a52ee0 returning the object symbols.txt names.
class Class_10A52EE0
{
public:
    Class_10B2BC90_Unknown* FUN_10a52ee0(int Index);

    char Unknown00[0xB8];
    int UnknownB8;
    char UnknownBC[4];
    int* UnknownC0;
};

class Class_10B2D600 : public Class_10A52EE0
{
public:
    void FUN_10b2d600();
    void FUN_10b2c2e0(Class_10B2BC90_Unknown* Item, int Index);

    char Pad0C4[0x64];
    int Slots[5];
    int Head;
};

// FUNCTION: 0x10B2D600 ?FUN_10b2d600@Class_10B2D600@@QAEXXZ
void Class_10B2D600::FUN_10b2d600()
{
    for (int i = 1; i <= 3; i++)
    {
        Class_10B2BC90_Unknown* Item = FUN_10a52ee0(Slots[(Head + i) % 5]);
        if (Item)
        {
            Class_10BFBD70 Found;
            Item->Virtual38(Found);
            if (Found.Count == 0 || *Found.Data == 0)
                FUN_10b2c2e0(Item, i);
        }
    }
}
