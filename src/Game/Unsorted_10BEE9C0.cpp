// Game/Unsorted_10BEE9C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Class_10971570.h"

class Class_10BFF600
{
public:
    int FUN_10bff600(int A, const float* B);
    bool FUN_10bff6d0(int A, const float* B);
    void* FUN_10bff6f0(int A, const float* B, char C);
    char FUN_10bff820(int A, const float* B, bool C);

    char Pad00[0x1];
};

class Class_10FF667C
{
public:
    char Unknown00[0xC];
    Class_10BFF600* Unknown0C;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10BEEB50_Unknown04
{
public:
    char Unknown00[0x8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x238];
    unsigned Unknown244;
};

class Class_10BEEB50_Result
{
public:
    char Unknown00[0x2C];
    float Unknown2C[3];
};

class Class_10BEEB50
{
public:
    bool FUN_10beeb50(bool Flag);
    bool FUN_10bee570(int A);

    char Unknown00[0x4];
    Class_10BEEB50_Unknown04* Unknown04;
    char Unknown08[0x40];
    bool Unknown48;
    bool Unknown49;
    char Unknown4A[0x6];
    int Unknown50;
    int Unknown54;
    char Unknown58[0x18];
    int Unknown70;
    int Unknown74;
};

// FUNCTION: 0x10BEEB50 ?FUN_10beeb50@Class_10BEEB50@@QAE_N_N@Z
bool Class_10BEEB50::FUN_10beeb50(bool Flag)
{
    Class_10BEEB50_Unknown04* P = Unknown04;
    Unknown50 = 0;
    Unknown54 = 0;
    Class_10C7D570* Owner = P->Unknown08;
    int Mode = P->Unknown244;
    if (Flag || DAT_10ff667c->Unknown0C->FUN_10bff820(Mode, ((Class_10BEEB50_Result*)Owner->FUN_10c7d570())->Unknown2C, Unknown48) == 1)
        Unknown48 = (Unknown48 != 1);
    void* Base = Owner->FUN_10c7d570();
    void* Result = DAT_10ff667c->Unknown0C->FUN_10bff6f0(Mode, ((Class_10BEEB50_Result*)Base)->Unknown2C, Unknown48);
    int Target = (int)Result;
    if (Result == 0)
    {
        if (Unknown70 != 0)
        {
            Class_10C7D570* Holder = Unknown04->Unknown08;
            ((Class_10971570*)Holder->FUN_10c7d570())->FUN_10971570(0x20006da, &Flag);
            if (!Flag)
                Unknown48 = (Unknown48 != 1);
            Target = Unknown74;
            if (Target == 0)
                Target = Unknown70;
            Unknown70 = 0;
        }
        else
        {
            Unknown49 = true;
            return false;
        }
    }
    return FUN_10bee570(Target);
}
