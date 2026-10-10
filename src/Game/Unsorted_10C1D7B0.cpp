// Game/Unsorted_10C1D7B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8D7C4.h"
#include "Game/Struct_Vec3.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int* Value);
    virtual void Virtual7(int* Value);
};

extern void* DAT_10e99178[];

extern void* DAT_10e8d7ac[];

class Class_10E8D7AC
{
public:
    Class_10E8D7AC()
    {
        Unknown00 = DAT_10e8d7ac;
        for (int i = 0; i < 5; i++)
            Unknown04[i] = 0;
        Unknown18 = 0;
        Unknown1C = 0;
        Unknown20 = 0;
    }

    void** Unknown00;
    int Unknown04[5];
    char Unknown18;
    int Unknown1C;
    int Unknown20;
};

class Class_10E99178
{
public:
    Class_10E99178(int A);

    void** Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    Class_10E8D7AC Unknown14;
    Class_10E8D7AC Unknown38;
    int Unknown5C;
    int Unknown60;
    int Unknown64;
    int Unknown68;
    int Unknown6C;
    int Unknown70;
    int Unknown74;
    int Unknown78;
    int Unknown7C;
    int Unknown80;
    int Unknown84;
    int Unknown88;
};

struct Struct_10C1DD00
{
    int Unknown00;
    Struct_Vec3 Unknown04;
    int Unknown10;
    int Unknown14;
    bool Unknown18;
    int Unknown1C;
    int Unknown20;
};

class Class_10C1DD00
{
public:
    int FUN_10c1dd00(Struct_10C1DD00& A, Struct_10C1DD00& B, bool bClear);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    Struct_Vec3 Unknown18;
    int Unknown24;
    int Unknown28;
    bool Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    Struct_Vec3 Unknown3C;
    int Unknown48;
    int Unknown4C;
    bool Unknown50;
    int Unknown54;
    int Unknown58;
};

// FUNCTION: 0x10C1DD00 ?FUN_10c1dd00@Class_10C1DD00@@QAEHAAUStruct_10C1DD00@@0_N@Z
int Class_10C1DD00::FUN_10c1dd00(Struct_10C1DD00& A, Struct_10C1DD00& B, bool bClear)
{
    A.Unknown04 = Unknown18;
    A.Unknown10 = Unknown24;
    A.Unknown14 = Unknown28;
    A.Unknown18 = Unknown2C;
    A.Unknown1C = Unknown30;
    A.Unknown20 = Unknown34;
    B.Unknown04 = Unknown3C;
    B.Unknown10 = Unknown48;
    B.Unknown14 = Unknown4C;
    B.Unknown18 = Unknown50;
    B.Unknown1C = Unknown54;
    B.Unknown20 = Unknown58;
    if (bClear)
    {
        Unknown04 = 0;
    }
    return Unknown08;
}

// FUNCTION: 0x10C1DD90 ??0Class_10E99178@@QAE@H@Z
Class_10E99178::Class_10E99178(int A)
    : Unknown00(DAT_10e99178), Unknown04(0), Unknown08(0), Unknown0C(0), Unknown10(0),
      Unknown5C(-1), Unknown60(-1), Unknown64(-1), Unknown6C(A), Unknown70(0), Unknown74(0),
      Unknown7C(0), Unknown80(0), Unknown84(0), Unknown88(0)
{
}

// FUNCTION: 0x10C1EF20 ?FUN_10c1ef20@Class_10E8D7C4@@UAEXAAVFArchive@@@Z
void Class_10E8D7C4::FUN_10c1ef20(FArchive& Ar)
{
    Ar.Virtual6(&Unknown04);
    Ar.Virtual7(&Unknown08);
    Ar.Serialize(&Unknown0C, 1);
}
