// Game/WindowManager_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_109E6D60.h"

class Class_10B45AD0;

extern const char DAT_10e791d8[];

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

void FUN_10a36cd0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
// The header's class has a base and the implicit destructor, which does not match here
// (Block is computed before FUN_10905aa0()): this copy has no base and the body as its destructor.
class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// The header's WindowManager, copied whole with FUN_10b17030 added. The slot this function calls
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
    int FUN_109e5960(const Class_109081E0& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void FUN_10b158b0();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector FUN_109e4290(int X, int Y);
    void FUN_109e4300(FVector* Pos, int* OutX, int* OutY);
    bool FUN_10b17030();

    char Unknown04[0x94];
    int Unknown98;
    char Pad9C[0x4];
    int UnknownA0;
    char PadA4[0x28];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0xFC];
    char Unknown25C;
    char Pad25D[0x3];
    float Unknown260;
    char Unknown264;
};

// FUNCTION: 0x10B17030 ?FUN_10b17030@WindowManager@@QAE_NXZ
bool WindowManager::FUN_10b17030()
{
    int Window;
    {
        Class_109081E0 Name(DAT_10e791d8);
        Window = FUN_109e5960(Name);
    }
    if (!Window)
    {
        return false;
    }
    if (!Unknown25C)
    {
        Virtual5(Window);
        Unknown25C = 1;
        Unknown260 = 5.0f;
        FUN_10a36cd0();
    }
    return true;
}
