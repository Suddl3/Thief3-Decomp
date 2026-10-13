// Game/SoundSchema.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/SoundSchema.h"
#include "Core/Core.h"
#include "Game/Class_10BA9EC0.h"
#include "Game/Class_10BA9ED0.h"
#include "Game/Class_10BA9F80.h"
#include "Game/Class_10BA9FA0.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BAA050.h"
#include "Game/Class_10BAA390.h"
#include "Game/Class_10BAA3B0.h"
#include "Game/Class_10BAA3C0.h"
#include "Game/Class_10BB7D50.h"
#include "Game/Class_10BB7D70.h"
#include "Game/Class_10BB7D80.h"
#include "Game/Class_10BB7D90.h"
#include "Game/Class_10BB7DA0.h"
#include "Game/Class_10BB7E40.h"
#include "Game/Class_10BB7E50.h"
#include "Game/Class_10BB7EE0.h"
#include "Game/Class_10BB7EF0.h"
#include "Game/Class_10BB7F20.h"
#include "Game/Class_10BB80E0.h"
#include "Game/Class_10BB80F0.h"
#include "Game/Class_10BB8100.h"
#include "Game/Class_10BB8110.h"
#include "Game/Class_10BB8120.h"
#include "Game/Class_10BB8130.h"
#include "Game/Class_10BB8140.h"
#include "Game/Class_10BB8150.h"
#include "Game/Class_10BB8230.h"
#include "Game/Class_10BB8240.h"
#include "Game/Class_10BB8250.h"
#include "Game/Class_10BB8260.h"
#include "Game/Class_10BB8270.h"
#include "Game/Class_10BB8280.h"
#include "Game/Class_10BB85B0.h"
#include "Game/Class_10BB85C0.h"
#include "Game/Class_10BB85D0.h"
#include "Game/Class_10BB8600.h"
#include "Game/Class_10BB8610.h"
#include "Game/Class_10BB8620.h"
#include "Game/Class_10BB8630.h"
#include "Game/Class_10BB8640.h"
#include "Game/Class_10BB86E0.h"
#include "Game/Class_10C29000.h"
#include "Game/Class_10E99370.h"
#include "Game/Struct_10BA9EF0.h"
#include "Game/Struct_10BA9F20.h"
#include "Game/Struct_10BB8180.h"
#include "Game/Class_10BA9F20.h"
#include "Game/Class_10BB8180.h"
#include "Game/Class_10E5CBD8.h"
#include <vector>

// FUNCTION: 0x10BA9F90 ?FUN_10ba9f90@SoundSchema@@QAEXH@Z
void SoundSchema::FUN_10ba9f90(int param)
{
    Unknown68 = param;
}

// FUNCTION: 0x10C663F0 ?FUN_10c663f0@SoundSchema@@UAEXH@Z
void SoundSchema::FUN_10c663f0(int p1)
{
    FUN_10c66420(p1, p1);
}

// FUNCTION: 0x10C66400 ?FUN_10c66400@SoundSchema@@UAEXH@Z
void SoundSchema::FUN_10c66400(int p1)
{
    FUN_10c66440(p1, p1);
}

// FUNCTION: 0x10C66410 ?FUN_10c66410@SoundSchema@@UAEXH@Z
void SoundSchema::FUN_10c66410(int p1)
{
    FUN_10c66460(p1, p1);
}

// FUNCTION: 0x10C66420 ?FUN_10c66420@SoundSchema@@UAEXHH@Z
void SoundSchema::FUN_10c66420(int p1, int p2)
{
    Unknown38 = p1;
    Unknown3C = p2;
}

// FUNCTION: 0x10C66440 ?FUN_10c66440@SoundSchema@@UAEXHH@Z
void SoundSchema::FUN_10c66440(int p1, int p2)
{
    Unknown40 = p1;
    Unknown44 = p2;
}

// FUNCTION: 0x10C66460 ?FUN_10c66460@SoundSchema@@UAEXHH@Z
void SoundSchema::FUN_10c66460(int p1, int p2)
{
    Unknown48 = p1;
    Unknown4c = p2;
}

// FUNCTION: 0x10C66480 ?FUN_10c66480@SoundSchema@@UAEXPAH0@Z
void SoundSchema::FUN_10c66480(int* OutA, int* OutB)
{
    *OutA = Unknown38;
    *OutB = Unknown3C;
}

// FUNCTION: 0x10C664A0 ?FUN_10c664a0@SoundSchema@@UAEXPAH0@Z
void SoundSchema::FUN_10c664a0(int* OutA, int* OutB)
{
    *OutA = Unknown40;
    *OutB = Unknown44;
}

// FUNCTION: 0x10C664C0 ?FUN_10c664c0@SoundSchema@@UAEXPAH0@Z
void SoundSchema::FUN_10c664c0(int* OutA, int* OutB)
{
    *OutA = Unknown48;
    *OutB = Unknown4C;
}

// FUNCTION: 0x10C664E0 ?FUN_10c664e0@SoundSchema@@UAEXH@Z
void SoundSchema::FUN_10c664e0(int param)
{
    Unknown50 = param;
}

// FUNCTION: 0x10C66520 ?FUN_10c66520@SoundSchema@@UAEXHH@Z
void SoundSchema::FUN_10c66520(int p1, int p2)
{
    Unknown60 = p1;
    Unknown64 = p2;
}

// FUNCTION: 0x10C66540 ?FUN_10c66540@SoundSchema@@UAEXPAH0@Z
void SoundSchema::FUN_10c66540(int* OutA, int* OutB)
{
    *OutA = Unknown60;
    *OutB = Unknown64;
}

// FUNCTION: 0x10C66570 ?FUN_10c66570@SoundSchema@@UAEXH@Z
void SoundSchema::FUN_10c66570(int Value)
{
    Unknown6C = Value;
    if (Value == 4 || Value == 5)
        Unknown6C = 3;
}

// FUNCTION: 0x10C665C0 ?FUN_10c665c0@SoundSchema@@UAEXH@Z
void SoundSchema::FUN_10c665c0(int param)
{
    Unknown88 = param;
}

// FUNCTION: 0x10C666E0 ?GetMetaSoundCount@SoundSchema@@UAEHXZ
int SoundSchema::GetMetaSoundCount()
{
    return m_MetaSounds.size();
}

// FUNCTION: 0x10C66900 ?GetMetaSound@SoundSchema@@UAEHH@Z
int SoundSchema::GetMetaSound(int param)
{
    return m_MetaSounds[param];
}
