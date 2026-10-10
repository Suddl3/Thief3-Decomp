// Game/Class_10E49F38.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49F38.h"

class IDirect3DVertexBuffer8
{
public:
    virtual long __stdcall Virtual0();
    virtual long __stdcall Virtual1();
    virtual long __stdcall Virtual2();
    virtual long __stdcall Virtual3();
    virtual long __stdcall Virtual4();
    virtual long __stdcall Virtual5();
    virtual long __stdcall Virtual6();
    virtual long __stdcall Virtual7();
    virtual long __stdcall Virtual8();
    virtual long __stdcall Virtual9();
    virtual long __stdcall Virtual10();
    virtual long __stdcall Lock(unsigned int OffsetToLock, unsigned int SizeToLock, unsigned char** ppbData, unsigned long Flags);
};

// FUNCTION: 0x10934810 ?FUN_10934810@Class_10E49F38@@UAEHHHPAPAE@Z
int Class_10E49F38::FUN_10934810(int A, int B, unsigned char** Out)
{
    if (!Out)
        return 0x80070057;
    *Out = 0;
    if (Unknown14 == 0)
        return 0x80040721;
    return ((IDirect3DVertexBuffer8*)Unknown14)->Lock(Unknown1C * A, Unknown1C * B, Out, 0);
}
