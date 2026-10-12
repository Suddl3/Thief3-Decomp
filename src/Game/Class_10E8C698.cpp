// Game/Class_10E8C698.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C698.h"
#include "Game/cStateGuard.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4600 ?CreateStateGuard@Class_10E8C698@@UAEPAVcStateGuard@@XZ
cStateGuard* Class_10E8C698::CreateStateGuard()
{
    cStateGuard* Object = (cStateGuard*)operator new(sizeof(cStateGuard), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
