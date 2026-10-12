// Game/Unsorted_10A50830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E6D60.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10A50830.h"

class cString;

class Class_10B45AD0;

class FVector;

class Window;

// Game/WindowManager.h copied whole, with the two methods this function calls added.
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
    int FUN_109e8d20(int A, int B);
    int FUN_109e53b0(int A);

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

class Class_10A50830_Unknown04
{
public:
    virtual int Virtual0(int A, int B);
};

class Class_10A50830_Unknown14
{
public:
    Class_10AF7F80* Unknown00;
};

// FUNCTION: 0x10A50830 ?FUN_10a50830@Class_10A50830@@QAEHHH@Z
int Class_10A50830::FUN_10a50830(int A, int B)
{
    int Result = 0;
    if (GWindowManager && GWindowManager->FUN_109e8d20(A, B))
        Result = 1;
    else if (Unknown04 && Unknown04->Virtual0(A, B))
        Result = 1;
    if (Unknown08 == 0)
    {
        Unknown08 = 1;
        for (int i = 0; i < Unknown0C; i++)
        {
            Class_10A50830_Unknown14* Entry = Unknown14[i];
            Class_10AF7F80* Name = Entry->Unknown00;
            WindowManager* Manager = GWindowManager;
            Manager->FUN_109e53b0((int)Name->FUN_10af7f80());
            FString* Text = Entry->Unknown00;
            delete Text;
            delete Entry;
        }
        Unknown0C = 0;
        Unknown08 = 0;
    }
    return Result;
}
