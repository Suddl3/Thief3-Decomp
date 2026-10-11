// Game/Unsorted_10937140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10924210.h"

class IDirect3DBaseTexture8;

struct Info_10952690;

extern IDirect3DDevice8* GDirect3DDevice8;

struct Struct_109371D0
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
};

class Class_10936AC0
{
public:
    void FUN_10936ac0(int A, int B);
    void FUN_10936b20(int A, int B);
    void FUN_1091ef90();
    void FUN_10937280(int A, Info_10952690* Info);
    void FUN_109371d0(int p1, int p2);
    void FUN_10937310(int Index, int Value);
    void FUN_10936bf0(int A);

    char Pad01[0xb];
    char Pad81F[0x1];
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    IDirect3DBaseTexture8* Unknown1C[4];
    Struct_109371D0 Unknown2C[104];
    char Pad6AC[0x4];
    int Unknown6B0;
    char Pad6B4[0x148];
    Struct_10924210 Unknown7FC;
};

// FUNCTION: 0x109371D0 ?FUN_109371d0@Class_10936AC0@@QAEXHH@Z
void Class_10936AC0::FUN_109371d0(int Index, int Value)
{
    if (Unknown6B0)
    {
        float V = *(float*)&Value;
        Struct_109371D0 Color;
        Color.Unknown00 = V;
        Color.Unknown04 = V;
        Color.Unknown08 = V;
        Color.Unknown0C = V;
        Struct_109371D0* Entry = &Unknown2C[Index];
        if (Entry->Unknown00 != V || Entry->Unknown04 != V
            || Entry->Unknown08 != V || Entry->Unknown0C != V)
        {
            GDirect3DDevice8->SetVertexShaderConstant(Index, &Color, 1);
            *Entry = Color;
        }
    }
}
