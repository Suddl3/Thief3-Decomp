// Game/Class_10E82688_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E67FD0.h"
#include "Game/Class_1092D3D0.h"
#include "Game/Class_10C56E40_Field00.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_1092D420.h"
#include "Game/Class_10C56E40.h"

class Class_10C5A160_Y;

class Class_10B45AD0;

class cString;

class FVector;

class Window;

// Copied whole from Game/WindowManager.h with IsHUDWindowVisible and SetHUDMode added.
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
    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void OpenTitleLoadWindow();
    void FUN_10b16110(int A, int B);
    int IsHUDWindowVisible();
    void SetHUDMode(unsigned char A);
    void GetUIScreenSize(FVector* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);

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

Class_10C56E40* FUN_10b18b20();

void* GetWindowManager();

extern Class_1092D420* DAT_10f31b88;

class Class_10E82688
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void FUN_10b5a6f0(int A);
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67(int A);
    virtual void Virtual68(int A);

    void StartSequence();

    char Pad04[0x114];
    Class_10E82688* Unknown118;
    Class_10E82688* Unknown11C;
    char Pad120[0x3C];
    unsigned char m_WasHUDVisible;
    char Pad15D[0x1];
    bool m_CursorWasVisible;
};

// FUNCTION: 0x10B5A6F0 ?FUN_10b5a6f0@Class_10E82688@@UAEXH@Z
void Class_10E82688::FUN_10b5a6f0(int A)
{
    ((Class_10E67FD0*)this)->Class_10E67FD0::FUN_10a52a90(A);
    if (A)
    {
        Virtual67(0x10);
        FUN_10b18b20()->FUN_10b18b60(2);
        m_WasHUDVisible = ((WindowManager*)GetWindowManager())->IsHUDWindowVisible();
        ((WindowManager*)GetWindowManager())->SetHUDMode(0);
        m_CursorWasVisible = DAT_10f31b88->Unknown0C;
        if (m_CursorWasVisible)
            DAT_10f31b88->HideCursor();
    }
    else
    {
        Virtual68(0x10);
        FUN_10b18b20()->FUN_10b18ac0();
        ((WindowManager*)GetWindowManager())->SetHUDMode(m_WasHUDVisible);
        if (m_CursorWasVisible)
            DAT_10f31b88->FUN_1092d350(-1, -1);
    }
    if (Unknown118)
        Unknown118->FUN_10b5a6f0(A);
    if (Unknown11C)
    {
        if (A == 2)
            StartSequence();
        Unknown11C->FUN_10b5a6f0(A);
    }
}
