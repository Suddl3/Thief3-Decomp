// Game/Unsorted_10AB8730_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"

class ULevel;

class AAIPathPoint;

class Class_10DA0870;

// include/Game/Class_1096D780.h, copied whole with the vector at 0x2C added.
class Class_1096D780
{
public:
    void* Get();

    char Unknown00[0x2C];
    FVector Unknown2C;
    FRotator Unknown38;
    char Unknown44[0x54];
    void* Field98;
    char Unknown9C[0x14];
    Class_10DA0870* UnknownB0;
    char UnknownB4[0x440 - 0xB4];
    int Unknown440;
};

AAIPathPoint* FUN_10a49f00(ULevel* Level, UClass* Class, int C, Class_1096D780* D, FVector E, FVector F,
                           FRotator G, FRotator H, bool I);

class AAIPathPoint : public UObject
{
};

class Class_10AB8910
{
public:
    char Unknown00[0x10];
    UClass* Unknown10;
    UClass* Unknown14;

    void FUN_10ab8910(Class_1096D780* Path);
};

// FUNCTION: 0x10AB8910 ?FUN_10ab8910@Class_10AB8910@@QAEXPAVClass_1096D780@@@Z
void Class_10AB8910::FUN_10ab8910(Class_1096D780* Path)
{
    FVector V;
    V.X = Path->Unknown2C.X;
    V.Y = Path->Unknown2C.Y;
    V.Z = Path->Unknown2C.Z + 8.0f;

    UClass* First = Unknown10;
    if (First)
    {
        AAIPathPoint* Point = FUN_10a49f00((ULevel*)Path->Get(), First, 0, 0, V, FVector(0, 0, 0),
                                           FRotator(0, 0, 0), FRotator(0, 0, 0), false);
        AEmitter* Emitter = Cast<AEmitter>(Point);
        Emitter->AutoDestroy = true;
    }

    UClass* Second = Unknown14;
    if (Second)
    {
        AAIPathPoint* Point = FUN_10a49f00((ULevel*)Path->Get(), Second, 0, 0, V, FVector(0, 0, 0),
                                           FRotator(0, 0, 0), FRotator(0, 0, 0), false);
        AEmitter* Emitter = Cast<AEmitter>(Point);
        Emitter->AutoDestroy = true;
    }
}
