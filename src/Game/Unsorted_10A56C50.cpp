// Game/Unsorted_10A56C50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A57980.h"
#include "Game/cIntArray.h"

extern void* DAT_10e68d80;

extern void* DAT_10e7edb8[];

class Class_10E69080
{
public:
    Class_10E69080();

    void** Unknown00;
    char Unknown04[0x114];
    void** Unknown118;
    char Unknown11C[0xB4];
};

class Class_10E68D80 : public Class_10E69080
{
public:
    Class_10E68D80();

    int m_PrevControl;
    int m_NextControl;
    int Unknown1D8;
    char Unknown1DC;
    int Unknown1E0;
    int Unknown1E4;
    int m_MinIndex;
    int m_MaxIndex;
    int m_Index;
    int m_NextIndex;
};

typedef float FLOAT;

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FVector operator+(const FVector& V) const { return FVector(X + V.X, Y + V.Y, Z + V.Z); }

    FLOAT X, Y, Z;
};

class Class_10E68B10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual FVector Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual FVector FUN_10a56c50();

    char Unknown04[0x30];
    FLOAT Unknown34;
    FLOAT Unknown38;
    char Unknown3C[0x100];
    FLOAT Unknown13C;
};

class Class_10E6AEA0
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
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void AddToArray(cIntArray* Array, int B);

    char Unknown04[0x114];
    int Unknown118;
};

// FUNCTION: 0x10A56C50 ?FUN_10a56c50@Class_10E68B10@@UAE?AVFVector@@XZ
FVector Class_10E68B10::FUN_10a56c50()
{
    FVector Ext(Unknown13C, Unknown13C, 0.0f);
    return Ext + Virtual6();
}

// FUNCTION: 0x10A572C0 ?AddToArray@Class_10E6AEA0@@UAEXPAVcIntArray@@H@Z
void Class_10E6AEA0::AddToArray(cIntArray* Array, int B)
{
    if (Array && Unknown118)
    {
        int Index = Array->Unknown00;
        Array->SetCount(Index + 1);
        Array->Unknown08[Index] = Unknown118;
    }
}

// FUNCTION: 0x10A57790 ??0Class_10E68D80@@QAE@XZ
Class_10E68D80::Class_10E68D80()
{
    m_PrevControl = 0;
    m_NextControl = 0;
    Unknown1D8 = 0;
    Unknown1DC = 0;
    Unknown1E0 = 0;
    Unknown1E4 = 0;
    m_MinIndex = 0;
    m_MaxIndex = 0;
    m_Index = 0;
    m_NextIndex = 0;
    Unknown00 = &DAT_10e68d80;
    Unknown118 = DAT_10e7edb8;
}

// FUNCTION: 0x10A577F0 ?FUN_10a577f0@Class_10A57980@@QAEXH@Z
void Class_10A57980::FUN_10a577f0(int A)
{
    FUN_10a589e0(A);
    Virtual121(Unknown1F0);
    Unknown1F4 = Unknown1F0;
}
