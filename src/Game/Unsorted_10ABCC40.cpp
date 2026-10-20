// Game/Unsorted_10ABCC40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10A1F880.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B06220.h"
#include "Game/Class_10ABCC20.h"
#include "Game/Class_10ABCC20_Field04.h"
#include "Game/Class_10ABCFE0.h"
#include "Game/Class_1098E330.h"
// Game/Unsorted_10ABCC40.cpp: candidate for 0x10ABCC50.

#include "Core/Core.h"
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10A370C0.h"
#include "Game/Class_Field04.h"

extern Class_10A73EF0_Table* DAT_10f3eda4;

struct Struct_10ABCD90
{
    char Unknown00[0xE8];
    Class_1098E330* UnknownE8;
};

Class_10A1F880* FUN_10a1fcf0();

bool FUN_10a37030(Class_10A370C0* Obj, const FVector& A);

bool FUN_10a370c0(Class_10A370C0* Obj, const FVector& A);

float appFrand();

// FUNCTION: 0x10ABCC50 ?FUN_10abcc50@@YAXPAVClass_10A370C0@@HPAMM1@Z
void FUN_10abcc50(Class_10A370C0* Obj, int A, float* Vec, float Scale, float* Out)
{
    ((Class_1098E3D0*)Obj)->FUN_1098e3d0(0x2047b, &Out);

    FVector Scaled;
    Scaled.X = Scale * Vec[0];
    Scaled.Y = Scale * Vec[1];
    Scaled.Z = Scale * Vec[2];
    Obj->Unknown44 = Scaled;
    FUN_10a37030(Obj, Scaled);

    FVector Min(0.0f, 0.0f, 0.0f);
    FVector Max(0.0f, 0.0f, 0.0f);
    ((Class_Field04*)Obj)->FUN_1098e290(0x80842, (FString*)&Min);
    ((Class_Field04*)Obj)->FUN_1098e290(0x80843, (FString*)&Max);

    FVector Delta;
    Delta.X = Max.X - Min.X;
    Delta.Y = Max.Y - Min.Y;
    Delta.Z = Max.Z - Min.Z;

    FUN_10a370c0(Obj, FVector((appFrand() * Delta.X + Min.X) * (3.14159265358979323846 / 180.0),
                              (appFrand() * Delta.Y + Min.Y) * (3.14159265358979323846 / 180.0),
                              (appFrand() * Delta.Z + Min.Z) * (3.14159265358979323846 / 180.0)));
}

// FUNCTION: 0x10ABCD90 ?FUN_10abcd90@@YAHH@Z
int FUN_10abcd90(int A)
{
    Struct_10ABCD90* Obj = (Struct_10ABCD90*)FUN_10a1fcf0()->GetAt(A);
    if (Obj)
    {
        int Value = 0;
        Obj->UnknownE8->FUN_1098e330(0x80062b, &Value);
        return Value;
    }
    return 0;
}

// FUNCTION: 0x10ABCFE0 ?CreateItem@Class_10ABCFE0@@QAEXHH@Z
void Class_10ABCFE0::CreateItem(int Handle, int B)
{
    Class_10ABCC20* Item = 0;
    Class_10A73EF0_Object* Obj = DAT_10f3eda4->Unknown08[Handle & 0xffff];
    Item = (Class_10ABCC20*)Obj->Virtual51();
    new (Item) Class_10ABCC20;
    Obj->Virtual45(Item, B, 0);
    FUN_10b06220();
    FUN_10ad9c90(Handle, Item);
}
