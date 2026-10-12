// Game/Class_10E8C690.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C690.h"
#include "Game/cStatePatrol.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4560 ?FUN_10ba4560@Class_10E8C690@@UAEPAVcStatePatrol@@XZ
cStatePatrol* Class_10E8C690::FUN_10ba4560()
{
    cStatePatrol* Object = (cStatePatrol*)operator new(sizeof(cStatePatrol), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
