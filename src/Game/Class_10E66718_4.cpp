// Game/Class_10E66718_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10936A40.h"
#include "Game/Class_10E66718.h"
#include "Game/Info_10952690.h"
#include "Game/Struct_10924210.h"
#include "Game/cD3DStateCache.h"

extern IDirect3DDevice8* GDirect3DDevice8;

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x10A3A050 ?FUN_10a3a050@Class_10E66718@@UAEXMMMH_N@Z
void Class_10E66718::FUN_10a3a050(float A, float B, float C, int D, bool Flag)
{
    DAT_10f31be0->FUN_10938000();
    DAT_10f31be0->FUN_10938150(A, B, C, 1.0f);
    if (Flag)
        GDirect3DDevice8->SetRenderState(8, 2);
    FUN_10a3a030();
    for (int i = 0; i < Virtual6(); i++)
        Virtual9(0, i);
    GDirect3DDevice8->SetRenderState(8, 3);
}
