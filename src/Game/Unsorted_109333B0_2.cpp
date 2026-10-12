// Game/Unsorted_109333B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DVertexBuffer.h"
#include "Game/Struct_10932ED0.h"
#include "Game/Class_10E49D1C.h"

class VBPoolStaticPermanent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual unsigned int Divide(unsigned int param);

    char Unknown04[0x34];
    unsigned int m_Count;
};

extern void* DAT_10e49f0c[];

class Class_10E49F0C
{
public:
    void FUN_109341c0();
    void** VTable;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10E49EE0 {
public:
    virtual int AddRef();

    char Unknown04[4];
    int Unknown08;
};

// FUNCTION: 0x10933630 ?Init@Class_10E49D1C@@UAEHHHPAUStruct_10932ED0@@H@Z
int Class_10E49D1C::Init(int A, int B, Struct_10932ED0* C, int D)
{
    Unknown04 = A;
    Unknown08 = B;
    m_Desc = *C;
    Unknown0C = D;
    return 0;
}

// FUNCTION: 0x10933960 ?Divide@VBPoolStaticPermanent@@UAEII@Z
unsigned int VBPoolStaticPermanent::Divide(unsigned int param)
{
    return m_Count / param;
}

// FUNCTION: 0x109341C0 ?FUN_109341c0@Class_10E49F0C@@QAEXXZ
void Class_10E49F0C::FUN_109341c0()
{
    VTable = DAT_10e49f0c;
    Unknown04 = 0;
    Unknown0C = -1;
    Unknown08 = 0;
    Unknown10 = 0;
}

// FUNCTION: 0x109341E0 ?AddRef@Class_10E49EE0@@UAEHXZ
int Class_10E49EE0::AddRef()
{
    return ++Unknown08;
}

// FUNCTION: 0x10934800 ?GetVertexCount@cD3DVertexBuffer@@UAEIXZ
unsigned int cD3DVertexBuffer::GetVertexCount()
{
    return m_Length / Unknown1c;
}
