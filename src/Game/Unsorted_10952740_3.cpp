// Game/Unsorted_10952740_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"
#include "Game/IDirect3DTexture8.h"

class IDirect3DTexture8;

struct Struct_10952740
{
    int Unknown00;
    int* Bits;
};

struct Struct_10952740_Desc
{
    char Unknown00[0x18];
    int Width;
    int Height;
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern int DAT_10efefbc;

extern IDirect3DTexture8* DAT_10f3419c[];

// FUNCTION: 0x10952740 ?FUN_10952740@@YA_NXZ
bool FUN_10952740()
{
    if (GDirect3DDevice8->CreateTexture(8, 8, 0, 0, 0x15, DAT_10efefbc, &DAT_10f3419c[0]) < 0)
        return false;
    if (GDirect3DDevice8->CreateTexture(8, 8, 0, 0, 0x15, DAT_10efefbc, &DAT_10f3419c[1]) < 0)
        return false;
    unsigned long Colors[2] = { 0xff00ffff, 0xffff0000 };
    for (int i = 0; i < 2; i++)
    {
        int Levels = DAT_10f3419c[i]->GetLevelCount();
        for (int Level = 0; Level < Levels; Level++)
        {
            Struct_10952740_Desc Desc;
            DAT_10f3419c[i]->GetLevelDesc(Level, &Desc);
            Struct_10952740 Locked;
            if (DAT_10f3419c[i]->LockRect(Level, &Locked, 0, 0) < 0)
                return false;
            int* Pixels = Locked.Bits;
            for (int y = 0; y < Desc.Height; y++)
                for (int x = 0; x < Desc.Width; x++)
                    *Pixels++ = Colors[i];
            DAT_10f3419c[i]->UnlockRect(Level);
        }
    }
    return true;
}
