// Game/Class_10E81668.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC92F0.h"
#include "Game/Class_10E81668.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10B53A00.h"

extern Class_10F3A3D8* DAT_10f3a3d8;

extern float DAT_10f05068;

void FUN_10abc090(float p1);

// FUNCTION: 0x10B4FA70 ?FUN_10b4fa70@Class_10E81668@@UAEXPAUStruct_10B53A00@@@Z
void Class_10E81668::FUN_10b4fa70(Struct_10B53A00* A)
{
    int Flags = A->Unknown450;
    if ((Flags & 2) && Unknown10 == 0 && !(Flags & 1))
        FUN_10b3b260(A);
    DAT_10f3a3d8->Unknown13C->FUN_10ac92f0();
    FUN_10abc090(DAT_10f05068);
}
