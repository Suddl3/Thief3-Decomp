// Game/Unsorted_10917C90_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10924210.h"
#include "Game/Class_10924210.h"

typedef Struct_10924210 D3DVIEWPORT8;

class Class_109242E0 : public Class_10924210
{
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern Class_109242E0* DAT_10f319a0;

extern Struct_10924210 DAT_10f2c780;

// FUNCTION: 0x10917C90 ?SetViewport@@YAXHHHH@Z
void SetViewport(int A, int B, int C, int D)
{
    Struct_10924210 Viewport;
    Viewport.X = A;
    Viewport.Y = B;
    Viewport.Width = C;
    Viewport.Height = D;
    Viewport.MinZ = 0.0f;
    Viewport.MaxZ = 1.0f;
    GDirect3DDevice8->SetViewport(&Viewport);
    DAT_10f2c780 = Viewport;
    DAT_10f319a0->FUN_10924210(Viewport);
}
