// Game/Class_10953B60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10953730.h"
#include "Game/Class_10953AC0.h"
#include "Game/Class_10953C20.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10953B60.h"

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10953B60;

class Class_1091E400
{
public:
    char Unknown00[4];
    Class_10953730 Unknown04;
};

extern Class_1091E400* DAT_10f2c8c0;

extern D3DXMATRIX DAT_10f341b0;

extern unsigned int DAT_10f341f0;

// FUNCTION: 0x10953B60 ?ApplyWorldMatrix@Class_10953B60@@QAEXXZ
void Class_10953B60::ApplyWorldMatrix()
{
    if (Unknown5C)
    {
        if (Unknown61)
        {
            if (!(DAT_10f341f0 & 1))
                DAT_10f341f0 |= 1;
            D3DXMATRIX Matrix;
            D3DXMATRIX* Src = DAT_10f2c8c0->Unknown04.GetWorldMatrix(&Matrix, this);
            DAT_10f341b0 = *Src;
            GDirect3DDevice8->SetTransform(0x100, &DAT_10f341b0);
        }
        FUN_109538b0();
    }
}
