// Game/Unsorted_1091E420_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10917D20.h"

struct Struct_10924210;

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
    void SetProjection(float A, bool B);
    void SetViewport(Struct_10924210* A, int B);
    void FUN_1091eb80();
    void FUN_1091e690();

    int Unknown00;
    Struct_10917D20 Unknown04;
    char Unknown44[0x20];
    D3DXMATRIX m_Projection;
    D3DXMATRIX Unknown0A4;
    D3DXMATRIX Unknown0E4;
    D3DXMATRIX Unknown124;
    char Unknown164[0x8];
    unsigned int Unknown16C;
    unsigned int Unknown170;
    char Unknown174[0x8];
    float Unknown17C;
    float Unknown180;
    int Unknown184;
    float m_ViewportWidth;
    float m_ViewportHeight;
    float m_HalfWidth;
    float m_HalfHeight;
    float Unknown198;
    float Unknown19C;
};

// FUNCTION: 0x1091E940 ?SetProjection@Class_1091E940@@QAEXM_N@Z
void Class_1091E940::SetProjection(float A, bool B)
{
    Unknown17C = A;
    m_ViewportWidth = (float)Unknown16C;
    m_ViewportHeight = (float)Unknown170;
    float Q = m_ViewportWidth / m_ViewportHeight;
    FUN_10d68fc9(&m_Projection, A / Q, Q, Unknown180, Unknown184);
    GDirect3DDevice8->SetTransform(3, &m_Projection);
    float W = m_ViewportWidth * 0.5f;
    m_HalfWidth = W;
    float H = m_ViewportHeight * 0.5f;
    Unknown0A4 = m_Projection;
    m_HalfHeight = H;
    Unknown198 = W * m_Projection.m[0][0];
    Unknown19C = -(H * m_Projection.m[1][1]);
    if (B)
    {
        FUN_1091e690();
    }
    else
    {
        FUN_10d67f9a(&Unknown124, &Unknown0E4, &m_Projection);
    }
}
