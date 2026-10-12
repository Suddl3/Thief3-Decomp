// Game/Class_10E49EB8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109343B0.h"
#include "Game/IDirect3DDevice8.h"

class IDirect3DVertexBuffer8;

class Class_10E49EB8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void CreateBuffer(IDirect3DDevice8* Device);

    char Unknown04[0xC];
    unsigned int Unknown10;
    unsigned int Unknown14;
    char Unknown18[4];
    IDirect3DVertexBuffer8* Unknown1C;
    Class_109343B0 m_vecD3DVBs;
};

// FUNCTION: 0x10933F10 ?CreateBuffer@Class_10E49EB8@@UAEXPAVIDirect3DDevice8@@@Z
void Class_10E49EB8::CreateBuffer(IDirect3DDevice8* Device)
{
    if (Unknown1C == 0)
    {
        Device->CreateVertexBuffer(Unknown10, 0x208, 0, (Unknown14 >> 1) & 1, &Unknown1C);
        m_vecD3DVBs.FUN_109343b0(&Unknown1C);
    }
}
