// Game/Unsorted_109410B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10905A90_Member.h"

class IDirect3DVertexBuffer8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

Class_10905A90_Member* FUN_10905aa0();

extern IDirect3DDevice8* GDirect3DDevice8;

extern int DAT_10efefbc;

class Class_109413A0
{
public:
    bool FUN_109413a0();

    char Unknown00[0x4];
    char Unknown04;
    char Unknown05;
    char Unknown06;
    char Pad07[0x1];
    IDirect3DVertexBuffer8* Unknown08[2];
    int Unknown10;
    char Unknown14[0xC];
    int Unknown20;
};

// FUNCTION: 0x109413A0 ?FUN_109413a0@Class_109413A0@@QAE_NXZ
bool Class_109413A0::FUN_109413a0()
{
    if (!(Unknown08[0] && Unknown08[1] && Unknown10 >= Unknown20 * 28))
    {
        Unknown04 = 0;
        Unknown05 = 0;
        Unknown06 = 0;
        for (int i = 0; i < 2; i++)
        {
            if (Unknown08[i])
            {
                Unknown08[i]->Virtual2();
                Unknown08[i] = 0;
            }
        }
        if (Unknown20 > 0)
        {
            for (int i = 0; i < 2; i++)
            {
                FUN_10905aa0()->Virtual8(0, 0);
                int Size = Unknown20 * 28;
                long Result = GDirect3DDevice8->CreateVertexBuffer(Size, 8, 0x144, DAT_10efefbc, &Unknown08[i]);
                FUN_10905aa0()->Virtual9();
                if (Result < 0)
                {
                    Unknown08[i] = 0;
                    Unknown10 = 0;
                    return false;
                }
            }
        }
        Unknown10 = Unknown20 * 28;
    }
    return true;
}
