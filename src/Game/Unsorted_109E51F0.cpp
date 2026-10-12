// Game/Unsorted_109E51F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109E6D60.h"
#include "Core/Core.h"

class Class_109081E0;

class Class_10B45AD0;

class Window;

struct Struct_109E51F0_Param;

struct Struct_10963930
{
    char Unknown00[0x40];
};

// Copied from include/Game/WindowManager.h. The base Class_109E6D60 is 0x90 bytes, so the
// header's Unknown04[0x94] padding becomes Pad90[0x8]; the members at 0xA8, 0xB0, 0xB4 and
// 0x158 are added, and Unknown98 is typed as the pointer the function stores there.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B45AD0* Window);

    void FUN_109e3d60(void* Window);
    void FUN_109e8ae0(void* Window);
    int FindWindowByName(const Class_109081E0& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void OpenTitleLoadWindow();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);

    char Pad90[0x8];
    Struct_109E51F0_Param* Unknown98;
    int Unknown9C;
    int UnknownA0;
    char PadA4[0x4];
    int UnknownA8;
    char PadAC[0x4];
    float UnknownB0;
    float UnknownB4;
    char PadB8[0x14];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0x84];
    Struct_10963930 Unknown158;
    char Pad198[0xCC];
    char Unknown264;
};

extern WindowManager* GWindowManager;

struct Struct_109E51F0_Param
{
    char Unknown00[0x6C];
    int Unknown6C;
    int Unknown70;
};

// The matrix helpers' stack arguments follow their ret N: 0x10963760 and 0x10963850 take one
// vector (ret 4), 0x10963930 an output matrix and a second operand (ret 8).
class Class_10963930
{
public:
    Struct_10963930* FUN_10963930(Class_10963930* Out, Class_10963930* Other);

    char Unknown00[0x40];
};

class Class_10963760
{
public:
    Class_10963930* FUN_10963760(const FVector& V);

    char Unknown00[0x40];
};

class Class_10963850
{
public:
    Class_10963930* FUN_10963850(const FVector& V);

    char Unknown00[0x40];
};

// FUNCTION: 0x109E51F0 ?FUN_109e51f0@@YAXPAVWindowManager@@HPAUStruct_109E51F0_Param@@H@Z
void FUN_109e51f0(WindowManager* Manager, int A, Struct_109E51F0_Param* P, int C)
{
    GWindowManager = Manager;
    GWindowManager->Unknown9C = A;
    GWindowManager->Unknown98 = P;
    GWindowManager->UnknownA8 = C;
    GWindowManager->UnknownB0 = (float)P->Unknown6C;
    GWindowManager->UnknownB4 = (float)P->Unknown70;
    if (GWindowManager->AssumedUIScreenWidth == -1.0f)
        GWindowManager->AssumedUIScreenWidth = GWindowManager->UnknownB0;
    if (GWindowManager->AssumedUIScreenHeight == -1.0f)
        GWindowManager->AssumedUIScreenHeight = GWindowManager->UnknownB4;
    FVector V1;
    V1.X = GWindowManager->UnknownB0 * 0.5f;
    V1.Y = GWindowManager->UnknownB4 * -0.5f;
    V1.Z = 1.0f;
    FVector V2(1.0f, -1.0f, 0.0f);
    Class_10963850 Obj1;
    Class_10963930 Out;
    Class_10963760 Self;
    GWindowManager->Unknown158 = *Self.FUN_10963760(V2)->FUN_10963930(&Out, Obj1.FUN_10963850(V1));
}
