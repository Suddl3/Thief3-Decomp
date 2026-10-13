// Game/VBPoolStaticPermanent_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109343B0.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10933DC0.h"

class IDirect3DVertexBuffer8;

Class_10905A90_Member* GetAllocator();

class VBPoolStaticPermanent
{
public:
    virtual void Virtual0();
    virtual long FUN_10933dc0(int A, int B, Struct_10933DC0* Desc, IDirect3DDevice8* Device);

    int Unknown04;
    int Unknown08;
    IDirect3DDevice8* Unknown0C;
    Struct_10933DC0 Unknown10;
    IDirect3DVertexBuffer8* Unknown1C;
    Class_109343B0 Unknown20;
    char Unknown21[0x13];
    int Unknown34;
    int Unknown38;
};

// FUNCTION: 0x10933DC0 ?FUN_10933dc0@VBPoolStaticPermanent@@UAEJHHPAUStruct_10933DC0@@PAVIDirect3DDevice8@@@Z
long VBPoolStaticPermanent::FUN_10933dc0(int A, int B, Struct_10933DC0* Desc, IDirect3DDevice8* Device)
{
    GetAllocator()->Virtual8(0, 0);
    long Result = Device->CreateVertexBuffer(Desc->Unknown00, 8, 0, (Desc->Unknown04 >> 1) & 1, &Unknown1C);
    GetAllocator()->Virtual9();
    if (Result >= 0)
    {
        Unknown20.FUN_109343b0(&Unknown1C);
        Unknown04 = A;
        Unknown08 = B;
        Unknown10 = *Desc;
        Unknown0C = Device;
        Unknown34 = 0;
        Unknown38 = Unknown10.Unknown00;
    }
    return Result;
}
