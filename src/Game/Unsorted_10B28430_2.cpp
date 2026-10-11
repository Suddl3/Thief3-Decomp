// Game/Unsorted_10B28430_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E6D60.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10B28870.h"

class Class_109081E0;

class Class_10B45AD0;

class FVector;

class Window;

// include/Game/WindowManager.h, copied whole: the base's Virtual4(int) is brought back by a
// using-declaration, since the header's Virtual4 overload hides it.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B45AD0* Window);
    using Class_109E6D60::Virtual4;

    void FUN_109e3d60(void* Window);
    void FUN_109e8ae0(void* Window);
    int FUN_109e5960(const Class_109081E0& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void FUN_10b158b0();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector FUN_109e4290(int X, int Y);
    void FUN_109e4300(FVector* Pos, int* OutX, int* OutY);

    char Unknown04[0x94];
    int Unknown98;
    char Pad9C[0x4];
    int UnknownA0;
    char PadA4[0x28];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0x190];
    char Unknown264;
};

extern WindowManager* GWindowManager;

// The getter's result: nothing but the field at 0x264 is used.
class Class_10B154C0_Result
{
public:
    char Pad00[0x264];
    char Unknown264;
};

void* FUN_10b154c0();

extern const char DAT_10e7ad64[];

// FUNCTION: 0x10B28870 ?FUN_10b28870@Class_10B28870@@QAEXXZ
void Class_10B28870::FUN_10b28870()
{
    Virtual56(0);
    GWindowManager->FUN_109e8930(this);
    ((Class_10B154C0_Result*)FUN_10b154c0())->Unknown264 = 0;
    int Window;
    {
        Class_109081E0 Name(DAT_10e7ad64);
        Window = GWindowManager->FUN_109e5960(Name);
    }
    if (Window)
    {
        if (!GWindowManager->FUN_109e6d60(Window))
            GWindowManager->Virtual4(Window);
        else
            GWindowManager->FUN_109e6b20(1);
    }
}
