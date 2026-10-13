// Game/Class_10B47C50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B47AB0.h"
#include "Game/Class_10B48300.h"
#include "Game/Class_10C3E140.h"
#include "Game/Class_10EC0E20.h"
#include "Game/TimeManager.h"
#include "Game/Class_10B47C50.h"
#include "Game/Class_10B395B0.h"
#include "Game/Class_10B39700.h"

extern float DAT_10e49684;

extern float DAT_10eafbdc;

Class_10B3A460* GetEntries();

class Class_10B47660_Member;

class Class_10B47660
{
public:
    void FUN_10b47660(int A, int B);
    void FUN_10b47350(int A, float B, float C, int D, int E, float F);

    int Unknown00;
    int Unknown04;
    Class_10EC0E20* Unknown08;
    Class_10EC0E20* Unknown0C;
    Class_10B47660_Member* Unknown10;
    int Unknown14;
    int Unknown18;
    bool Unknown1C;
    bool Unknown1D;
    char Unknown1E[0x2E];
    cIntArray Unknown4C;
    char Pad4D[0x3];
};

// FUNCTION: 0x10B47B20 ?FUN_10b47b20@Class_10B47C50@@QAEXHMMHH_N0M@Z
void Class_10B47C50::FUN_10b47b20(int A, float B, float C, int D, int E, bool F, bool G, float H)
{
    if (((TimeManager*)Unknown0C)->GetDeltaTime() == DAT_10e49684)
        ((Class_10B48300*)this)->FUN_10b478e0();
    Class_10B3A460* Entry = GetEntries()->GetEntry(A);
    if ((!G && ((Class_10C3E140*)Unknown08)->IsActive() && Entry->Pad01[0] == 0) || F)
    {
        if (((Class_10C3E140*)Unknown0C)->IsActive() && ((TimeManager*)Unknown0C)->GetDeltaTime() != DAT_10eafbdc)
        {
            Unknown18 = B;
            Unknown38 = D;
            Unknown14 = A;
            Unknown3C = E;
            Unknown44 = C;
            Unknown40 = H;
            return;
        }
        ((Class_10B47660*)this)->FUN_10b47350(A, B, C, D, E, H);
        Unknown0C->FUN_10b7ac80(F);
        return;
    }
    if (!G)
        Unknown0C->FUN_10b7b8a0();
    ((Class_10B47AB0*)this)->FUN_10b47850(A, B, C, D, E, H);
    Unknown08->FUN_10b7ac80(0);
}

// FUNCTION: 0x10B47C50 ?PlayLastQueued@Class_10B47C50@@QAEXXZ
void Class_10B47C50::PlayLastQueued()
{
    int Count = Unknown4C.Unknown00;
    if (Count > 0)
    {
        FUN_10b47b20(Unknown4C.Unknown08[Count - 1], -1.0f, 1.0f, 0x101, 0, true, false, -1.0f);
        Unknown4C.RemoveAt(Count - 1);
    }
}
