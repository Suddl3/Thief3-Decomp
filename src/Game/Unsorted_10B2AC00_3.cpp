// Game/Unsorted_10B2AC00_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class FVector;

// Copied from include/Game/Class_10B2BC90_Unknown.h, with the slots up to 54 that the loop calls.
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
    virtual FVector* Virtual8();
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
    virtual void Virtual38(cIntArray& Found);
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual bool Virtual54();
};

// Copied from include/Game/Class_10A52EE0.h, with GetItem's real return type.
class Class_10A52EE0
{
public:
    Class_10B2BC90_Unknown* GetItem(int Index);

    char Unknown00[0xB8];
    int m_Count;
    char UnknownBC[4];
    int* m_Items;
};

// Copied from include/Game/Class_10E7FED0.h: the list at +0x118 is a cIntArray (the header says FArray),
// and GetItem is inherited from Class_10A52EE0 at offset 0.
class Class_10E7FED0 : public Class_10A52EE0
{
public:
    void FUN_10b2b880();

    char Pad0C4[0x54];
    cIntArray Unknown118;
};

// FUNCTION: 0x10B2B880 ?FUN_10b2b880@Class_10B2B9D0@@QAEXXZ
void Class_10E7FED0::FUN_10b2b880()
{
    for (int i = Unknown118.Count - 1; i >= 0; i--)
    {
        Class_10B2BC90_Unknown* Item = GetItem(Unknown118.Data[i]);
        if (Item && !Item->Virtual54())
        {
            cIntArray& List = Unknown118;
            if (i != List.Count - 1)
            {
                int From = i + 1;
                int To = i;
                int Count = List.Count - i - 1;
                if (From != To && Count)
                    memmove(List.Data + To, List.Data + From, Count * sizeof(int));
            }
            List.SetCount(List.Count - 1);
        }
    }
}
