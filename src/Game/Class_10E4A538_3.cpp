// Game/Class_10E4A538_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

struct Struct_1093FFE0;

class Class_10E4A538
{
public:
    Class_10E4A538();
    virtual void FUN_109412f0();
    virtual void Virtual1();
    virtual void Virtual2();

    ~Class_10E4A538();

    char FUN_10940970();
    void FUN_10940c50();
    void FUN_1093ffe0(int Width, int Height, Struct_1093FFE0* Out);

    bool Unknown04;
    Class_109081E0 Unknown08[47];
    int UnknownC4[47];
    Class_109081E0 Unknown180[47];
    int Unknown23C[47];
    int Unknown2F8;
    int Unknown2FC;
    int Unknown300;
    int Unknown304;
    int Unknown308;
    int Unknown30C;
    char Unknown310[0x40];
    int Unknown350;
    int Unknown354;
    int Unknown358;
};

// FUNCTION: 0x10940B50 ??0Class_10E4A538@@QAE@XZ
Class_10E4A538::Class_10E4A538()
{
    for (int i = 0; i < 47; ++i)
    {
        UnknownC4[i] = 0;
        Unknown23C[i] = 0;
        Unknown08[i].FUN_1090a590(DAT_10e47660);
        Unknown180[i].FUN_1090a590(DAT_10e47660);
    }
    Unknown300 = 0;
    Unknown304 = 0;
    Unknown308 = 0;
    Unknown30C = 0;
    Unknown04 = false;
    Unknown2FC = 0;
    Unknown350 = 0;
    FUN_1093ffe0(0x100, 0x100, (Struct_1093FFE0*)Unknown310);
    Unknown354 = 0;
    Unknown358 = 0;
}
