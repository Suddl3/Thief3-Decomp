// Game/Unsorted_109E5770.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_109E5910.h"
#include "Game/Class_10D3F830.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Class_109E59D0.h"
#include "Game/Class_10C49740.h"
#include "Game/cIntArray.h"

class Class_10E5B2C0
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
    virtual void AddValue(int Value);

    char Unknown04[0xB4];
    cIntArray Unknown0B8;
};

int FUN_10af36e0(const char* A, const char* B);

// FUNCTION: 0x109E5910 ?FUN_109e5910@Class_109E5910@@QAEHABVcString@@@Z
int Class_109E5910::FUN_109e5910(const cString& Name)
{
    if (!FUN_10af36e0(Name.Unknown00 ? Name.Unknown00 : DAT_10e47660, "ABSOLUTE"))
        return 1;
    return FUN_10af36e0(Name.Unknown00 ? Name.Unknown00 : DAT_10e47660, "RELATIVE") != 0;
}

// FUNCTION: 0x109E59D0 ?FUN_109e59d0@Class_109E59D0@@QAEPAUEntry_10C32C30@@PAH@Z
Entry_10C32C30* Class_109E59D0::FUN_109e59d0(int* Key)
{
    Entry_10C32C30* Entry = 0;
    Entry_10C32C30* Found = 0;
    if (Unknown3C.FUN_10d3f830(Key))
    {
        Unknown3C.FUN_10c49740(Key, &Found);
        Entry = Found;
    }
    return Entry;
}

// FUNCTION: 0x109E60E0 ?AddValue@Class_10E5B2C0@@UAEXH@Z
void Class_10E5B2C0::AddValue(int Value)
{
    cIntArray* List = &Unknown0B8;
    int Index = List->Count;
    List->SetCount(Index + 1);
    List->Data[Index] = Value;
}
