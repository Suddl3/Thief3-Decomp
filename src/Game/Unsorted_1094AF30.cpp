// Game/Unsorted_1094AF30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094B570.h"

class Class_109200A0_Unknown00;

struct Struct_1094B570
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

extern bool DAT_10f2c8d8;

float FUN_10919120();

bool FUN_10917ff0(Struct_1094B570* A, Struct_1094B570* B);

void FUN_10954000(Struct_1094B570* A, Struct_1094B570* B, int C, int D, int E);

// FUNCTION: 0x1094B570 ?FUN_1094b570@Class_1094B570@@QAE_NPAVClass_109200A0_Unknown00@@@Z
bool Class_1094B570::FUN_1094b570(Class_109200A0_Unknown00* A)
{
    float X = FUN_1094af30(A);
    if (FUN_10919120() > X)
        return false;
    Struct_1094B570 First;
    Struct_1094B570 Second;
    FUN_10949150(A, &First, &Second);
    if (!FUN_10917ff0(&First, &Second))
        return false;
    if (DAT_10f2c8d8)
        FUN_10954000(&First, &Second, 0xff, 0xff, 0xff);
    return true;
}
