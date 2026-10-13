// Game/Unsorted_10A357F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A35870.h"
#include "Game/Class_10A35890.h"
#include "Game/Class_10A35920.h"
#include "Game/Static_10A35EA0.h"

class Class_10A35EE0
{
public:
    void FUN_10a35ee0(int p1, int p2);
    void Reset();

    char Unknown00[0x80];
    int Unknown80;
};

class Class_10A357F0
{
public:
    int FUN_10a357f0(int A);

    char Unknown00[0xD];
    bool Unknown0D;
    char Unknown0E[0xE];
    int Unknown1C;
    char Unknown20[0x8];
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    char Unknown44[0x28];
    int Unknown6C;
    char Unknown70[0xC];
    int Unknown7C;
};

// FUNCTION: 0x10A357F0 ?FUN_10a357f0@Class_10A357F0@@QAEHH@Z
int Class_10A357F0::FUN_10a357f0(int A)
{
    for (; A > 0; A--)
    {
        if (Unknown0D)
            Unknown40 += Unknown3C;
        else
            Unknown30 += Unknown38;
    }
    if (!Unknown0D)
    {
        Unknown2C = Unknown1C;
        if (Unknown38 + Unknown30 > (Unknown7C - Unknown6C) + Unknown28)
            return 3;
    }
    else if (Unknown40 + Unknown38 > (Unknown7C - Unknown6C) + Unknown28)
        return 3;
    return 1;
}

// FUNCTION: 0x10A35870 ?FUN_10a35870@Class_10A35870@@QAEXPBH@Z
void Class_10A35870::FUN_10a35870(const int* p1)
{
    if (!Unknown0D)
        Unknown00 = *p1;
}

// FUNCTION: 0x10A35890 ?FUN_10a35890@Class_10A35890@@QAEXPBH@Z
void Class_10A35890::FUN_10a35890(const int* p1)
{
    if (!Unknown0D)
        Unknown04 = *p1;
}

// FUNCTION: 0x10A35920 ?FUN_10a35920@Class_10A35920@@QAEX_N@Z
void Class_10A35920::FUN_10a35920(bool Value)
{
    Unknown0E = Value;
    Unknown10 = Value ? 0 : 8;
}

// FUNCTION: 0x10A35EA0 ?FUN_10a35ea0@@YAPAUStatic_10A35EA0@@XZ
Static_10A35EA0* FUN_10a35ea0()
{
    static Static_10A35EA0 Instance;
    return &Instance;
}

// FUNCTION: 0x10A35EE0 ?FUN_10a35ee0@Class_10A35EE0@@QAEXHH@Z
void Class_10A35EE0::FUN_10a35ee0(int p1, int p2)
{
    Unknown80 = p1;
    Reset();
}
