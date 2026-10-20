// Game/Class_10E4AB88_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109481D0.h"
#include "Game/Struct_1094E0F0.h"
#include "Game/Struct_1094E120.h"
#include "Game/Struct_1094E9D0.h"

class Class_1094E050;

class Class_10951730;

class cIntArray;

struct Struct_1094E820B;

class Class_10E4AB88
{
public:
    virtual void Virtual0();
    virtual void FUN_1094dff0(int A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int GetCount();
    virtual int GetItem(int Index);
    virtual void FUN_1094e050();
    virtual void Virtual9(int A, int B);
    virtual void FUN_1094e9d0(int p1, int p2);
    virtual void FUN_1094e9f0(int p1, int p2);
    virtual void FUN_1094eab0();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual bool IsReady();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void CollectValues(cIntArray* Out, int Param);
    virtual void FUN_1094eea0(int Param);

    Struct_1094E0F0 FUN_1094e0f0();
    Struct_1094E120 FUN_1094e120();
    float FUN_1094f9b0();
    void* FUN_10baa3a0();

    char Unknown04[4];
    char Pad08[0x4c];
    int Unknown54;
    char Unknown58[8];
    int Unknown60;
    char Unknown64[0x4C];
    Class_10951730* UnknownB0;
    char PadB4[0x34];
    Class_1094E050* Unknown0E8[1];
    char PadEC[0x8];
    union
    {
        int m_NumEntries;
        int UnknownF4;
    };
    union
    {
        int Unknown0F8;
        char UnknownF8[4];
    };
    union
    {
        int* UnknownFC;
        Struct_1094E9D0** Unknown0FC;
    };
    char Unknown100[8];
    Struct_1094E820B* Unknown108;
    int Unknown10C;
    int Unknown110;
    char Pad114[0x20];
    Struct_1094E0F0 Unknown134;
    Struct_1094E120 Unknown140;
    char Pad14C[0xc];
    float Field158;
    char Pad15C[0x4];
    void* Unknown160;
    int Unknown164;
};

class Class_1094E860_Unknown00
{
public:
    char Unknown00[0x4C];
    char Unknown4C;
    char Unknown4D[0x23F];
    char Unknown28C;
};

// FUNCTION: 0x1094E860 ?IsReady@Class_10E4AB88@@UAE_NXZ
bool Class_10E4AB88::IsReady()
{
    if (((Class_109481D0*)this)->HasFlags(0x400))
        return false;
    for (int i = 0; i < UnknownF4; i++)
    {
        Class_1094E860_Unknown00* Y = Unknown0FC[i]->Unknown00;
        if (Y == 0)
            return false;
        if (Y->Unknown4C && !Y->Unknown28C)
            return false;
    }
    return true;
}
