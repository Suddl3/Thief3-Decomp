// Game/Unsorted_10924450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cD3DStateCache.h"

class IDirect3DBaseTexture8;

extern cD3DStateCache* DAT_10f31be0;

struct Struct_10924450_Entry
{
    unsigned char Flags;
    char Unknown01[0x13];
    IDirect3DBaseTexture8* Texture;
    char Unknown18[8];
};

class Class_10924450
{
public:
    void FUN_10924450(int Stage, int Index);

    char Unknown00[0x48];
    Struct_10924450_Entry Unknown48[1];
};

// FUNCTION: 0x10924450 ?FUN_10924450@Class_10924450@@QAEXHH@Z
void Class_10924450::FUN_10924450(int Stage, int Index)
{
    if (Index != -1 && (Unknown48[Index].Flags & 1))
    {
        IDirect3DBaseTexture8* Texture = Unknown48[Index].Texture;
        if (Texture)
            DAT_10f31be0->SetTexture(Stage, Texture);
        else
            DAT_10f31be0->SetTexture(Stage, 0);
    }
}
