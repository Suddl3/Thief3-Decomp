// Game/Class_10B48300.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B47660.h"
#include "Game/Class_10B7AC30.h"
#include "Game/Class_10B7AD00.h"
#include "Game/Class_10B7AD20.h"
#include "Game/Class_10B7AD50.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10AC3BF0.h"
#include "Game/Class_10C7D570.h"
#include "Game/TimeManager.h"
#include "Game/Class_10B48300.h"
#include "Game/Class_10EC0E20.h"
#include "Game/Class_10AA82E0.h"
#include "Game/Class_10B7AC50.h"
#include "Game/Class_10B47C50.h"

// Minimal declarations of the two classes whose callees take floats where their headers say int.
class Class_10B47AB0
{
public:
    void FUN_10b47850(int A, float B, float C, int D, float E, float F);
};

extern float DAT_10e49684;

// FUNCTION: 0x10B478E0 ?FUN_10b478e0@Class_10B48300@@QAEXXZ
void Class_10B48300::FUN_10b478e0()
{
    ((Class_10B47AB0*)this)->FUN_10b47850(
        ((Class_10AAB5C0*)Unknown08[1])->GetUnknown08(),
        ((Class_10B7AC30*)Unknown08[1])->FUN_10b7ac30(),
        1.0f,
        ((Class_10B7AD00*)Unknown08[1])->GetValue(0),
        ((Class_10B7AD50*)Unknown08[1])->GetOrDefault(0),
        -1.0f);
    int i = 1;
    if ((int)((Class_10C7D570*)Unknown08[1])->FUN_10c7d570() > i)
    {
        do
        {
            ((Class_10EC0E20*)Unknown08[0])->FUN_10b7b460(
                ((Class_10B7AD00*)Unknown08[1])->GetValue(i),
                ((Class_10B7AD50*)Unknown08[1])->GetOrDefault(i),
                i,
                ((Class_10B7AD20*)Unknown08[1])->GetValue(i));
            i++;
        } while (i < (int)((Class_10C7D570*)Unknown08[1])->FUN_10c7d570());
    }
    Unknown08[0]->FUN_10b7abb0(((TimeManager*)Unknown08[1])->GetDeltaTime());
    Unknown08[0]->FUN_10b7ac80(((Class_10AC3BF0*)Unknown08[1])->FUN_10ac3bf0());
    Unknown08[1]->Reset();
    if (Unknown14 != 0x101)
    {
        ((Class_10B47660*)this)->FUN_10b47350(Unknown14, Unknown18, Unknown44, Unknown38, Unknown3C, 0xbf800000);
        Unknown14 = 0x101;
        Unknown38 = 0x101;
        Unknown18 = 0xbf800000;
        return;
    }
    Unknown08[1]->FUN_10b7b8a0();
}

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
        if (!Hit1 && Unknown08[1]->IsActive() && ((TimeManager*)Unknown08[1])->GetDeltaTime() == DAT_10e49684)
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
        ((Class_10B47C50*)this)->PlayLastQueued();
        Unknown08[Index]->FUN_10b7ac80(0);
    }
}
