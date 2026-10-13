// Game/cHUDLightGem_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cIntArray;

class FVector;

class Class_10B2BC90_Unknown;

class cHUDLightGem
{
public:
    Class_10B2BC90_Unknown* GetItem(int Index);
    void FUN_10b461d0();

    char Unknown00[0xB8];
    int m_Count;
    char UnknownBC[4];
    int* m_Items;
    char UnknownC4[0x5C];
    Class_10B2BC90_Unknown* Unknown120;
    Class_10B2BC90_Unknown* Unknown124;
    int Unknown128;
};

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
    virtual int Virtual39();
};

// FUNCTION: 0x10B461D0 ?FUN_10b461d0@cHUDLightGem@@QAEXXZ
void cHUDLightGem::FUN_10b461d0()
{
    for (int i = 0; i < m_Count; i++)
    {
        Class_10B2BC90_Unknown* Item = GetItem(i);
        if (Unknown120 == 0 && Item->Virtual39() == 1)
            Unknown120 = Item;
        else if (Unknown124 == 0 && Item->Virtual39() == 3)
            Unknown124 = Item;
        if (Unknown120 != 0 && Unknown124 != 0 && Unknown128 != 0)
            break;
    }
}
