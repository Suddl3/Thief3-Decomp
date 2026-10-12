// Game/Unsorted_1091E420_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10917D20.h"

// The D3DVIEWPORT8 SetViewport copies in (its Width and Height are DWORDs).
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

// cCamera as include/Game/cCamera.h declares it, flat: its base
// class is 0x68 bytes or more, and this function's fields start at 0x04.
class cCamera
{
public:
    void SetProjection(float A, bool B);
    void SetViewport(Struct_10924210* A, bool B);
    void FUN_1091eb80();
    void FUN_1091e690();

    int Unknown00;
    Struct_10917D20 Unknown04;
    char Unknown44[0x20];
    D3DXMATRIX m_Projection;
    D3DXMATRIX Unknown0A4;
    D3DXMATRIX Unknown0E4;
    D3DXMATRIX Unknown124;
    Struct_10924210 Viewport;
    float Unknown17C;
    float Unknown180;
    int Unknown184;
    float m_ViewportWidth;
    float m_ViewportHeight;
    float m_HalfWidth;
    float m_HalfHeight;
    float m_ProjectionScaleX;
    float m_ProjectionScaleY;
};

// FUNCTION: 0x1091EA50 ?SetViewport@cCamera@@QAEXPAUStruct_10924210@@_N@Z
void cCamera::SetViewport(Struct_10924210* A, bool B)
{
    Viewport = *A;
    m_ViewportWidth = (float)Viewport.Width;
    m_ViewportHeight = (float)Viewport.Height;
    float Q = m_ViewportWidth / m_ViewportHeight;
    FUN_10d68fc9(&m_Projection, Unknown17C / Q, Q, Unknown180, Unknown184);
    GDirect3DDevice8->SetTransform(3, &m_Projection);
    float W = m_ViewportWidth * 0.5f;
    m_HalfWidth = W;
    float H = m_ViewportHeight * 0.5f;
    Unknown0A4 = m_Projection;
    m_HalfHeight = H;
    m_ProjectionScaleX = W * m_Projection.m[0][0];
    m_ProjectionScaleY = -(H * m_Projection.m[1][1]);
    if (B)
    {
        FUN_1091e690();
    }
    else
    {
        FUN_10d67f9a(&Unknown124, &Unknown0E4, &m_Projection);
    }
}
