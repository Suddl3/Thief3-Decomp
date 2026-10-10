// Game/Unsorted_109182E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109242E0.h"
#include "Game/Class_1092D990.h"
#include "Game/Class_10B59770.h"
#include "Game/Class_10F2C744.h"
#include "Game/Struct_10918E10.h"

class Class_10924E80
{
public:
    void FUN_10925db0(int Item);

    char Unknown00[0xD8];
    Class_1092D990* Unknown0D8;
};

extern Class_10924E80* DAT_10f2c734;

extern Class_109242E0* DAT_10f319a0;

extern Class_10F2C744* DAT_10f2c744;

void FUN_10929650();

class Class_1092D420
{
public:
    void FUN_1092d440();
};

extern Class_1092D420* DAT_10f31b88;

extern Class_10B59770 DAT_10f2c768;

class Class_10918E10_Element
{
public:
    virtual void Virtual0(int A, int B, int C);
};

extern Struct_10918E10* DAT_10f2c770;

// FUNCTION: 0x10918380 ?FUN_10918380@@YAXXZ
void FUN_10918380()
{
    Class_1092D990* Member = DAT_10f2c734->Unknown0D8;
    if (Member)
        Member->FUN_1092d990();
    DAT_10f319a0->FUN_10924c60();
    if (DAT_10f2c744)
        DAT_10f2c744->Virtual11();
    FUN_10929650();
    DAT_10f31b88->FUN_1092d440();
    for (int i = 0; i < DAT_10f2c768.Unknown00; i++)
        DAT_10f2c770[i].Unknown00->Virtual0(1, 0, DAT_10f2c770[i].Unknown04);
}
