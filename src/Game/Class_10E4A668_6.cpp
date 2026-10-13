// Game/Class_10E4A668_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E4A668
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
    virtual void FUN_10943830();

    float M[3][4];
    FVector Origin;
    char Unknown40[0x20];
    int Unknown60;
    char Unknown64[0x118];
    FVector Result[2];
    FVector Bounds[2];
};

// FUNCTION: 0x10943830 ?FUN_10943830@Class_10E4A668@@UAEXXZ
void Class_10E4A668::FUN_10943830()
{
    FVector A = Bounds[0];
    FVector B = Bounds[1];
    Result[0] = Origin;
    Result[1] = Origin;
    for (int i = 0; i < 3; i++)
    {
        float T7 = A.X * M[0][i];
        float T8 = B.X * M[0][i];
        if (T7 < T8)
        {
            (&Result[0].X)[i] += T7;
            (&Result[1].X)[i] += T8;
        }
        else
        {
            (&Result[0].X)[i] += T8;
            (&Result[1].X)[i] += T7;
        }
        float U7 = A.Y * M[1][i];
        float U8 = B.Y * M[1][i];
        if (U7 < U8)
        {
            (&Result[0].X)[i] += U7;
            (&Result[1].X)[i] += U8;
        }
        else
        {
            (&Result[0].X)[i] += U8;
            (&Result[1].X)[i] += U7;
        }
        float V7 = A.Z * M[2][i];
        float V8 = B.Z * M[2][i];
        if (V7 < V8)
        {
            (&Result[0].X)[i] += V7;
            (&Result[1].X)[i] += V8;
        }
        else
        {
            (&Result[0].X)[i] += V8;
            (&Result[1].X)[i] += V7;
        }
    }
    Unknown60 &= 0xfffffff7;
}
