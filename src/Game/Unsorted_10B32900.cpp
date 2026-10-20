// Game/Unsorted_10B32900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A18E80.h"
#include "Game/Class_10A18FA0.h"
#include "Game/Class_10B21350.h"

class Object_10A18FC0;

extern float DAT_10eafbdc;

Object_10A18FC0* FUN_10a18fc0();

// Class_1098E330 stands for the actor: the field this function reads is the
// base's, at an absolute offset.
class Class_1098E330 : public Class_10B21350
{
};

class Class_10B32750
{
public:
    virtual void Virtual0();

    void FUN_10b32750(Class_1098E330* A);
    void PlayBowToArrowAttach(Class_10B21350* A);
    void FUN_10b329f0(Class_1098E330* A);

    char Unknown04[0x18];
    float Unknown1C;
    char Unknown20[0x10];
    bool Unknown30;
    bool Unknown31;
    char Unknown32;
    char Unknown33[0x5];
    float Unknown38;
    bool Unknown3C;
};

// FUNCTION: 0x10B329F0 ?FUN_10b329f0@Class_10B32750@@QAEXPAVClass_1098E330@@@Z
void Class_10B32750::FUN_10b329f0(Class_1098E330* A)
{
    float Y = ((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(6);
    if (Unknown38 < Y)
        Unknown3C = true;
    if (Y == DAT_10eafbdc && Unknown32)
        FUN_10b32750(A);
    if (Unknown3C && !Unknown30 && Y < 0.15f && Unknown1C - Y > A->Unknown454 * 0.01f)
        PlayBowToArrowAttach(A);
    if (((Class_10A18FA0*)FUN_10a18fc0())->FUN_10a18fa0(12))
    {
        PlayBowToArrowAttach(A);
        Unknown1C = Y;
        return;
    }
    Unknown1C = Y;
}
