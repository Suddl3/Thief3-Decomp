// Game/Unsorted_109243F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10936A40.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10936AC0.h"

class IDirect3DSurface8;

extern Class_10936AC0* DAT_10f31be0;

class Class_10924B70
{
public:
    void FUN_109243f0();

    char Unknown00[4];
    IDirect3DDevice8* Unknown04;
    IDirect3DSurface8* Unknown08;
    IDirect3DSurface8* Unknown0C;
    char Unknown10[0x98];
    int UnknownA8;
};

// FUNCTION: 0x109243F0 ?FUN_109243f0@Class_10924B70@@QAEXXZ
void Class_10924B70::FUN_109243f0()
{
    if (Unknown04)
    {
        if (Unknown08 && Unknown0C && UnknownA8 != -1)
            Unknown04->SetRenderTarget(Unknown08, Unknown0C);
        Unknown04->SetRenderState(0xa1, 1);
        if (UnknownA8 != -1)
            DAT_10f31be0->FUN_10936a40();
        UnknownA8 = -1;
    }
}
