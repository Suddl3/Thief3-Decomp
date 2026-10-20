// Game/Unsorted_10BAD9D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/cVisualSubsystemArray.h"
#include "Game/Class_10BAE0C0.h"
#include "Game/FCoords.h"
#include "Game/Struct_10BADCE0.h"

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

extern const char DAT_10e8d924[];

void FUN_10badc40(Struct_10BADCE0* Data, const FRotator& Rotation, float Distance, int A, int B);

extern FCoords DAT_10f46de8;

// FUNCTION: 0x10BADB90 ?GetPointAlongRotation@@YA?AVFVector@@ABVFRotator@@ABV1@M@Z
FVector GetPointAlongRotation(const FRotator& Rotation, const FVector& Origin, float Distance)
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

// FUNCTION: 0x10BADCE0 ?ProbeYaw@@YAXPAUStruct_10BADCE0@@MHH@Z
void ProbeYaw(Struct_10BADCE0* Data, float Angle, int A, int B)
{
    FRotator Rotation = Data->Rotation;
    Rotation.Yaw = (Rotation.Yaw - (int)(Angle * -182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
    Rotation = Data->Rotation;
    Rotation.Yaw = (Rotation.Yaw - (int)(Angle * 182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
}

// FUNCTION: 0x10BADD90 ?ProbePitch@@YAXPAUStruct_10BADCE0@@MHH@Z
void ProbePitch(Struct_10BADCE0* Data, float Angle, int A, int B)
{
    FRotator Rotation = Data->Rotation;
    Rotation.Pitch = (Rotation.Pitch - (int)(Angle * -182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
    Rotation = Data->Rotation;
    Rotation.Pitch = (Rotation.Pitch - (int)(Angle * 182.04f)) & 0xFFFF;
    FUN_10badc40(Data, Rotation, 400.0f, A, B);
}

// FUNCTION: 0x10BAEA20 ?FloatToString@@YA?AVcString@@M@Z
cString FloatToString(float Value)
{
    char Buffer[0x20];
    sprintf(Buffer, DAT_10e8d924, Value);
    return cString(Buffer);
}
