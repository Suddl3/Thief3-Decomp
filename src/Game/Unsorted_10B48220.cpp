// Game/Unsorted_10B48220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10EC0E20.h"
#include "Game/Class_10AA82E0.h"
#include "Game/Class_10AC3BF0.h"
#include "Game/Class_10B7AC50.h"
#include "Game/Class_10B47C50.h"
#include "Game/TimeManager.h"

extern float DAT_10e49684;

class Class_10B48300
{
public:
    virtual ~Class_10B48300();

    void FUN_10b48300(int A);
    void FUN_10b478e0();

    char Unknown04[0x4];
    Class_10EC0E20* Unknown08[2];
};

// FUNCTION: 0x10B48300 ?FUN_10b48300@Class_10B48300@@QAEXH@Z
void Class_10B48300::FUN_10b48300(int A)
{
    bool Hit0 = Unknown08[0]->FUN_10b7b8d0(A);
    bool Hit1 = Unknown08[1]->FUN_10b7b8d0(A);
    if (A != ((Class_10AA82E0*)Unknown08[0])->FUN_10aa82e0() && A != ((Class_10AA82E0*)Unknown08[1])->FUN_10aa82e0())
        return;
    int Index = 0;
    if (Hit0)
    {
        if (!Hit1 && Unknown08[1]->FUN_10c3e140() && ((TimeManager*)Unknown08[1])->GetDeltaTime() == DAT_10e49684)
            FUN_10b478e0();
        ((Class_10B7AC50*)Unknown08[0])->FUN_10b7ac50();
    }
    else if (Hit1)
    {
        Index = 1;
        FUN_10b478e0();
        Unknown08[0]->FUN_10b7b8a0();
        ((Class_10B7AC50*)Unknown08[0])->FUN_10b7ac50();
    }
    if (((Class_10AC3BF0*)Unknown08[Index])->FUN_10ac3bf0())
    {
        ((Class_10B47C50*)this)->FUN_10b47c50();
        Unknown08[Index]->FUN_10b7ac80(0);
    }
}
