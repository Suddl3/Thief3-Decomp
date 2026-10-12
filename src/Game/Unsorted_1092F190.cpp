// Game/Unsorted_1092F190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_1092F330.h"
#include "Game/Class_1092F130.h"
#include "Game/Class_109373D0.h"

extern cIntArray DAT_10f31b9c;

extern Class_1092F130** DAT_10f31ba4;

extern int DAT_10f31ba0;

extern IDirect3DDevice8* GDirect3DDevice8;

class cD3DStateCache : public Class_109373D0
{
};

extern cD3DStateCache* DAT_10f31be0;

void FUN_109192e0(int A, int B, int C);

// FUNCTION: 0x1092F190 ?FUN_1092f190@@YAXXZ
void FUN_1092f190()
{
    for (int i = 0; i < DAT_10f31b9c.Count; i++)
    {
        Class_1092F130* Item = DAT_10f31ba4[i];
        if (Item)
        {
            Item->FUN_1092e9c0();
            delete Item;
        }
    }
    int Capacity = !DAT_10f31ba4 ? 0 : DAT_10f31ba0 / sizeof(void*);
    GetAllocator()->Virtual8(0, 0);
    int NewCount = 0;
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        DAT_10f31ba4 = (Class_1092F130**)GetAllocator()->Virtual3(DAT_10f31ba4, NewCapacity * sizeof(void*), 0, 0, 0, 0);
        DAT_10f31ba0 = NewCapacity * sizeof(void*);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(DAT_10f31ba4);
            DAT_10f31ba4 = 0;
            DAT_10f31ba0 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            DAT_10f31ba4 = (Class_1092F130**)GetAllocator()->Virtual3(DAT_10f31ba4, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            DAT_10f31ba0 = NewCapacity * sizeof(void*);
        }
    }
    GetAllocator()->Virtual9();
    DAT_10f31b9c.Count = NewCount;
}

// FUNCTION: 0x1092F330 ?FUN_1092f330@Class_1092F330@@QAEXXZ
void Class_1092F330::FUN_1092f330()
{
    if (Unknown1C)
    {
        GDirect3DDevice8->SetRenderState(7, 1);
        GDirect3DDevice8->SetRenderState(0x89, 0);
        GDirect3DDevice8->SetRenderState(0x8d, 1);
        IDirect3DBaseTexture8** Slot = &DAT_10f31be0->Unknown1C[0];
        if (*Slot)
        {
            GDirect3DDevice8->SetTexture(0, 0);
            *Slot = 0;
        }
        FUN_109192e0(Unknown1C, 0x14, 0);
        DAT_10f31be0->SetVertexShader(0x44);
        if (Unknown10)
            GDirect3DDevice8->DrawPrimitive(D3DPT_LINELIST, 0, Unknown0C);
        else
            GDirect3DDevice8->DrawPrimitive(D3DPT_LINESTRIP, 0, Unknown0C);
    }
}
