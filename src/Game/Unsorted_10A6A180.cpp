// Game/Unsorted_10A6A180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BB7600.h"

class Class_10BABED0;

class Class_10BAA6B0_Param;

extern char DAT_10e6b668[];

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

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

int FUN_10af3690(const char* A, const char* B);

class Class_10A6AC80_Param
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

// Copied from include/Game/Class_10E6B660.h with the method added.
class Class_10E6B660
{
public:
    virtual void FUN_10a6ad50(int Type, int A, int B, int C);

    void FUN_10a6ac80(int A, int B, int C);
    bool FUN_10a6aa30(int A, void* B);
};

// FUNCTION: 0x10A6AC80 ?FUN_10a6ac80@Class_10E6B660@@QAEXHHH@Z
void Class_10E6B660::FUN_10a6ac80(int A, int B, int C)
{
    if (A)
    {
        UObject* Obj = (UObject*)A;
        if (Obj->IsA(APawn::StaticClass()))
        {
            Class_10BABED0* Item = FUN_10baa6b0((Class_10BAA6B0_Param*)A);
            if (Item)
            {
                Class_10BA9FD0* Owner = (Class_10BA9FD0*)Item;
                Class_10BB7600* Child = (Class_10BB7600*)Owner->FUN_10ba9fd0();
                if (!Child->FUN_10bb7600())
                    return;
            }
        }
    }
    Class_10A6AC80_Param* Param = (Class_10A6AC80_Param*)B;
    Class_10AF7F80* Name = Param->Unknown40 ? &Param->Unknown24 : 0;
    void* Part = Param->Unknown44 ? Param->Unknown30 : 0;
    Param->Virtual5();
    if (FUN_10af3690(Name->FUN_10af7f80(), DAT_10e6b668))
        return;
    if (!FUN_10a6aa30(A, Part))
        return;
    DAT_10f46da0->Virtual5(0x2d, A, B, C);
}
