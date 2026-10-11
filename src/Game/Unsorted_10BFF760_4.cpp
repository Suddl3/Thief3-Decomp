// Game/Unsorted_10BFF760_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_10BFBD70.h"

class AAIPathPoint : public AMarker
{
    DECLARE_CLASS(AAIPathPoint, AMarker, 0x0, AICore)

public:
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
    virtual void FUN_10bbeec0(int p1);
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
    virtual int Virtual94();
    virtual void Virtual95();
    virtual char Virtual96();
};

class Class_10BFF8C0_Param
{
public:
    char Unknown00[0x2C];
    AAIPathPoint** Unknown2C;
    int Unknown30;
};

class Class_10E97ADC
{
public:
    virtual void Virtual0();
    virtual void FUN_10bff8c0(Class_10BFF8C0_Param* Param);

    Class_10BFBD70 Unknown04;
    Class_10BFBD70 Unknown10;
};

// FUNCTION: 0x10BFF8C0 ?FUN_10bff8c0@Class_10E97ADC@@UAEXPAVClass_10BFF8C0_Param@@@Z
void Class_10E97ADC::FUN_10bff8c0(Class_10BFF8C0_Param* Param)
{
    if (Param)
    {
        for (int i = 0; i < Param->Unknown30; i++)
        {
            AAIPathPoint* Point = Param->Unknown2C[i];
            if (Point && Point->IsA(AAIPathPoint::StaticClass()))
            {
                Class_10BFBD70* List = &Unknown10;
                int Index = List->Count;
                List->FUN_10bfbd70(Index + 1);
                List->Data[Index] = (int)Point;
                if (Point->Virtual96() == 1)
                {
                    List = &Unknown04;
                    Index = List->Count;
                    List->FUN_10bfbd70(Index + 1);
                    List->Data[Index] = (int)Point;
                }
            }
        }
    }
}
