// Game/Unsorted_109180F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1092D950.h"
#include "Game/Class_10924B30.h"
#include "Game/cIntArray.h"

class Class_10924B70 : public Class_10924B30
{
public:
    void FUN_109243f0();
};

class Class_10924E80
{
public:
    void FUN_10925db0(int Item);
    void FUN_10924e80(int A);
    void FUN_10925060();
    void FUN_10925230();
    void FUN_10926f20(int A, int B);
    void FUN_10925290(int A, int B);
    void FUN_10925cf0(void* Item);
    void FUN_10925c60(void* A, int B);

    char Unknown00[0xD8];
    Class_1092D950* Unknown0D8;
};

void FUN_10917c90(int A, int B, int C, int D);

extern float DAT_10e49684;

extern float DAT_10efef60;

extern Class_10924E80* DAT_10f2c734;

extern Class_10924B70* DAT_10f319a0;

extern char DAT_10f2c75a;

extern char DAT_10f2c75b;

extern int DAT_10f2c710;

extern int DAT_10f2c714;

extern int DAT_10f2c6f0;

extern int DAT_10f2c6f4;

extern int DAT_10f2c6f8;

extern int DAT_10f2c6fc;

// FUNCTION: 0x109180F0 ?FUN_109180f0@@YAXXZ
void FUN_109180f0()
{
    if (DAT_10efef60 == DAT_10e49684 && !DAT_10f2c734->Unknown0D8->FUN_1092d950())
    {
        DAT_10f319a0->FUN_109243f0();
        DAT_10f2c75a = 0;
        DAT_10f2c75b = 0;
        return;
    }
    DAT_10f2c75a = 1;
    DAT_10f2c75b = 1;
    DAT_10f2c6f0 = 0;
    DAT_10f2c6f4 = 0;
    unsigned int Limit = (unsigned int)DAT_10f2c710;
    unsigned int Scaled = (unsigned int)((float)Limit * DAT_10efef60);
    DAT_10f2c6f8 = Scaled;
    unsigned int Limit2 = (unsigned int)DAT_10f2c714;
    unsigned int Scaled2 = (unsigned int)((float)Limit2 * DAT_10efef60);
    DAT_10f2c6fc = Scaled2;
    if (Scaled < Limit)
        DAT_10f2c6f8 = Scaled + 1;
    if (Scaled2 < Limit2)
        DAT_10f2c6fc = Scaled2 + 1;
    DAT_10f319a0->FUN_10924b30(0, 0);
    FUN_10917c90(DAT_10f2c6f0, DAT_10f2c6f4, DAT_10f2c6f8, DAT_10f2c6fc);
}
