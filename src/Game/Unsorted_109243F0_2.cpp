// Game/Unsorted_109243F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10936A40.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/cD3DStateCache.h"

class IDirect3DSurface8;

extern cD3DStateCache* DAT_10f31be0;

class cRenderTargetState
{
public:
    void ApplyRenderTarget();

    char Unknown00[4];
    IDirect3DDevice8* m_Device;
    IDirect3DSurface8* m_RenderTarget;
    IDirect3DSurface8* m_DepthStencil;
    char Unknown10[0x98];
    int UnknownA8;
};

// FUNCTION: 0x109243F0 ?ApplyRenderTarget@cRenderTargetState@@QAEXXZ
void cRenderTargetState::ApplyRenderTarget()
{
    if (m_Device)
    {
        if (m_RenderTarget && m_DepthStencil && UnknownA8 != -1)
            m_Device->SetRenderTarget(m_RenderTarget, m_DepthStencil);
        m_Device->SetRenderState(0xa1, 1);
        if (UnknownA8 != -1)
            DAT_10f31be0->ApplyViewport();
        UnknownA8 = -1;
    }
}
