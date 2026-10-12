// Game/WindowManager_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10B45AD0.h"

extern const char DAT_10e790b0[];

// The header's class with OpenCreditsWindow added (copied whole; the lead merges it).
// Virtual4 takes an int here: the header's Class_10B45AD0* parameter would not override slot 4.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int Window);

    void FUN_109e3d60(void* Window);
    void FUN_109e8ae0(void* Window);
    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void OpenTitleLoadWindow();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);
    bool OpenCreditsWindow(int A);

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

// FUNCTION: 0x10B15D70 ?OpenCreditsWindow@WindowManager@@QAE_NH@Z
bool WindowManager::OpenCreditsWindow(int A)
{
    int Window;
    {
        cString Name(DAT_10e790b0);
        Window = FindWindowByName(Name);
    }
    if (Window && !IsCurrentWindow(Window))
    {
        ((Class_10B45AD0*)Window)->Unknown15D = A;
        Virtual4(Window);
        return true;
    }
    return false;
}
