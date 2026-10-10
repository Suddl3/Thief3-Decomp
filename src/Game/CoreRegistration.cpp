// Game/CoreRegistration.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/CoreClasses.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10ADD960 ?GetPrivateStaticClassUBitfieldEnum@UBitfieldEnum@@SAPAVUClass@@PBD@Z
UClass* UBitfieldEnum::GetPrivateStaticClassUBitfieldEnum(const TCHAR* Package)
{
    FUN_10905aa0()->Virtual8(0, 0);
    UClass* ReturnClass = ::new(0, 0, 0, 0, 0) UClass(EC_StaticConstructor, sizeof(UBitfieldEnum), StaticClassFlags,
                                                      FGuid(0, 0, 0, 0), &TEXT("UBitfieldEnum")[1], Package,
                                                      StaticConfigName(),
                                                      RF_Public | RF_Standalone | RF_Transient | RF_Native,
                                                      InternalConstructor,
                                                      (void (UObject::*)())&UBitfieldEnum::StaticConstructor);
    FUN_10905aa0()->Virtual9();
    return ReturnClass;
}

// FUNCTION: 0x10AF0430 ?GetPrivateStaticClassUBitfieldProperty@UBitfieldProperty@@SAPAVUClass@@PBD@Z
UClass* UBitfieldProperty::GetPrivateStaticClassUBitfieldProperty(const TCHAR* Package)
{
    FUN_10905aa0()->Virtual8(0, 0);
    UClass* ReturnClass = ::new(0, 0, 0, 0, 0) UClass(EC_StaticConstructor, sizeof(UBitfieldProperty), StaticClassFlags,
                                                      FGuid(0, 0, 0, 0), &TEXT("UBitfieldProperty")[1], Package,
                                                      StaticConfigName(),
                                                      RF_Public | RF_Standalone | RF_Transient | RF_Native,
                                                      InternalConstructor,
                                                      (void (UObject::*)())&UBitfieldProperty::StaticConstructor);
    FUN_10905aa0()->Virtual9();
    return ReturnClass;
}

// FUNCTION: 0x10B0F240 ?GetPrivateStaticClassULinkDataObject@ULinkDataObject@@SAPAVUClass@@PBD@Z
UClass* ULinkDataObject::GetPrivateStaticClassULinkDataObject(const TCHAR* Package)
{
    FUN_10905aa0()->Virtual8(0, 0);
    UClass* ReturnClass = ::new(0, 0, 0, 0, 0) UClass(EC_StaticConstructor, sizeof(ULinkDataObject), StaticClassFlags,
                                                      FGuid(0, 0, 0, 0), &TEXT("ULinkDataObject")[1], Package,
                                                      StaticConfigName(),
                                                      RF_Public | RF_Standalone | RF_Transient | RF_Native,
                                                      InternalConstructor,
                                                      (void (UObject::*)())&ULinkDataObject::StaticConstructor);
    FUN_10905aa0()->Virtual9();
    return ReturnClass;
}

// FUNCTION: 0x10B0F310 ?InitializePrivateStaticClassULinkDataObject@ULinkDataObject@@SAXXZ
void ULinkDataObject::InitializePrivateStaticClassULinkDataObject()
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
