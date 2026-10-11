// Game/Class_10E49F38.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49F38.h"
#include "Game/IDirect3DVertexBuffer8.h"

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
