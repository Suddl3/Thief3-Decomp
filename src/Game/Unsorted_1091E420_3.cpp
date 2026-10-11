// Game/Unsorted_1091E420_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10917D20.h"

// The D3DVIEWPORT8 FUN_1091ea50 copies in (its Width and Height are DWORDs).
struct Struct_10924210
{
    unsigned int X;
    unsigned int Y;
    unsigned int Width;
    unsigned int Height;
    float MinZ;
    float MaxZ;
};

// D3DX's matrix product.
extern "C" D3DXMATRIX* __stdcall FUN_10d67f9a(D3DXMATRIX* pOut, const D3DXMATRIX* pM1, const D3DXMATRIX* pM2);

// Unnamed: builds the projection matrix into its first argument.
void __stdcall FUN_10d68fc9(D3DXMATRIX* Out, float A, float B, float C, int D);

extern IDirect3DDevice8* GDirect3DDevice8;

// Class_1091E940 as include/Game/Class_1091E940.h declares it, flat: its base
// class is 0x68 bytes or more, and this function's fields start at 0x04.
class Class_1091E940
{
public:
    void FUN_1091e940(float A, bool B);
    void FUN_1091ea50(Struct_10924210* A, bool B);
    void FUN_1091eb80();
    void FUN_1091e690();

    int Unknown00;
    Struct_10917D20 Unknown04;
    char Unknown44[0x20];
    D3DXMATRIX Unknown64;
    D3DXMATRIX Unknown0A4;
    D3DXMATRIX Unknown0E4;
    D3DXMATRIX Unknown124;
    Struct_10924210 Viewport;
    float Unknown17C;
    float Unknown180;
    int Unknown184;
    float Unknown188;
    float Unknown18C;
    float Unknown190;
    float Unknown194;
    float Unknown198;
    float Unknown19C;
};

// FUNCTION: 0x1091EA50 ?FUN_1091ea50@Class_1091E940@@QAEXPAUStruct_10924210@@_N@Z
void Class_1091E940::FUN_1091ea50(Struct_10924210* A, bool B)
{
    Viewport = *A;
    Unknown188 = (float)Viewport.Width;
    Unknown18C = (float)Viewport.Height;
    float Q = Unknown188 / Unknown18C;
    FUN_10d68fc9(&Unknown64, Unknown17C / Q, Q, Unknown180, Unknown184);
    GDirect3DDevice8->SetTransform(3, &Unknown64);
    float W = Unknown188 * 0.5f;
    Unknown190 = W;
    float H = Unknown18C * 0.5f;
    Unknown0A4 = Unknown64;
    Unknown194 = H;
    Unknown198 = W * Unknown64.m[0][0];
    Unknown19C = -(H * Unknown64.m[1][1]);
    if (B)
    {
        FUN_1091e690();
    }
    else
    {
        FUN_10d67f9a(&Unknown124, &Unknown0E4, &Unknown64);
    }
}
