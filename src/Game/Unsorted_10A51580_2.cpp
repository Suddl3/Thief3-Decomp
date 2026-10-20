// Game/Unsorted_10A51580_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cIntArray.h"
#include "Game/Struct_10AA3520.h"

// The object the window holds: the two ids the game collects from it.
class Class_10E6CE28
{
public:
    int GetUnknown08();

    void** VTable;
    char Unknown04[0xB0];
    int UnknownB4;
    int UnknownB8;
};

// Game/Object_10B4CA50_A.h copied whole, with slot 8 as the call site shows it: two
// arguments (the object the window holds, and the array the items go into).
class Object_10B4CA50_A
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
    virtual void Virtual8(void* A, cIntArray& B);
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
};

// Game/Class_10E67BD8.h's class as the units that use it declare it (the fields
// at their offsets), with slot 37 (the header's Virtual37) as this function and
// the object at 0x11C as the pointer the call site shows.
class Class_10E67BD8
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
    virtual void FUN_10a51110();
    virtual void FUN_10a51830(cIntArray* A, cIntArray* B);
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
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual void Virtual105();
    virtual void Virtual106();
    virtual void Virtual107();
    virtual void Virtual108();
    virtual void Virtual109();
    virtual void Virtual110();

    char Unknown04[0x118];
    Class_10E6CE28* Unknown11C;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A51830 ?FUN_10a51830@Class_10E67BD8@@UAEXPAVcIntArray@@0@Z
void Class_10E67BD8::FUN_10a51830(cIntArray* A, cIntArray* B)
{
    if (Unknown11C)
    {
        if (A)
        {
            int Value = Unknown11C->UnknownB4;
            if (Value)
            {
                int Index = A->Count;
                A->SetCount(Index + 1);
                A->Data[Index] = Value;
            }
        }
        if (B)
        {
            int Value = Unknown11C->UnknownB8;
            if (Value)
            {
                int Index = B->Count;
                B->SetCount(Index + 1);
                B->Data[Index] = Value;
            }
        }
        cIntArray Items;
        DAT_10f35dec->Unknown64->Virtual8(Unknown11C, Items);
        for (int i = 0; i < Items.Count; i++)
        {
            int Id = ((Class_10E6CE28*)Items.Data[i])->GetUnknown08();
            if (A)
            {
                int Value = ((Class_10E6CE28*)Id)->UnknownB4;
                if (Value)
                {
                    int Index = A->Count;
                    A->SetCount(Index + 1);
                    A->Data[Index] = Value;
                }
            }
            if (B)
            {
                int Value = ((Class_10E6CE28*)Id)->UnknownB8;
                if (Value)
                {
                    int Index = B->Count;
                    B->SetCount(Index + 1);
                    B->Data[Index] = Value;
                }
            }
        }
    }
}
