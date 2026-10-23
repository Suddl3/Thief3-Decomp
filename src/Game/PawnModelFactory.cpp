// Game/PawnModelFactory.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Struct_10C37D30.h"
#include "Game/Class_1096D780.h"

class AAIPawn;

// Native value arguments use the existing four-byte default/copy ABI below.
// Its original type name and the trailing spawn flag names remain unknown.
struct PawnTransform
{
    char Unknown00[0x2C];
    FVector Location;
    FRotator Rotation;
};

class PawnModelWorld
{
public:
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Slot6();
    virtual void Slot7();
    virtual void Slot8();
    virtual void Slot9();
    virtual void Slot10();
    virtual void Slot11();
    virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14();
    virtual void Slot15();
    virtual void Slot16();
    virtual void Slot17();
    virtual void Slot18();
    virtual void Slot19();
    virtual void Slot20();
    virtual void Slot21();
    virtual void Slot22();
    virtual void Slot23();
    virtual void Slot24();
    virtual void Slot25();
    virtual void Slot26();
    virtual void Slot27();
    virtual void Slot28();
    virtual void Slot29();
    virtual void Slot30();
    virtual void Slot31();
    virtual void Slot32();
    virtual void Slot33();
    virtual void Slot34();
    virtual void Slot35();
    virtual void Slot36();
    virtual void Slot37();
    virtual void Slot38();
    virtual void Slot39();
    virtual void Slot40();
    virtual void Slot41();
    virtual void Slot42();
    virtual void Slot43();
    virtual void Slot44();
    virtual void Slot45();
    virtual void* Virtual46(int ModelClass, Struct_10C37D30 Name, FVector Location, FRotator Rotation,
        int A, int B, int C, int D, int Context, int E, int F, int G, int H);
};

// FUNCTION: 0x10BC3120 ?FUN_10bc3120@@YAPAXHPAVAAIPawn@@H@Z
void* FUN_10bc3120(int ModelClass, AAIPawn* Pawn, int Context)
{
    PawnModelWorld* World = (PawnModelWorld*)((Class_1096D780*)Pawn)->Get();
    return World->Virtual46(ModelClass, Struct_10C37D30(),
        ((PawnTransform*)Pawn)->Location, ((PawnTransform*)Pawn)->Rotation,
        0, 0, 0, 0, Context, 0, 1, 0, 0);
}
