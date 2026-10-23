// Game/Class_10BAA580_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C7D570.h"

class Class_109BC840;

class cString;

struct Struct_10B21820_Object;

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

class ULodMeshInstance;

class USkeletalMeshInstance
{
    DECLARE_CLASS(USkeletalMeshInstance, ULodMeshInstance, 0x0, Engine)
};

// The owner pointer is observed in the wrapper's otherwise opaque base storage.
class Class_10BAA580_Receiver
{
public:
    char Unknown00[0x34];
    Class_10B21820* Unknown34;
};

// Complete existing declaration, extended only through the observed cache.
class Class_10BAA580 : public Class_10C7D570
{
public:
    int GetCachedValue();
    Class_109BC840* FUN_10baa580();
    int* GetCachedIndex(int* Out);
    int* FUN_10babab0(int* A, cString* B);

    char Pad01[0x1F];
    int m_CachedIndex;
    char Unknown88[0x4];
    int m_CachedValue;
    char Unknown90[0x24];
    bool m_CacheValid;
    char UnknownB5[0xAF];
    Class_109BC840* Unknown164;
};

// FUNCTION: 0x10BAA580 ?FUN_10baa580@Class_10BAA580@@QAEPAVClass_109BC840@@XZ
Class_109BC840* Class_10BAA580::FUN_10baa580()
{
    if (!Unknown164)
    {
        UObject* Found = (UObject*)((Class_10BAA580_Receiver*)this)->Unknown34->FUN_10991e10();
        if (Found && Found->IsA(USkeletalMeshInstance::StaticClass()))
            Unknown164 = (Class_109BC840*)Found;
    }
    return Unknown164;
}
