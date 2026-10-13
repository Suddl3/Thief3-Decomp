// Game/Unsorted_10C26370_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_109B6D50.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B21820_Object.h"

class ULodMeshInstance;

class USkeletalMeshInstance
{
    DECLARE_CLASS(USkeletalMeshInstance, ULodMeshInstance, 0x0, Engine)
};

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

class Class_10E9925C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void AddToRegistry();
    virtual void FUN_10c26770();
    virtual bool Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual float Virtual13();
    virtual bool Virtual14();

    ~Class_10E9925C();

    Class_109B6D50* FUN_10c26490();

    char Unknown04[4];
    Class_10C7D570* Unknown08;
    int m_RegistryId;
    cString Unknown10;
    char Unknown14[0x20];
    bool Unknown34;
    bool m_Registered;
    char Pad36[0x2];
};

// FUNCTION: 0x10C26490 ?FUN_10c26490@Class_10E9925C@@QAEPAVClass_109B6D50@@XZ
Class_109B6D50* Class_10E9925C::FUN_10c26490()
{
    Class_109B6D50* Result = NULL;
    if (((Class_10B21820*)Unknown08->FUN_10c7d570())->FUN_10991e10()
        && ((UObject*)((Class_10B21820*)Unknown08->FUN_10c7d570())->FUN_10991e10())->IsA(USkeletalMeshInstance::StaticClass()))
        Result = (Class_109B6D50*)((Class_10B21820*)Unknown08->FUN_10c7d570())->FUN_10991e10();
    return Result;
}
