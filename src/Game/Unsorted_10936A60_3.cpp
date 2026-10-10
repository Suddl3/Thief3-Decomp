// Game/Unsorted_10936A60_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"

class IDirect3DIndexBuffer8;

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10936AC0
{
public:
    void FUN_10936b20(int Indices, int BaseVertexIndex);

    char Unknown00[0x14];
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10936B20 ?FUN_10936b20@Class_10936AC0@@QAEXHH@Z
void Class_10936AC0::FUN_10936b20(int Indices, int BaseVertexIndex)
{
    if (Indices)
    {
        if (Indices != Unknown14 || BaseVertexIndex != Unknown18)
        {
            GDirect3DDevice8->SetIndices((IDirect3DIndexBuffer8*)Indices, BaseVertexIndex);
            Unknown14 = Indices;
            Unknown18 = BaseVertexIndex;
        }
    }
    else
    {
        Unknown14 = 0;
    }
}
