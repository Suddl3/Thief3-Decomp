// Game/Unsorted_10B2C190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A52EE0.h"
#include "Game/Class_10B46D90.h"
#include "Game/Class_10B46E50.h"

Class_10905A90_Member* GetAllocator();

// Game/cString.h copied without its base: the destructor is the base's body as this class's own,
// and this unit's temporary is destroyed without the zero store the inherited one makes.
class cString
{
public:
    cString() : Unknown00(0) {}
    cString(const char* In);
    cString(const cString& Other);
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }
    cString& operator=(const cString& Other);

    char* Unknown00;
};

cString FUN_1090a660(const char* Format, ...);

extern const char DAT_10e7b574[];

// The object at this+0x118: its slot 56 and SetNameByIndex are called.
class Class_10E684A8
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
    virtual void Virtual38();
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
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56(int A);

    void SetNameByIndex(int A);
};

// Class_10A52EE0 is cHUDLightGem (config/<version>/classmap.txt).
class cHUDLightGem
{
public:
    int GetItem(int Index);

    char Unknown00[0xB8];
    int m_Count;
    char UnknownBC[4];
    int* m_Items;
};

class Class_10B2D600 : public cHUDLightGem
{
public:
    void FUN_10b2c190(int Mode);

    char Pad0C4[0x54];
    Class_10E684A8* Unknown118;
    char Unknown11C[0x0C];
    int Slots[5];
    int Head;
    Class_10B46E50* Unknown140;
    char Unknown144[0x0C];
    const char* Unknown150;
    unsigned char Unknown154;
    unsigned char Unknown155;
    unsigned char Unknown156;
};

// FUNCTION: 0x10B2C190 ?FUN_10b2c190@Class_10B2D600@@QAEXH@Z
void Class_10B2D600::FUN_10b2c190(int Mode)
{
    switch (Mode)
    {
    case 0:
        if (Unknown140)
            Unknown140->Virtual56(0);
        break;
    case 1:
        if (Unknown140)
        {
            Unknown140->Virtual56(1);
            ((Class_10B46D90*)Unknown140)->FUN_10b46d90();
        }
        break;
    case 2:
        if (Unknown140)
        {
            Unknown140->Virtual56(1);
            Unknown140->FUN_10b46e50();
        }
        if (Unknown118)
        {
            Unknown118->Virtual56(1);
            cString Name = FUN_1090a660(DAT_10e7b574, Unknown156, Unknown155, Unknown154, Unknown150);
            Unknown118->SetNameByIndex((int)&Name);
        }
        break;
    }
}
