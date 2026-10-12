// Game/Unsorted_10918E90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DSurface8.h"

// Direct3D 8 interfaces, declared with the slots this function calls. COM methods are __stdcall
// with this pushed last, so a call pushes the arguments in reverse and then the object.
struct D3DDISPLAYMODE
{
    unsigned int Width;
    unsigned int Height;
    unsigned int RefreshRate;
    int Format;
};

struct D3DSURFACE_DESC
{
    int Format;
    int Type;
    unsigned int Usage;
    int Pool;
    unsigned int Size;
    int MultiSampleType;
    unsigned int Width;
    unsigned int Height;
};

class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8(D3DDISPLAYMODE* Mode);
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16(unsigned int BackBuffer, int Type, IDirect3DSurface8** Surface);
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual int __stdcall Virtual20();
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual int __stdcall Virtual23();
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual int __stdcall Virtual31();
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33(IDirect3DSurface8** Surface);
};

extern IDirect3DDevice8* GDirect3DDevice8;

int GetFrameBufferBytes();

// FUNCTION: 0x10918E90 ?GetFrameBufferBytes@@YAHXZ
int GetFrameBufferBytes()
{
    IDirect3DSurface8* Surface;
    D3DDISPLAYMODE Mode;
    D3DSURFACE_DESC Desc;
    int Sum = 0;
    for (int Count = 4; Count != 0; --Count)
    {
        if (GDirect3DDevice8->Virtual16(0, 0, &Surface) >= 0)
        {
            Surface->Virtual8(&Desc);
            Sum += Desc.Size;
            Surface->Virtual2();
        }
    }
    if (GDirect3DDevice8->Virtual8(&Mode) >= 0)
    {
        Sum += Mode.Width * Mode.Height * 4;
    }
    if (GDirect3DDevice8->Virtual33(&Surface) >= 0)
    {
        Surface->Virtual8(&Desc);
        Sum += Desc.Size;
        Surface->Virtual2();
    }
    return Sum;
}
