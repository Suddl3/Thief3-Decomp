// Game/Unsorted_1091F360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109241E0.h"
#include "Game/Class_1094D740.h"
#include "Game/Class_10E49A0C.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10924210.h"
#include "Game/Class_10924210.h"
#include "Game/Class_109243D0.h"

class IDirect3DBaseTexture8;

extern IDirect3DDevice8* GDirect3DDevice8;

class cD3DStateCache
{
public:
    char Unknown00[0x7FC];
    Struct_10924210 Unknown7FC;
};

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x109241E0 ?SetTexture@Class_109241E0@@QAEXKPAVIDirect3DBaseTexture8@@@Z
void Class_109241E0::SetTexture(unsigned long Stage, IDirect3DBaseTexture8* Texture)
{
    if (m_Textures[Stage] != Texture)
    {
        GDirect3DDevice8->SetTexture(Stage, Texture);
        m_Textures[Stage] = Texture;
    }
}

// FUNCTION: 0x10924210 ?FUN_10924210@Class_10924210@@QAEXABUStruct_10924210@@@Z
void Class_10924210::FUN_10924210(const Struct_10924210& Value)
{
    Unknown18 = Value;
    DAT_10f31be0->Unknown7FC = Value;
}

// FUNCTION: 0x109243D0 ?FUN_109243d0@Class_109243D0@@QAEXH@Z
void Class_109243D0::FUN_109243d0(int p1)
{
    Unknown30.FUN_1094d740(Unknown14, p1, 0);
}
