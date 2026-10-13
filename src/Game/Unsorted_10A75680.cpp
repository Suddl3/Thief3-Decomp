// Game/Unsorted_10A75680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AF7F80.h"

// Game/Class_10E6BBD0.h copied whole, with FUN_10a755b0 added (called on this).
class Class_10E6BBD0
{
public:
    virtual void HandleEvent(int Event, int A, int B, int C);

    void FUN_10a74c10(int A);
    void FUN_10a75190(int A, int B, int C);
    void FUN_10a75560(int A, bool B);
    void FUN_10a75680(int A, int B, int C);
    void FUN_10a74df0(int A);
    void FUN_10a74ec0(int A);
    void FUN_10a755b0(Class_10AF7F80* A, int B);
};

class Class_10A75680_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();

    char Pad04[0x20];
    Class_10AF7F80 Unknown24;
    char Unknown30[0x10];
    int Unknown40;
    int Unknown44;
};

// Game/Class_10F46DA0.h copied whole, with Virtual5 taking the ints the caller passes.
class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern char DAT_10e6bbd8[];

int FUN_10af3690(const char* A, const char* B);

// FUNCTION: 0x10A75680 ?FUN_10a75680@Class_10E6BBD0@@QAEXHHH@Z
void Class_10E6BBD0::FUN_10a75680(int A, int B, int C)
{
    Class_10A75680_Param* Obj = (Class_10A75680_Param*)B;
    Class_10AF7F80* Name = Obj->Unknown40 ? &Obj->Unknown24 : 0;
    Class_10AF7F80* Part = Obj->Unknown44 ? (Class_10AF7F80*)Obj->Unknown30 : 0;
    Obj->Virtual5();
    if (FUN_10af3690(Name->FUN_10af7f80(), DAT_10e6bbd8))
        return;
    FUN_10a755b0(Part, A);
    DAT_10f46da0->Virtual5(0x2d, A, B, C);
}
