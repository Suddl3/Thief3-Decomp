// Game/Class_10E6CC64.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A46770.h"
#include "Game/Class_10E6CC64.h"
#include "Game/cString.h"
#include "Game/Class_10A905A0.h"
#include "Game/Class_10A8D160.h"
#include "Game/Class_10A8D310.h"
#include "Game/Class_10A8D320.h"
#include "Game/Class_10E6CA40.h"
#include "Game/Class_10E6CBEC.h"
#include "Game/Class_10E6CBF8.h"
#include "Game/Class_10E6CC70.h"
#include "Game/Class_10E6CC98.h"
#include "Game/Class_10E6CCA4.h"
#include "Game/Class_10E6CCB0.h"
#include "Game/Class_10E6CCD8.h"
#include "Game/Class_10E6CD40.h"
#include "Game/Class_10E6CDC4.h"
#include "Game/Class_10E6CDD0.h"
#include "Game/Class_10E6CDDC.h"
#include "Game/Class_10E6CDE8.h"
#include "Game/Class_10E6CDF4.h"
#include "Game/Class_10E6CE1C.h"
#include "Game/Class_10E6CE94.h"
#include "Game/Class_10E6CEC4.h"
#include "Game/Class_10E6CED0.h"
#include "Game/Class_10E6CEDC.h"
#include "Game/Class_10E6CEE8.h"
#include "Game/Class_10E6CEF4.h"
#include "Game/Class_10E6CF00.h"
#include "Game/Class_10E6CF0C.h"
#include "Game/Class_10E6CF18.h"
#include "Game/Class_10E6CF24.h"
#include "Game/Class_10E6CF30.h"
#include "Game/Class_10E6CF3C.h"
#include "Game/Class_10E6DC88.h"
#include "Game/FieldClass_A89060.h"
#include "Game/Class_10A90DC0.h"

class APlayerPawn
{
public:
    char Unknown00[0x208];
    Class_10A46770 Unknown208;
};

APlayerPawn* FUN_10983ca0(APlayerPawn* Obj);

struct Struct_10AA3520
{
    char Unknown00[0x08];
    APlayerPawn* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

extern void* DAT_10e6cc64;

// FUNCTION: 0x10A93350 ?Construct@Class_10E6CC64@@QAEPAV1@XZ
Class_10E6CC64* Class_10E6CC64::Construct()
{
    *(void**)this = &DAT_10e6cc64;
    return this;
}

// FUNCTION: 0x10A939B0 ?FUN_10a939b0@Class_10E6CC64@@UAEHHHH@Z
int Class_10E6CC64::FUN_10a939b0(int A, int B, int C)
{
    if (DAT_10f35dec)
    {
        APlayerPawn* Obj = DAT_10f35dec->Unknown08;
        if (Obj)
        {
            APlayerPawn* Pawn = FUN_10983ca0(Obj);
            if (Pawn)
                Pawn->Unknown208.Empty(0);
        }
    }
    return 1;
}
