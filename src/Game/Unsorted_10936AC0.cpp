// Game/Unsorted_10936AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"

class IDirect3DVertexBuffer8;

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10936AC0
{
public:
    void FUN_10936ac0(int VertexBuffer, int Stride);

    char Unknown00[0xC];
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10936AC0 ?FUN_10936ac0@Class_10936AC0@@QAEXHH@Z
void Class_10936AC0::FUN_10936ac0(int VertexBuffer, int Stride)
{
    if (VertexBuffer != 0)
    {
        if (Stride != 0)
        {
            if (VertexBuffer != Unknown0C || Stride != Unknown10)
            {
                GDirect3DDevice8->SetStreamSource(0, (IDirect3DVertexBuffer8*)VertexBuffer, Stride);
                Unknown0C = VertexBuffer;
                Unknown10 = Stride;
            }
        }
        else
        {
            Unknown0C = 0;
            Unknown10 = 0;
        }
    }
    else
    {
        Unknown0C = 0;
        Unknown10 = 0;
    }
}
