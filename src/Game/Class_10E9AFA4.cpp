// Game/Class_10E9AFA4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C3D050.h"
#include "Game/Class_10C3D0D0.h"
#include "Game/Class_10C3D340.h"
#include "Game/Class_10C3D350.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10C3D3C0.h"
#include "Game/Class_10C3D3E0.h"
#include "Game/Class_10C3D3F0.h"
#include "Game/Class_10C3D420.h"
#include "Game/Class_10C3D440.h"
#include "Game/Class_10C3D560.h"
#include "Game/Class_10C3DD60.h"
#include "Game/Class_10C3DFE0.h"
#include "Game/Class_10C3F170.h"
#include "Game/Class_10E9B580.h"
#include "Game/Class_10E9AFA4.h"
#include "Game/CadenceManager.h"

extern void* DAT_10e9afa4[];

// FUNCTION: 0x10C3CF70 ?Init@Class_10E9AFA4@@QAEPAV1@HHH@Z
Class_10E9AFA4* Class_10E9AFA4::Init(int A, int B, int C)
{
    Unknown04 = 90.0f;
    Unknown08 = 90.0f;
    Unknown0C = A;
    *(void**)this = DAT_10e9afa4;
    Unknown10 = B;
    Unknown14 = C;
    return this;
}
