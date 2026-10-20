// Game/Unsorted_10A790E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10AA82D0.h"

class AAIPathPoint;

class Class_10E6CE28;

AAIPathPoint* FUN_10a49f00(ULevel* Level, UClass* Class, int C, Class_1096D780* D, FVector E, FVector F,
                           FRotator G, FRotator H, bool I);

int FindBoneIndex(int A, int B);

void GetBoneLocationAndRotation(int A, int B, FVector* C, FRotator* D);

class Class_10E6CE28 : public Class_10AA82D0
{
public:
    int GetUnknown08();
};

// The spawn link data object's flags live in a byte at 0x64.
struct Struct_DeathSpawnFlags
{
    char Pad00[0x64];
    BYTE m_bTakeParentRotation : 1;
};

class Class_10E6BD18
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
    virtual void FUN_10a790e0(AActor* Actor, Class_10E6CE28* Link, int A, int B, int C);
};

// FUNCTION: 0x10A790E0 ?FUN_10a790e0@Class_10E6BD18@@UAEXPAVAActor@@PAVClass_10E6CE28@@HHH@Z
void Class_10E6BD18::FUN_10a790e0(AActor* Actor, Class_10E6CE28* Link, int A, int B, int C)
{
    UClass* Cls = Cast<UClass>((UObject*)Link->GetUnknown08());
    UDeathSpawnLinkDataObject* Data = Cast<UDeathSpawnLinkDataObject>((UObject*)Link->GetLinkedObject());
    void* Obj = ((Class_1096D780*)Actor)->Get();
    int Key;
    ((Class_1098E330*)Actor)->FUN_1098e330(0x2047b, &Key);
    for (int i = 0; i < Data->m_numberToSpawn; i++)
    {
        FVector Loc = Actor->Location;
        FRotator Rot = Actor->Rotation;
        int Bone = FindBoneIndex((int)Actor, (int)&Data->m_parentBone);
        if (Bone != -1)
            GetBoneLocationAndRotation((int)Actor, Bone, &Loc, &Rot);
        if (!(((Struct_DeathSpawnFlags*)Data)->m_bTakeParentRotation))
            Rot = FRotator(0, 0, 0);
        FUN_10a49f00((ULevel*)Obj, Cls, 1, (Class_1096D780*)Key, Loc, FVector(0, 0, 0), Rot, FRotator(0, 0, 0),
                     false);
    }
}
