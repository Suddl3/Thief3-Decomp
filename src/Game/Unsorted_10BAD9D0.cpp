// Game/Unsorted_10BAD9D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10BAE080.h"
#include "Game/Class_10BAE0C0.h"
#include "Game/FCoords.h"

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

extern const char DAT_10e8d924[];

struct Struct_10BADCE0
{
    char Unknown00[0xc];
    FRotator Rotation;
};

void FUN_10badc40(Struct_10BADCE0* Data, const FRotator& Rotation, float Distance, int A, int B);

extern FCoords DAT_10f46de8;

// FUNCTION: 0x10BADB90 ?FUN_10badb90@@YA?AVFVector@@ABVFRotator@@ABV1@M@Z
FVector FUN_10badb90(const FRotator& Rotation, const FVector& Origin, float Distance)
{
    FCoords Coords = FCoords(DAT_10f46de8).FUN_10961af0(Rotation);
    FVector Dir = Coords.XAxis;
    Dir.Normalize();
    Dir.X *= Distance;
    Dir.Y *= Distance;
    Dir.Z *= Distance;
    Dir += Origin;
    return Dir;
}

// FUNCTION: 0x10BADCE0 ?FUN_10badce0@@YAXPAUStruct_10BADCE0@@MHH@Z
void FUN_10badce0(Struct_10BADCE0* Data, float Angle, int A, int B)
{
    FRotator Rotation = Data->Rotation;
    Rotation.Yaw = (Rotation.Yaw - (int)(Angle * -182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
    Rotation = Data->Rotation;
    Rotation.Yaw = (Rotation.Yaw - (int)(Angle * 182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
}

// FUNCTION: 0x10BADD90 ?FUN_10badd90@@YAXPAUStruct_10BADCE0@@MHH@Z
void FUN_10badd90(Struct_10BADCE0* Data, float Angle, int A, int B)
{
    FRotator Rotation = Data->Rotation;
    Rotation.Pitch = (Rotation.Pitch - (int)(Angle * -182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
    Rotation = Data->Rotation;
    Rotation.Pitch = (Rotation.Pitch - (int)(Angle * 182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
}

// FUNCTION: 0x10BAE080 ?Clear@Class_10BAE080@@QAEXXZ
void Class_10BAE080::Clear()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x10BAE0C0 ?Free@Class_10BAE0C0@@QAEXXZ
void Class_10BAE0C0::Free()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x10BAEA20 ?FUN_10baea20@@YA?AVcString@@M@Z
cString FUN_10baea20(float Value)
{
    char Buffer[0x20];
    sprintf(Buffer, DAT_10e8d924, Value);
    return cString(Buffer);
}
