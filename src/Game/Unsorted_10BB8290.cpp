// Game/Unsorted_10BB8290.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"
#include "Game/Class_10BB8330.h"
#include "Game/Class_10BB84F0.h"
#include "Game/Class_10BB8510.h"
#include "Game/Class_10BB8530.h"
#include "Game/Class_10BB8540.h"
#include "Game/Class_10BB8550.h"
#include "Game/Class_10C7D570.h"

cBoneAimController* GetBoneAimController();

// FUNCTION: 0x10BB8330 ?FUN_10bb8330@Class_10BB8330@@QAE_NXZ
bool Class_10BB8330::FUN_10bb8330()
{
    Class_10C7D570* Item = Unknown08;
    return GetBoneAimController()->FindEntry(Item->FUN_10c7d570(), &Unknown284) != 0;
}

// FUNCTION: 0x10BB84F0 ?FUN_10bb84f0@Class_10BB84F0@@QAEXHH@Z
void Class_10BB84F0::FUN_10bb84f0(int p1, int p2)
{
    Unknown2DC = p1;
    Unknown2E0 = p2;
}

// FUNCTION: 0x10BB8510 ?FUN_10bb8510@Class_10BB8510@@QAEHPAH@Z
int Class_10BB8510::FUN_10bb8510(int* Out)
{
    *Out = Unknown2E0;
    return Unknown2DC;
}

// FUNCTION: 0x10BB8530 ?FUN_10bb8530@Class_10BB8530@@QAEXM@Z
void Class_10BB8530::FUN_10bb8530(float p1)
{
    Unknown2e4 = p1;
}

// FUNCTION: 0x10BB8540 ?FUN_10bb8540@Class_10BB8540@@QAEMXZ
float Class_10BB8540::FUN_10bb8540()
{
    return Unknown2e4;
}

// FUNCTION: 0x10BB8550 ?FUN_10bb8550@Class_10BB8550@@QAEMXZ
float Class_10BB8550::FUN_10bb8550()
{
    return Unknown2e8;
}
