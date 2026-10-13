// Game/Unsorted_10BBA0C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10BAA6F0.h"
#include "Game/Class_10BB8300.h"
#include "Game/Class_10B9BDA0_Member.h"
#include "Game/Class_10BAA6B0_Param.h"
#include "Game/Class_10BBA0C0.h"

// Class_10BAC050 copied whole from include/Game/Class_10BAC050.h, with FUN_10bac070 as its call site shows it.
class Class_10BAC050 : public Class_10C7D570
{
public:
    int FUN_10baac90(int A);
    int FUN_10bac050(int A);
    bool FUN_10bac070(int A);
};

// Class_10BB9FC0 copied whole from include/Game/Class_10BB9FC0.h, with FUN_10bb96f0 added.
class Class_10BB9FC0
{
public:
    void FUN_10bb9e90();
    void FUN_10bb9fc0();
    void FUN_10bb9ff0();
    bool FUN_10bb96f0();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x278];
    int Unknown284;
};

// The object FUN_10baa6f0 returns, read as a float at +0x2c8 and an int at +0x2dc.
class Class_10BBA0C0_Result
{
public:
    char Pad00[0x2c8];
    float Unknown2C8;
    char Pad2CC[0x10];
    int Unknown2DC;
};

class Class_10BABED0;

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

double GetTimeSeconds();

bool FUN_10c00680(void* A);

extern Class_10FF667C* DAT_10ff667c;

extern float DAT_10eafbdc;

// FUNCTION: 0x10BBA0C0 ?FUN_10bba0c0@Class_10BBA0C0@@QAE_NPAVClass_10BAA6B0_Param@@@Z
bool Class_10BBA0C0::FUN_10bba0c0(Class_10BAA6B0_Param* A)
{
    if (!A || A->Virtual34())
        return false;
    if (Unknown08->FUN_10c7d570() == A)
        return false;
    if (!DAT_10ff667c->Unknown14->Virtual6())
        return false;
    Class_10BABED0* Pawn = FUN_10baa6b0(A);
    if (!Pawn)
        return false;
    if (((Class_10BB8300*)((Class_10BAA6F0*)Pawn)->FUN_10baa6f0())->FUN_10bb8c00())
        return false;
    int State = ((Class_10BBA0C0_Result*)((Class_10BAA6F0*)Pawn)->FUN_10baa6f0())->Unknown2DC;
    if (State == 2 || State == 3 || State == 4)
        return false;
    float Time = ((Class_10BBA0C0_Result*)((Class_10BAA6F0*)Pawn)->FUN_10baa6f0())->Unknown2C8;
    if (Time > DAT_10eafbdc && GetTimeSeconds() - Time < 60.0)
        return false;
    if (!((Class_10BB9FC0*)((Class_10BAA6F0*)Pawn)->FUN_10baa6f0())->FUN_10bb96f0())
        return false;
    if (!Unknown08->FUN_10bac070((int)A))
        return false;
    return FUN_10c00680(A) ? true : false;
}
