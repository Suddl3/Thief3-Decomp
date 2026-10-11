// Game/T3GamePhysicsRegistration.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "T3GamePhysics/T3GamePhysicsClasses.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x109616F0 ?InitializePrivateStaticClassUT3GamePhysics@UT3GamePhysics@@SAXXZ
void UT3GamePhysics::InitializePrivateStaticClassUT3GamePhysics()
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

// FUNCTION: 0x10961960 ?GetPrivateStaticClassUT3GamePhysics@UT3GamePhysics@@SAPAVUClass@@PBD@Z
UClass* UT3GamePhysics::GetPrivateStaticClassUT3GamePhysics(const TCHAR* Package)
{
    GetAllocator()->Virtual8(0, 0);
    UClass* ReturnClass = ::new(0, 0, 0, 0, 0) UClass(EC_StaticConstructor, sizeof(UT3GamePhysics), StaticClassFlags,
                                                      FGuid(0, 0, 0, 0), &TEXT("UT3GamePhysics")[1], Package,
                                                      StaticConfigName(),
                                                      RF_Public | RF_Standalone | RF_Transient | RF_Native,
                                                      InternalConstructor,
                                                      (void (UObject::*)())&UT3GamePhysics::StaticConstructor);
    GetAllocator()->Virtual9();
    return ReturnClass;
}
