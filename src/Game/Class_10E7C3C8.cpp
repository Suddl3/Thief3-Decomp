// Game/Class_10E7C3C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10B154C0.h"
#include "Game/Class_10B36E40_Arg.h"

class WindowManager;

extern WindowManager* GWindowManager;

struct FColor
{
    FColor() {}
    int Unknown00;
};

FColor FUN_10abc760(int A);

void FUN_10a26c10(Class_109081E0* A, Class_109081E0* B);

void FUN_10a293b0(Class_109081E0* A, int B);

void* FUN_10b154c0();

class Class_10E7C3C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int __stdcall FUN_10b36f40(int A, Class_10B36E40_Arg* C);

    Class_10E7C3C8* FUN_10b36330();

    void* Unknown00;
};

// FUNCTION: 0x10B36F40 ?FUN_10b36f40@Class_10E7C3C8@@UAGHHPAVClass_10B36E40_Arg@@@Z
int __stdcall Class_10E7C3C8::FUN_10b36f40(int A, Class_10B36E40_Arg* C)
{
    if (GWindowManager)
    {
        Class_109081E0 Text(*(Class_109081E0*)C->Virtual4(0)->FUN_10ab37c0());
        ((Class_10C3D3B0*)C->Virtual4(1))->Class_10C3D3B0::FUN_10c3d3b0();
        Class_109081E0 Key;
        FUN_10a26c10(&Text, &Key);
        FUN_10a293b0(&Key, 0);
        ((Class_10B154C0*)FUN_10b154c0())->FUN_10b15e30(&Key, FUN_10abc760(0).Unknown00);
    }
    return 1;
}
