// Game/Unsorted_10D3A700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

extern const char DAT_10e50284[];

extern const char DAT_10e5027c[];

extern const char DAT_10e50274[];

extern const char DAT_10e50268[];

extern const char DAT_10e50260[];

extern const char DAT_10e50258[];

extern const char DAT_10e50250[];

extern const char DAT_10e5024c[];

extern const char DAT_10e4761c[];

extern const char DAT_10e50238[];

extern const char DAT_10e5022c[];

class Class_10A4DDA0
{
public:
    Class_10A4DDA0();
    ~Class_10A4DDA0();
    void FUN_10a4dda0();

    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10D3A700
{
public:
    Class_10D3A700();

    int Unknown00;
    Class_109081E0 Unknown04[12];
    Class_10A4DDA0 Unknown34[12];
};

// FUNCTION: 0x10D3A700 ??0Class_10D3A700@@QAE@XZ
Class_10D3A700::Class_10D3A700()
{
    Unknown04[0].FUN_1090a590(DAT_10e50284);
    Unknown04[1].FUN_1090a590(DAT_10e5027c);
    Unknown04[2].FUN_1090a590(DAT_10e50274);
    Unknown04[3].FUN_1090a590(DAT_10e50268);
    Unknown04[4].FUN_1090a590(DAT_10e50260);
    Unknown04[5].FUN_1090a590(DAT_10e50258);
    Unknown04[6].FUN_1090a590(DAT_10e50250);
    Unknown04[7].FUN_1090a590(DAT_10e5024c);
    Unknown04[8].FUN_1090a590("Cadence");
    Unknown04[9].FUN_1090a590(DAT_10e4761c);
    Unknown04[10].FUN_1090a590(DAT_10e50238);
    Unknown04[11].FUN_1090a590(DAT_10e5022c);
}
