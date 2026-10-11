// Game/Unsorted_10B505C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B3ED20.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10AC8540_Param.h"
#include "Game/Struct_10B7C170.h"

struct Struct_10B3ACE0;

struct Struct_10D9E5E0_Param;

class Class_10CAFD00;

struct Struct_10B505C0_Param
{
    char Unknown00[0x34];
    float Unknown34;
};

// Game/Class_10E7ED00.h copied whole, with the method this function calls added.
class Class_10E7ED00 : public Class_10B3ED20
{
public:
    virtual void FUN_10b3e380(Struct_10B3ACE0* A, float B, float C);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void FUN_10b3efe0(int p1);
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void FUN_10b3e240(int A, int B);

    void FUN_109e38b0(int A, int B);
    void FUN_10b3e260();
    FVector FUN_10ac8540(Struct_10AC8540_Param* A);

    char Unknown50[0x20];
    bool Unknown70;
    char Pad71[0x7];
    int Unknown78;
    int Unknown7C;
    int Unknown80;
    int Unknown84;
    float Unknown88;
    float Unknown8C;
    bool Unknown90;
    char Pad91[0x3];
};

// Game/Class_10D9B090.h copied whole, with FUN_10d9d640 taking the two points by reference.
class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    BYTE FUN_10d9d640(const FVector& A, const FVector& B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0xb0];
    bool UnknownB8;
};

Class_10D9B090* FUN_10d9dcb0();

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10B505C0 ?FUN_10b505c0@@YG_NPAUStruct_10B505C0_Param@@PAUStruct_10AC8540_Param@@@Z
bool __stdcall FUN_10b505c0(Struct_10B505C0_Param* Obj, Struct_10AC8540_Param* Src)
{
    Struct_10B7C170 Hit;
    Hit.Unknown20 = -1;
    Hit.Unknown24 = -1;
    Hit.Unknown00.X = 0.0f;
    Hit.Unknown00.Y = 0.0f;
    Hit.Unknown00.Z = 0.0f;
    Hit.Unknown0C.X = 0.0f;
    Hit.Unknown0C.Y = 0.0f;
    Hit.Unknown0C.Z = 0.0f;
    Hit.Unknown18 = 0.0f;
    Hit.Unknown1C = 0.0f;
    FVector End;
    End = DAT_10f3a3d8->Unknown108->FUN_10ac8540(Src) * 24.0f + Src->Unknown2C;
    FVector Start = End;
    Start.Z = Obj->Unknown34;
    return FUN_10d9dcb0()->FUN_10d9d640(Start, End, 3, &Hit, 0);
}
