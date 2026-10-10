// Game/ACityPopPoint_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

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
    virtual void Virtual94();
    virtual void Virtual95();
    virtual bool Virtual96();
};

class APatrolPoint : public AAIPathPoint
{
    DECLARE_CLASS(APatrolPoint, AAIPathPoint, 0x0, AICore)
};

class ACityPopPoint : public APatrolPoint
{
    DECLARE_CLASS(ACityPopPoint, APatrolPoint, 0x0, AICore)

public:
    virtual void FUN_10bc2e50(int Param);
};

// FUNCTION: 0x10BC2E50 ?FUN_10bc2e50@ACityPopPoint@@UAEXH@Z
void ACityPopPoint::FUN_10bc2e50(int Param)
{
    AAIPathPoint* Src = (AAIPathPoint*)Param;
    if (Src->IsA(AAIPathPoint::StaticClass()))
    {
        if (Src->Virtual96() != 1)
            AAIPathPoint::FUN_10bbeec0(Param);
    }
}
