// Game/WindowManager_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_109E6D60.h"

extern const char DAT_10e790b0[];

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

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
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

// The header's class with the field at 0x15D added (copied whole; the lead merges it).
class Class_10B45AD0
{
public:
    void FUN_10b45ad0(int A);

    char Unknown00[0x158];
    int Unknown158;
    char Pad15C[0x1];
    char Unknown15D;
};

// The header's class with FUN_10b15d70 added (copied whole; the lead merges it).
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
    int FUN_109e5960(const Class_109081E0& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void FUN_10b158b0();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector FUN_109e4290(int X, int Y);
    void FUN_109e4300(FVector* Pos, int* OutX, int* OutY);
    bool FUN_10b15d70(int A);

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

// FUNCTION: 0x10B15D70 ?FUN_10b15d70@WindowManager@@QAE_NH@Z
bool WindowManager::FUN_10b15d70(int A)
{
    int Window;
    {
        Class_109081E0 Name(DAT_10e790b0);
        Window = FUN_109e5960(Name);
    }
    if (Window && !FUN_109e6d60(Window))
    {
        ((Class_10B45AD0*)Window)->Unknown15D = A;
        Virtual4(Window);
        return true;
    }
    return false;
}
