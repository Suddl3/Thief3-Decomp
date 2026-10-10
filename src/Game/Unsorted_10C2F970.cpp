// Game/Unsorted_10C2F970.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10C32C70
{
public:
    void FUN_10c325e0(int A);
    void FUN_10c32c70();

    int Unknown00;
    int Unknown04;
    char Unknown08[4];
    int Unknown0C;
    char Unknown10[4];
    void* Unknown14;
};

class Class_10C30700_Unknown140
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B);
};

class Class_10C30700
{
public:
    void FUN_10c30700();
    void FUN_10c30750(int A, int B);

    char Unknown00[0x99];
    bool Unknown99;
    char Unknown9A[0x9E];
    int Unknown138;
    char Unknown13C[4];
    Class_10C30700_Unknown140** Unknown140;
};

class ULodMesh;

class USkeletalMesh
{
    DECLARE_CLASS(USkeletalMesh, ULodMesh, 0x40, Engine)
};

class Class_10c7d570
{
public:
    void* FUN_10c7d570();
};

class Class_10C66590
{
public:
    int FUN_10c66590();
};

class Class_10c2f970
{
public:
    USkeletalMesh* FUN_10c2f970();

    char Unknown00[8];
    Class_10c7d570* Unknown08;
    char Unknown0C[0x150];
    USkeletalMesh* Unknown15C;
};

struct Struct_10C30640;

class Class_10C7D570_Member
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
    virtual Struct_10C30640* Virtual8();
};

struct Struct_10C30640
{
    char Unknown00[4];
    int Unknown04;
    char Unknown08[0xC];
    FVector Unknown14;
};

struct Struct_10C7D570_Result
{
    char Unknown00[0xB0];
    Class_10C7D570_Member* Unknown0B0;
};

class Class_10C30640
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
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual Class_10c7d570* Virtual34();

    void FUN_10c30640();

    char Unknown04[0xD5];
    bool UnknownD9;
};

extern float DAT_10eafbdc;

class Class_10E9AC80
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
    virtual bool FUN_10c32a70(void* A);

    void FUN_10c32970(void* A, int B);
    void FUN_10c306b0();

    char Pad04[0x48];
    float Unknown4C;
    float Unknown50;
    char Unknown54[0x44];
    bool Unknown98;
    char Pad99[0x3];
};

// FUNCTION: 0x10C2F970 ?FUN_10c2f970@Class_10c2f970@@QAEPAVUSkeletalMesh@@XZ
USkeletalMesh* Class_10c2f970::FUN_10c2f970()
{
    if (!Unknown15C)
        Unknown15C = Cast<USkeletalMesh>((UObject*)((Class_10C66590*)Unknown08->FUN_10c7d570())->FUN_10c66590());
    return Unknown15C;
}

// FUNCTION: 0x10C30350 ?FUN_10c30350@@YGHHHHHHH@Z
int __stdcall FUN_10c30350(int A, int B, int C, int D, int E, int F)
{
    int X = (B % 0xffff + 0xffff) % 0xffff;
    int Y = (E % 0xffff + 0xffff) % 0xffff;
    int Diff = X - Y;
    if (Diff < 0)
        Diff = -Diff;
    if (Diff > 0x7fff)
    {
        if (X > 0x7fff)
            X -= 0xffff;
        if (Y > 0x7fff)
            Y -= 0xffff;
    }
    return X - Y;
}

// FUNCTION: 0x10C30640 ?FUN_10c30640@Class_10C30640@@QAEXXZ
void Class_10C30640::FUN_10c30640()
{
    UnknownD9 = true;
    Virtual22();
    Class_10c7d570* Owner = Virtual34();
    Struct_10C7D570_Result* Result = (Struct_10C7D570_Result*)Owner->FUN_10c7d570();
    Class_10C7D570_Member* Member = Result->Unknown0B0;
    Struct_10C30640* Found = Member->Virtual8();
    if (Found && Found->Unknown04 == 2)
        Found->Unknown14 = FVector(0.0f, 0.0f, 0.0f);
}

// FUNCTION: 0x10C306B0 ?FUN_10c306b0@Class_10E9AC80@@QAEXXZ
void Class_10E9AC80::FUN_10c306b0()
{
    float Abs = Unknown4C;
    if (!(Abs >= DAT_10eafbdc))
        Abs = -Abs;
    if (Abs >= 1e-5)
        Unknown4C = 0.0f;
    Abs = Unknown50;
    if (!(Abs >= DAT_10eafbdc))
        Abs = -Abs;
    Unknown98 = false;
    if (Abs >= 1e-5)
        Unknown50 = 0.0f;
}

// FUNCTION: 0x10C30700 ?FUN_10c30700@Class_10C30700@@QAEXXZ
void Class_10C30700::FUN_10c30700()
{
    Unknown99 = true;
    for (int i = 0; i < Unknown138; i++)
        Unknown140[i]->Virtual0();
    Unknown99 = false;
}

// FUNCTION: 0x10C30750 ?FUN_10c30750@Class_10C30700@@QAEXHH@Z
void Class_10C30700::FUN_10c30750(int A, int B)
{
    Unknown99 = true;
    for (int i = 0; i < Unknown138; i++)
        Unknown140[i]->Virtual1(A, B);
    Unknown99 = false;
}

// FUNCTION: 0x10C32A70 ?FUN_10c32a70@Class_10E9AC80@@UAE_NPAX@Z
bool Class_10E9AC80::FUN_10c32a70(void* A)
{
    if (!A)
        return false;
    FUN_10c32970(A, 0);
    return true;
}

// FUNCTION: 0x10C32C70 ?FUN_10c32c70@Class_10C32C70@@QAEXXZ
void Class_10C32C70::FUN_10c32c70()
{
    FUN_10c325e0(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
