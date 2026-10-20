// Game/Unsorted_10B744B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109E6D60.h"
#include "Game/Class_10E822B0.h"
#include "Game/cIntArray.h"
#include "Game/cRadioWindow.h"
#include "Game/Class_10B59770.h"

class cString;

class Class_10B45AD0;

class FVector;

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
    void GetUIScreenSize(FVector* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);
    bool OpenMainMenuWindow(int A);

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

void* GetWindowManager();

struct Struct_10B744B0
{
    char Unknown00[0x1A4];
    bool Unknown1A4;
};

class cT3TabbedWindow
{
public:
    virtual ~cT3TabbedWindow();

    cT3TabbedWindow();
    void FUN_10b59730(int A);
    void FUN_10b79860(int A);
    virtual void FUN_10b792d0();

    int Unknown154;
    int Unknown158;
    int Unknown15C;
    int Unknown160;
    cIntArray Unknown164;
    cIntArray Unknown170;
    bool Unknown17C;
    char Pad17D[0x3];
    cRadioWindow Unknown180;
    int Unknown2B8;
    int Unknown2BC;
    Class_10B59770 Unknown2C0;
};

class Class_10B64280 : public cT3TabbedWindow
{
public:
    void FUN_10b744b0();
    void FUN_10b64280();
    void FUN_10b6f870();

    char Unknown2C8[0x14];
    Struct_10B744B0* Unknown2DC;
    char Unknown2E0[0x14];
    int Unknown2F4;
};

// FUNCTION: 0x10B744B0 ?FUN_10b744b0@Class_10B64280@@QAEXXZ
void Class_10B64280::FUN_10b744b0()
{
    cT3TabbedWindow::FUN_10b792d0();
    if (!Unknown2F4)
    {
        Struct_10B744B0* P = Unknown2DC;
        if (P && P->Unknown1A4)
            static_cast<WindowManager*>(GetWindowManager())->OpenMainMenuWindow(0);
    }
}
