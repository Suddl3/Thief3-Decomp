// Game/Unsorted_10C3EFD0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/CadenceManager.h"
#include "Game/Class_10C3F090.h"
#include "Game/Class_10C3FF10.h"
#include "Game/Class_10C62A40.h"
#include "Game/Class_10E9B5C0_Unknown1C.h"
#include "Game/Class_10C80360.h"

class FVector
{
public:
    float X, Y, Z;
};

class Class_10C41420 : public Class_10C3FF10
{
public:
    void FUN_10c472d0(int A);
};

Class_10C41420* GetSoundBufferPool();

Class_10C80360* FUN_10c5f280();

struct Struct_10C3F090
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    char Unknown0C[0xC];
    int Unknown18;
    int Unknown1C;
    int Unknown20;
};

class Class_10C3F090_Member
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
    virtual int __stdcall Virtual13(int A, int B, int C, int D, int E, int F, int G);
};

// FUNCTION: 0x10C3F050 ?SetPosition@CadenceManager@@UAEXPAVFVector@@@Z
void CadenceManager::SetPosition(FVector* Position)
{
    *(FVector*)&m_Position = *Position;
    if (Unknown1C)
        Unknown1C->Virtual14(Position->X, Position->Y, Position->Z, 1);
}

// FUNCTION: 0x10C3F090 ?FUN_10c3f090@Class_10C3F090@@QAEXPAUStruct_10C3F090@@@Z
void Class_10C3F090::FUN_10c3f090(Struct_10C3F090* P)
{
    if (Unknown1C)
        Unknown1C->Virtual13(P->Unknown00, P->Unknown04, P->Unknown08, P->Unknown18, P->Unknown1C, P->Unknown20, 1);
}
