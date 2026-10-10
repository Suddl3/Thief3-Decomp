// Game/Unsorted_10929650.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"

class IDirect3DTexture8;

extern IDirect3DDevice8* GDirect3DDevice8;

struct Struct_10929600
{
    char Unknown00[0x18];
    unsigned int Width;
    unsigned int Height;
    char Unknown20[0x10];
    IDirect3DTexture8* Unknown30;
};

extern int DAT_10f31ad4;

extern Struct_10929600** DAT_10f31adc;

// FUNCTION: 0x10929650 ?FUN_10929650@@YAXXZ
void FUN_10929650()
{
    for (int i = 0; i < DAT_10f31ad4; i++)
    {
        Struct_10929600* Item = DAT_10f31adc[i];
        GDirect3DDevice8->CreateTexture(Item->Width, Item->Height, 1, 1, 0x15, 0, &Item->Unknown30);
    }
}
