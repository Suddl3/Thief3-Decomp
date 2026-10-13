// Game/Unsorted_10934990.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109343B0.h"

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size);

extern void* DAT_10e49f64[];

class cD3DDynamicVertexBuffer
{
public:
    cD3DDynamicVertexBuffer(int Owner, int A, int B)
    {
        Unknown0C = 1;
        Unknown08 = 1;
        Unknown04 = Owner;
        Unknown10 = B;
        VTable = DAT_10e49f64;
        m_Buffer = 0;
        m_Offset = 0;
        m_Size = 0;
        m_Stride = A;
        Unknown24 = 0;
    }

    void** VTable;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int m_Buffer;
    int m_Offset;
    int m_Size;
    int m_Stride;
    int Unknown24;
};

class Class_10934990
{
public:
    int FUN_10934990(int* Out, int A, int B);

    char Unknown00[0x3C];
    Class_109343B0 Unknown3C;
};

// FUNCTION: 0x10934990 ?FUN_10934990@Class_10934990@@QAEHPAHHH@Z
int Class_10934990::FUN_10934990(int* Out, int A, int B)
{
    if (Out == 0)
        return 0x80070057;
    GetAllocator()->Virtual8(0, 0);
    cD3DDynamicVertexBuffer* Obj = new cD3DDynamicVertexBuffer((int)this, A, B);
    *Out = (int)Obj;
    GetAllocator()->Virtual9();
    Unknown3C.FUN_109343b0((IDirect3DVertexBuffer8**)Out);
    return 0;
}
