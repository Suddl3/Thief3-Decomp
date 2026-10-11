// Game/Unsorted_10BE8F90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BBDB40.h"

extern void* DAT_10e96d98[];

class Class_10DBD510;

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;

    void FUN_10bb80c0(int C);
};

class Class_10BE8F90_Unknown04
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10E90D70
{
public:
    virtual void Virtual0();

    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    Class_10BE8F90_Unknown04* Unknown04[15];
};

class Class_10E95288 : public Class_10E90D70
{
public:
    Class_10E95288(Struct_10B98E00* A, Class_10E4CCD0* B, int C);

    int Unknown40;
    int Unknown44;
    float Unknown48;
    float Unknown4C;
    float Unknown50;
};

// FUNCTION: 0x10BE8F90 ??0Class_10E95288@@QAE@PAUStruct_10B98E00@@PAVClass_10E4CCD0@@H@Z
Class_10E95288::Class_10E95288(Struct_10B98E00* A, Class_10E4CCD0* B, int C)
    : Class_10E90D70((int)A, (int)B)
{
    *(void**)this = DAT_10e96d98;
    Unknown40 = C;
    Unknown44 = 0;
    Unknown48 = Unknown04[0]->Unknown08->FUN_10dbd510(0x100698)->FUN_10bbdb40() * 16.0f;
    Unknown4C = Unknown04[0]->Unknown08->FUN_10dbd510(0x100699)->FUN_10bbdb40() * 16.0f;
    Unknown50 = Unknown04[0]->Unknown08->FUN_10dbd510(0x10069a)->FUN_10bbdb40() * 16.0f;
    A->FUN_10bb80c0(C);
}
