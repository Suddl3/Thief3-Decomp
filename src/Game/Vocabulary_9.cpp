// Game/Vocabulary_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/IDirect3DDevice8.h"
#include "Game/Class_1091E3F0.h"
#include "Game/Class_10928760.h"

struct D3DXMATRIX
{
    float m[4][4];
};

class IDirect3DBaseTexture8;

class Class_109301D0_Unknown58;

class Class_1092FFD0_Unknown7C;

class Class_1094B030;

// The game's state cache has the texture array at +0x1c, not where
// Game/cD3DStateCache.h puts it.
class cD3DStateCache
{
public:
    void FUN_109377d0(Class_1091E3F0* A);

    char Pad00[0x1C];
    IDirect3DBaseTexture8* m_Textures[4];
    char Pad2C[0x6D0];
    D3DXMATRIX Unknown6FC;
};

extern cD3DStateCache* DAT_10f31be0;

extern IDirect3DDevice8* GDirect3DDevice8;

extern bool DAT_10f2c72d;

extern bool DAT_10f2c72f;

class Class_10E4A538
{
public:
    char Pad00[0x350];
    int Unknown350;
};

extern Class_10E4A538* DAT_10f2c8e4;

struct Class_10930300_Entry
{
    int Code;
    char Flag;
    char Pad[7];
};

struct Class_10930300_Items
{
    char Pad00[0x18];
    Class_10930300_Entry Entries[8];
};

class Vocabulary : public Class_10928760
{
public:
    virtual ~Vocabulary();
    virtual void FUN_10930300(Class_10930300_Items* A);

    Vocabulary();

    void FUN_1092ff00(int A, int B);
    bool FUN_10925130(int A);
    void FUN_1092fae0(int A, int B, void* C);
    void FUN_10925190(int A);
    void FUN_10930110(int Param1, int Param2);
    bool FUN_10925160(int A);
    void FUN_10930170(int A, int B);
    void FUN_1092ff60(int A, int B);
    void FUN_1092fcb0(int A, int B, int C);
    void FUN_109301d0();
    void FUN_1092ffd0(int A, int B);
    void FUN_10930070(int A, int B);
    void FUN_1092fde0(Class_1094B030* A);

    int Unknown04;
    Class_1091E3F0* Unknown08;
    char Pad0C[0x44];
    int m_ItemCount;
    int Unknown54;
    Class_109301D0_Unknown58** m_Items;
    char Pad5C[0x18];
    int Unknown74;
    char Pad78[0x4];
    Class_1092FFD0_Unknown7C** Unknown7C;
};

// FUNCTION: 0x10930300 ?FUN_10930300@Vocabulary@@UAEXPAUClass_10930300_Items@@@Z
void Vocabulary::FUN_10930300(Class_10930300_Items* A)
{
    DAT_10f31be0->FUN_109377d0(Unknown08);
    DAT_10f2c8e4->Unknown350 = Unknown04;
    GDirect3DDevice8->SetTransform(0x100, &DAT_10f31be0->Unknown6FC);
    GDirect3DDevice8->SetTransform(2, (const D3DXMATRIX*)Unknown08->FUN_1091e3f0());
    GDirect3DDevice8->SetTransform(3, (const D3DXMATRIX*)Unknown08->FUN_1091e3e0());
    if (DAT_10f2c72d)
        GDirect3DDevice8->SetRenderState(8, 2);
    for (int i = 0; i < 8; i++)
    {
        Class_10930300_Entry* E = &A->Entries[i];
        if (E->Code == -1)
            break;
        if (!E->Flag)
            continue;
        switch (E->Code)
        {
        case 1:
            if (DAT_10f2c72f)
                FUN_109301d0();
            else
                FUN_1092ff60(0, (int)E);
            break;
        case 2:
            if (!DAT_10f2c72f)
                FUN_1092ffd0(0, (int)E);
            break;
        case 3:
            FUN_10930070(0, (int)E);
            break;
        case 4:
            FUN_10930110(0, (int)E);
            break;
        case 5:
            FUN_10930170(0, (int)E);
            break;
        case 6:
            FUN_1092ff00(0, (int)E);
            break;
        }
    }
}
