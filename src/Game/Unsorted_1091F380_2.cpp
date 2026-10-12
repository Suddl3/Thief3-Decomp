// Game/Unsorted_1091F380_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_1092F130.h"
#include "Game/Class_10924100_Unknown44.h"
#include "Game/Class_109480B0.h"

extern int DAT_10f31960;

extern int DAT_10f31958;

extern int DAT_10f3195c;

class Class_10A1E620_Inner;

class Class_10924100_Unknown38;

class Class_10924100_Unknown44;

class Class_10924100
{
public:
    ~Class_10924100();

    bool FUN_109228a0(int A, int B);
    void Reset();
    void FUN_10924100();
    void FUN_1091f6a0();
    bool Contains(Class_10924100_Unknown44* Item);
    void FUN_10920a30(Class_10A1E620_Inner* Inner);

    char Unknown00[0x4];
    int Unknown04;
    int Unknown08;
    Class_109480B0* Unknown0C;
    Class_1092F130* Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    char Pad20[0xC];
    int Unknown2C;
    int Unknown30;
    char Pad34[0x4];
    Class_10924100_Unknown38** Unknown38;
    int Unknown3C;
    char Unknown40[4];
    Class_10924100_Unknown44** Unknown44;
};

class Class_10924100_Unknown38
{
public:
    virtual void Virtual0(int Flag);

    char Pad04[0x58];
    int Unknown5C;
};

// FUNCTION: 0x1091F5B0 ?Reset@Class_10924100@@QAEXXZ
void Class_10924100::Reset()
{
    for (int I = 0; I < Unknown30; I++)
    {
        Unknown38[I]->Unknown5C |= 1;
        Unknown38[I]->Virtual0(0);
    }
    for (int I = 0; I < Unknown3C; I++)
    {
        Unknown44[I]->Unknown5C |= 1;
        Unknown44[I]->Virtual0(0);
    }
    if (Unknown0C)
    {
        Unknown0C->Free();
        ::operator delete(Unknown0C);
    }
    if (DAT_10f31960)
    {
        ::operator delete((void*)DAT_10f31960);
    }
    if (DAT_10f31958)
    {
        ::operator delete((void*)DAT_10f31958);
    }
    if (DAT_10f3195c)
    {
        ::operator delete((void*)DAT_10f3195c);
    }
    if (Unknown10)
    {
        Unknown10->FUN_1092f130();
    }
    DAT_10f31960 = 0;
    DAT_10f3195c = 0;
    DAT_10f31958 = 0;
    Unknown0C = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = -1;
}
