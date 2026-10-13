// Game/Class_109373D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109373D0.h"

class IDirect3DBaseTexture8;

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
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
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
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual int __stdcall Virtual37();
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual int __stdcall Virtual40();
    virtual int __stdcall Virtual41();
    virtual int __stdcall Virtual42();
    virtual int __stdcall Virtual43();
    virtual int __stdcall Virtual44();
    virtual int __stdcall Virtual45();
    virtual int __stdcall Virtual46();
    virtual int __stdcall Virtual47();
    virtual int __stdcall Virtual48();
    virtual int __stdcall Virtual49();
    virtual long __stdcall SetRenderState(unsigned long State, unsigned long Value);
    virtual int __stdcall Virtual51();
    virtual int __stdcall Virtual52();
    virtual int __stdcall Virtual53();
    virtual int __stdcall Virtual54();
    virtual int __stdcall Virtual55();
    virtual int __stdcall Virtual56();
    virtual int __stdcall Virtual57();
    virtual int __stdcall Virtual58();
    virtual int __stdcall Virtual59();
    virtual int __stdcall Virtual60();
    virtual long __stdcall SetTexture(unsigned long Stage, IDirect3DBaseTexture8* Texture);
    virtual int __stdcall Virtual62();
    virtual long __stdcall SetTextureStageState(unsigned long Stage, unsigned long Type, unsigned long Value);
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern int DAT_10efefb8;

class IDirect3DIndexBuffer8;

class IDirect3DSurface8;

class IDirect3DTexture8;

class IDirect3DVertexBuffer8;

struct D3DXMATRIX;

struct Struct_10924210;

enum D3DPRIMITIVETYPE
{
    D3DPT_POINTLIST = 1,
    D3DPT_LINELIST = 2,
    D3DPT_LINESTRIP = 3,
    D3DPT_TRIANGLELIST = 4,
    D3DPT_TRIANGLESTRIP = 5,
    D3DPT_TRIANGLEFAN = 6
};

// FUNCTION: 0x10936CF0 ?ResetTextureStages@Class_109373D0@@QAEXXZ
void Class_109373D0::ResetTextureStages()
{
    for (int i = 0; i < 4; i++)
    {
        m_StageTextures[i] = 0;
        GDirect3DDevice8->SetTexture(i, 0);
        GDirect3DDevice8->SetTextureStageState(i, 11, i);
        GDirect3DDevice8->SetTextureStageState(i, 24, 0);
        GDirect3DDevice8->SetTextureStageState(i, 1, 1);
        GDirect3DDevice8->SetTextureStageState(i, 4, 1);
        GDirect3DDevice8->SetTextureStageState(i, 18, 0);
        GDirect3DDevice8->SetTextureStageState(i, 17, DAT_10efefb8);
        GDirect3DDevice8->SetTextureStageState(i, 16, DAT_10efefb8);
        GDirect3DDevice8->SetTextureStageState(i, 13, 1);
        GDirect3DDevice8->SetTextureStageState(i, 14, 1);
        GDirect3DDevice8->SetRenderState(i + 0x80, 8);
    }
}

// FUNCTION: 0x10937010 ?ResetTextureStagesBiased@Class_109373D0@@QAEXXZ
void Class_109373D0::ResetTextureStagesBiased()
{
    for (int i = 0; i < 4; i++)
    {
        m_StageTextures[i] = 0;
        GDirect3DDevice8->SetTexture(i, 0);
        GDirect3DDevice8->SetTextureStageState(i, 11, i);
        GDirect3DDevice8->SetTextureStageState(i, 24, 0);
        GDirect3DDevice8->SetTextureStageState(i, 15, 0);
        GDirect3DDevice8->SetTextureStageState(i, 1, 1);
        GDirect3DDevice8->SetTextureStageState(i, 4, 1);
        GDirect3DDevice8->SetTextureStageState(i, 19, 0xbf800000);
        GDirect3DDevice8->SetTextureStageState(i, 18, 2);
        GDirect3DDevice8->SetTextureStageState(i, 17, DAT_10efefb8);
        GDirect3DDevice8->SetTextureStageState(i, 16, DAT_10efefb8);
        GDirect3DDevice8->SetTextureStageState(i, 13, 1);
        GDirect3DDevice8->SetTextureStageState(i, 14, 1);
        GDirect3DDevice8->SetRenderState(i + 0x80, 8);
    }
}
