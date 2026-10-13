// Game/Unsorted_10B4C190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

extern float DAT_10e49c68;

extern float DAT_10eafbdc;

class Class_10B4C190_Arg
{
public:
    char Unknown00[0x2C];
    float Unknown2C;
    float Unknown30;
    float Unknown34;
    char Unknown38[0x4];
    int Unknown3C;
    char Unknown40[0x308];
    int Unknown348;
    int Unknown34C;
    float Unknown350;
    float Unknown354;
    float Unknown358;
    int Unknown35C;
    char Unknown360[0xF4];
    float Unknown454;
};

class Class_10E7E808
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10b4c190(Class_10B4C190_Arg* P);

    char Unknown04[0xC];
    float Unknown10;
};

// FUNCTION: 0x10B4C190 ?FUN_10b4c190@Class_10E7E808@@UAEHPAVClass_10B4C190_Arg@@@Z
int Class_10E7E808::FUN_10b4c190(Class_10B4C190_Arg* P)
{
    float X = P->Unknown350 - P->Unknown2C;
    float Y = P->Unknown354 - P->Unknown30;
    float Z = P->Unknown358 - P->Unknown34;
    float Dist = sqrtf(Z * Z + Y * Y + X * X);
    if (Dist < DAT_10e49c68 && P->Unknown35C == P->Unknown3C)
    {
        int Old = P->Unknown348;
        if (Old == 0xe)
            P->Unknown348 = P->Unknown34C;
        return Old;
    }
    Unknown10 -= P->Unknown454;
    if (Unknown10 <= DAT_10eafbdc)
        return 0;
    return Virtual4();
}
