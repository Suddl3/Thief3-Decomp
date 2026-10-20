// Game/cLockPickController_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Core/Core.h"

extern float DAT_10eafbdc;

extern float DAT_10e49684;

bool IsAlignedXY(FVector* A, FVector* B, float C);

float FUN_10b1e2e0(float A, float B);

// The object the manager points at; it takes the message.
class Class_10B3EBD0_Unknown94
{
public:
    void FUN_10a3c340(float A, int B, int C);
};

struct Struct_10AA3520
{
    char Unknown00[0x94];
    Class_10B3EBD0_Unknown94* Unknown94;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10B3E7A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    void FUN_10b3e7a0(int A);
};

class Class_10B3E340 : public Class_10B3E7A0
{
public:
    void FUN_10b3e6b0(int A, float B);
};

class Class_10E7E538 : public Class_10B3E340
{
};

// Game/cLockPickController.h copied whole, with the fields the pick moves.
class cLockPickController : public Class_10E7E538
{
public:
    void ClearSlots(int Count);
    void FUN_10b3e8e0(int A);
    void FUN_10b3ebd0(int A);

    char Unknown04[0x18];
    FVector Target;
    FVector Position;
    char Unknown34[0x10];
    int Unknown44;
    char Unknown48[0x6];
    bool Unknown4E;
    char Pad4F;
};

// FUNCTION: 0x10B3EBD0 ?FUN_10b3ebd0@cLockPickController@@QAEXH@Z
void cLockPickController::FUN_10b3ebd0(int Slot)
{
    Unknown4E = false;
    ClearSlots(0);
    float Result = FUN_10b1e2e0(Position.X, Position.Y);
    if (Unknown44 != 3)
    {
        if (Result != DAT_10eafbdc)
        {
            FUN_10b3e8e0(1);
            Unknown44 = 3;
        }
    }
    if (Result == DAT_10eafbdc)
    {
        Unknown44 = 0;
        DAT_10f35dec->Unknown94->FUN_10a3c340(-1.0f, 0, 0);
        FUN_10b3e7a0(Slot);
        return;
    }
    FVector* Pos = &Position;
    FVector* Tgt = &Target;
    float Dx = Pos->X - Tgt->X;
    float Dy = Pos->Y - Tgt->Y;
    float Dz = Pos->Z - Tgt->Z;
    float Distance = sqrtf(Dx * Dx + Dy * Dy + Dz * Dz);
    float Local;
    if (Distance < 0.95f)
    {
        Local = 0.95f - Distance;
        if (Local < 0.1f)
            Local = 0.1f;
        else if (!IsAlignedXY(&Position, &Target, 0.3f))
            Local = 0.1f;
    }
    else
        Local = 0.1f;
    DAT_10f35dec->Unknown94->FUN_10a3c340(-1.0f, 0, (int)(Local * 60000.0f));
    FUN_10b3e6b0(Slot, DAT_10e49684 - Local);
}
