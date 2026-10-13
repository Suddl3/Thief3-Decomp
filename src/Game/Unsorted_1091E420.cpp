// Game/Unsorted_1091E420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Game/cVector3.h"
#include "Game/IDirect3DDevice8.h"

class IDirect3DBaseTexture8;

extern IDirect3DDevice8* GDirect3DDevice8;

class cD3DStateCache
{
public:
    void ClearTextures();

    char Unknown00[0x1C];
    IDirect3DBaseTexture8* m_Textures[4];
};

// FUNCTION: 0x1091EF40 ?ClassifyPointToPlane@@YGHPAM0@Z
int __stdcall ClassifyPointToPlane(float* A, float* B)
{
    float Distance = A[0] * B[0] + A[1] * B[1] + A[2] * B[2] + B[3];
    if (Distance < -0.001f)
        return 1;
    if (Distance > 0.001f)
        return 0;
    return 2;
}

// FUNCTION: 0x1091EF90 ?ClearTextures@cD3DStateCache@@QAEXXZ
void cD3DStateCache::ClearTextures()
{
    for (int i = 0; i < 4; i++)
    {
        m_Textures[i] = 0;
        if (GDirect3DDevice8)
            GDirect3DDevice8->SetTexture(i, 0);
    }
}
