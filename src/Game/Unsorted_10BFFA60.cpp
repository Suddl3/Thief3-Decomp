// Game/Unsorted_10BFFA60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_1096D780.h"

class AAIPathPoint;

class Class_10BFF980_Param;

class Class_10BBEFC0
{
public:
    AAIPathPoint* FUN_10bbefc0();
};

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

    void* FUN_10bbefa0();
    int FUN_10bbf140(Class_10BFBD70* B, Class_10BFBD70* A);
};

void FUN_10bff980(Class_10BFF980_Param* Value, Class_10BFBD70* B, Class_10BFBD70* A);

// FUNCTION: 0x10BFFDE0 ?FUN_10bffde0@@YGHPAVClass_1096D780@@@Z
int __stdcall FUN_10bffde0(Class_1096D780* Param)
{
    AAIPathPoint* Point = ((Class_10BBEFC0*)Param)->FUN_10bbefc0();
    if (Point != 0 && Point->IsA(AAIPathPoint::StaticClass()) && Point->Virtual94() == 1 && Point->FUN_10bbefa0() != 0)
    {
        Class_10BFBD70 B;
        Class_10BFBD70 A;
        FUN_10bff980((Class_10BFF980_Param*)Param->Get(), &B, &A);
        return Point->FUN_10bbf140(&B, &A);
    }
    return 0;
}
