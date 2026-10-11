// Game/Unsorted_10924C60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BCE8F0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_1094D980.h"
#include "Game/Class_10924BE0.h"

class Class_10924AE0
{
public:
    bool FUN_10924ae0();
    bool FUN_10924490(int A, int B, int C, int D, Struct_1094D980* E);
    bool FUN_10924be0(Class_10924BE0* A);
    void FUN_10924c60();

    bool Unknown00;
    char Pad01[0x3];
    Class_10924BE0* Unknown04;
    int Unknown08;
    int Unknown0C;
    char Unknown10[0x8];
    int Unknown18;
    char Unknown1C[0x14];
    Class_10BCE8F0 Unknown30;
    char Pad31[0x17];
    Struct_1094D980 Unknown48;
    char Pad5C[0x4c];
    int UnknownA8;
    char PadAC[0x14];
};

Class_10905A90_Member* FUN_10905aa0();

// FUNCTION: 0x10924C60 ?FUN_10924c60@Class_10924AE0@@QAEXXZ
void Class_10924AE0::FUN_10924c60()
{
    Unknown04->Virtual41(&Unknown18);
    Unknown04->Virtual32(&Unknown08);
    Unknown04->Virtual33(&Unknown0C);
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown48.SetValues(1, 0, 0xff000000);
    FUN_10924490(1, 0, 0, 0, &Unknown48);
    FUN_10905aa0()->Virtual9();
}
