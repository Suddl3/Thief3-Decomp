// Game/GamePhysicsRegistration.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "GamePhysics/GamePhysicsClasses.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B7BEF0 ?InitializePrivateStaticClassUGamePhysics@UGamePhysics@@SAXXZ
void UGamePhysics::InitializePrivateStaticClassUGamePhysics()
{
    if (Super::StaticClass() != PrivateStaticClass)
        PrivateStaticClass->SuperField = Super::StaticClass();
    else
        PrivateStaticClass->SuperField = NULL;
    PrivateStaticClass->ClassWithin = WithinClass::StaticClass();
    PrivateStaticClass->SetClass(UClass::StaticClass());
    if (GetInitialized() && PrivateStaticClass->GetClass() == PrivateStaticClass->StaticClass())
        PrivateStaticClass->Register();
}

// FUNCTION: 0x10B7C5A0 ?GetPrivateStaticClassUGamePhysics@UGamePhysics@@SAPAVUClass@@PBD@Z
UClass* UGamePhysics::GetPrivateStaticClassUGamePhysics(const TCHAR* Package)
{
    FUN_10905aa0()->Virtual8(0, 0);
    UClass* ReturnClass = ::new(0, 0, 0, 0, 0) UClass(EC_StaticConstructor, sizeof(UGamePhysics), StaticClassFlags,
                                                      FGuid(0, 0, 0, 0), &TEXT("UGamePhysics")[1], Package,
                                                      StaticConfigName(),
                                                      RF_Public | RF_Standalone | RF_Transient | RF_Native,
                                                      InternalConstructor,
                                                      (void (UObject::*)())&UGamePhysics::StaticConstructor);
    FUN_10905aa0()->Virtual9();
    return ReturnClass;
}
