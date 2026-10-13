// Game/Class_10E95288_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BE0610_Result
{
public:
    char Pad00[0x2c];
    int Unknown2C;
};

class Class_10BB8360
{
public:
    Class_10BE0610_Result* FUN_10bb85d0();
    void FUN_10bb8360(Class_10BE0610_Result* A, float B, int C);
};

class Class_10BC4160
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    Class_10BF7F90* FUN_10bc4160();

    Class_10BB8360* Unknown04;
};

class Class_10E95288 : public Class_10BC4160
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10be0610();
    void FUN_10be02e0();
    void FUN_10bc4ee0(int* p1, int p2);
    void FUN_10bdf180();

    char Pad08[0x5C];
    float Unknown64;
};

float GetFrameDeltaTime();

// FUNCTION: 0x10BE0610 ?FUN_10be0610@Class_10E95288@@UAEXXZ
void Class_10E95288::FUN_10be0610()
{
    Class_10BE0610_Result* Obj = Unknown04->FUN_10bb85d0();
    int Linked = FUN_10bc4160()->GetLinkedObject();
    if (Linked == 0)
    {
        if (Obj)
            FUN_10bc4ee0(&Obj->Unknown2C, Linked);
        double Remaining = Unknown64;
        Unknown64 = Remaining - GetFrameDeltaTime();
        if (Unknown64 < 0.0f)
            FUN_10be02e0();
    }
    if (Obj)
        Unknown04->FUN_10bb8360(Obj, 0.5f, 0);
    FUN_10bdf180();
}
