// Game/Unsorted_10B47720_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10EC0E20.h"
#include "Game/Class_10B473D0.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/cIntArray.h"

class Class_10B3A460
{
public:
    Class_10B3A460* GetEntry(int A);

    char Unknown00;
    char Unknown01;
    char Pad02[0x2];
    float Unknown04;
    char Pad08[0x4];
    char Unknown0C[0x10];
    int m_Index;
    char Unknown20[0xC];
};

Class_10B3A460* GetEntries();

class Class_10B47660_Member;

class Class_10B47AB0
{
public:
    void FUN_10b47ab0(int A);
    void FUN_10b47850(int A, int B, float C, int D, int E, int F);

    char Unknown00[8];
    Class_10EC0E20* Unknown08;
    Class_10EC0E20* Unknown0C;
    Class_10B47660_Member* Unknown10;
    char Unknown14[0x1C];
    bool Unknown30;
    char Unknown31[0x1B];
    cIntArray Unknown4C;
};

// FUNCTION: 0x10B47850 ?FUN_10b47850@Class_10B47AB0@@QAEXHHMHHH@Z
void Class_10B47AB0::FUN_10b47850(int A, int B, float C, int D, int E, int F)
{
    Unknown08->FUN_10b7ac80(0);
    Unknown08->Reset();
    Unknown08->FUN_10b7ab80(A, C);
    Unknown08->FUN_10b7abb0(0x3f800000);
    Unknown08->FUN_10b7b460(D, E, 0, F);
    Unknown08->FUN_10b7b610(B, F);
    if (GetEntries()->GetEntry(((Class_10AAB5C0*)Unknown08)->GetUnknown08())->Unknown01)
    {
        ((Class_10B473D0*)this)->FUN_10b473d0();
    }
}
