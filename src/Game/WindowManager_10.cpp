// Game/WindowManager_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

class Class_10B45AD0;

extern const char DAT_10e791d8[];

void FUN_10a36cd0();

// The header's WindowManager, copied whole with SetDeferredMissionFailedWindow added. The slot this function calls
// (0x14) takes one int, so it is the first virtual WindowManager adds. The base Class_109E6D60 is
// 0x90 bytes, so the header's fields after it sit 0x8C past their header offsets: the flag at 0x25C
// and the float at 0x260 (object offsets, as the code reads them) follow after PadD4 of 0xFC.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual5(int Window);
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B45AD0* Window);

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
    bool SetDeferredMissionFailedWindow();

    char Unknown04[0x94];
    int Unknown98;
    char Pad9C[0x4];
    int UnknownA0;
    char PadA4[0x28];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0xFC];
    char DeferredArmed;
    char Pad25D[0x3];
    float DeferredDelay;
    char Unknown264;
};

// FUNCTION: 0x10B17030 ?SetDeferredMissionFailedWindow@WindowManager@@QAE_NXZ
bool WindowManager::SetDeferredMissionFailedWindow()
{
    int Window;
    {
        cString Name(DAT_10e791d8);
        Window = FindWindowByName(Name);
    }
    if (!Window)
    {
        return false;
    }
    if (!DeferredArmed)
    {
        Virtual5(Window);
        DeferredArmed = 1;
        DeferredDelay = 5.0f;
        FUN_10a36cd0();
    }
    return true;
}
