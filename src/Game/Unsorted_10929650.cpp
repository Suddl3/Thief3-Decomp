// Game/Unsorted_10929650.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10929600.h"

extern IDirect3DDevice8* GDirect3DDevice8;

extern int DAT_10f31ad4;

extern Struct_10929600** DAT_10f31adc;

// FUNCTION: 0x10929650 ?CreateTextures@@YAXXZ
void CreateTextures()
{
    for (int i = 0; i < DAT_10f31ad4; i++)
    {
        Struct_10929600* Item = DAT_10f31adc[i];
        GDirect3DDevice8->CreateTexture(Item->Width, Item->Height, 1, 1, 0x15, 0, &Item->Unknown30);
    }
}
