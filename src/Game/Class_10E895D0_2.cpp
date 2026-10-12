// Game/Class_10E895D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10D9FEE0.h"
#include "Game/Class_10B82390.h"
#include "Game/Class_10E895D0.h"

struct Struct_10B8B830;

class Class_10B8B9F0_Unknown10
{
public:
    bool FUN_10dab5a0();
    float FUN_10dab590();
    float FUN_10dab580();
    void FUN_10dab5f0(float A);
    void FUN_10dab620(int A);
    float FUN_10dad2d0();
    float FUN_10dad2e0();
    void FUN_10dacd80(float A, int B);

    char Pad00[0x4];
    int Unknown04;
};

struct Struct_10B8BF80_Obj
{
    char Unknown00[0x4];
    Class_10B82390* Unknown04;
};

struct Struct_10B8BF80_Out
{
    float Unknown00;
    int Unknown04;
    char Unknown08[0x8];
};

// FUNCTION: 0x10B8BF80 ?FUN_10b8bf80@Class_10E895D0@@QAEXXZ
void Class_10E895D0::FUN_10b8bf80()
{
    if (Unknown0C == 1)
        return;
    if (Unknown0C != 0)
        FUN_10b8b830(1);
    Class_10B8B9F0_Unknown10* Ctrl = FUN_10b8b8a0();
    Class_10D9FEE0* Obj = (Class_10D9FEE0*)Unknown08;
    m_Controller = Ctrl;
    Struct_10B8BF80_Out Out;
    ((Struct_10B8BF80_Obj*)Obj)->Unknown04->FUN_10b82390(0x803b9, &Out);
    if (m_Controller == 0)
        return;
    Unknown34 = false;
    Obj->FUN_10da0000(false);
    Ctrl = m_Controller;
    if (Ctrl->Unknown04 == 0)
    {
        float Delta = 6.2831855f;
        if (!Ctrl->FUN_10dab5a0())
        {
            float A = Ctrl->FUN_10dab590();
            Delta = A - Ctrl->FUN_10dab580();
        }
        Ctrl->FUN_10dab5f0(Delta / Out.Unknown00);
        Ctrl->FUN_10dab620(Out.Unknown04);
    }
    else if (Ctrl->Unknown04 == 1)
    {
        float A = Ctrl->FUN_10dad2d0();
        float Delta = A - Ctrl->FUN_10dad2e0();
        Ctrl->FUN_10dacd80(Delta / Out.Unknown00, Out.Unknown04);
    }
    Obj->FUN_10d9fee0(1, 1);
}
