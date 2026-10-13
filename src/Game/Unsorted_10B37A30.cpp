// Game/Unsorted_10B37A30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_10B37DE0.h"
#include "Game/Class_1096D780.h"
#include "AICore/AICoreClasses.h"

class ULevel;

class Class_10DA0870;

class Class_10B37DE0_Field28;

class Class_10F3A3D8;

class Class_10F46DA0;

class Class_10B37DE0;

void* FUN_10a4bd70(int A);

void FUN_10ae1490(UClass* A, const char* B, int C, int D);

AAIPathPoint* FUN_10a49f00(ULevel* Level, UClass* Class, int C, Class_1096D780* D, FVector E, FVector F,
                           FRotator G, FRotator H, bool I);

class Class_10B37DE0_Field28
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x28];
    Class_10B37DE0_Field28* Unknown28;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10B37DE0* A, int B, AAIPathPoint* C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

struct Struct_10B37DE0_List
{
    int Count;
    AAIPathPoint* Last;
};

// FUNCTION: 0x10B37DE0 ?AddPathPoint@Class_10B37DE0@@QAEXHHPAUStruct_10B37DE0_List@@@Z
void Class_10B37DE0::AddPathPoint(int A, int B, Struct_10B37DE0_List* C)
{
    UClass* Class = (UClass*)FUN_10a4bd70(A);
    if (Class == 0)
    {
        FUN_10ae1490(Class, "T3Gamesys", 2, -1);
        Class = (UClass*)FUN_10a4bd70(A);
    }
    AAIPathPoint* Point = FUN_10a49f00((ULevel*)Unknown04->Get(), Class, 1, 0, FVector(0, 0, 0),
                                       FVector(0, 0, 0), FRotator(0, 0, 0), FRotator(0, 0, 0), false);
    C->Last = Point;
    C->Count++;
    int Flag = 0;
    Point->FUN_1098e330(0x8001f2, &Flag);
    if (Flag != 0)
    {
        Point->FUN_1098e3d0(0x2047b, &Unknown04);
        if (Unknown04->Unknown440 != 0)
        {
            DAT_10f3a3d8->Unknown28->Virtual2(Unknown04->Unknown440);
            Unknown04->Unknown440 = 0;
        }
        DAT_10f46da0->Virtual1(this, 0x2e, Point, -1);
    }
}
