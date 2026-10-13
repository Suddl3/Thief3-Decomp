// Game/Class_10E7AE9C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10B27FD0.h"
#include "Game/Class_10B32D60.h"
#include "Game/Class_10E7AD44.h"
#include "Game/Class_10E7B89C.h"
#include "Game/cT3ReadBookWindow.h"
#include "Game/Class_10E7C380.h"
#include "Game/Class_10E7C38C.h"
#include "Game/Class_10E7C3B0.h"
#include "Game/Class_10E7C3BC.h"
#include "Game/Class_10E7C3C8.h"
#include "Game/Class_10E7C3D4.h"
#include "Game/Class_10E7C3E0.h"
#include "Game/Class_10E7C404.h"
#include "Game/Class_10E7C410.h"
#include "Game/Class_10E7C41C.h"

extern void* DAT_10e7ae9c[];

extern void* DAT_10e6f614[];

class Class_10E7AE9C
{
public:
    Class_10E7AE9C* Init();

    void** Unknown00;        // +0x00: DAT_10e7ae9c
    float Unknown04;
    int Unknown08;
    void** Unknown0C;        // +0x0c: DAT_10e6f614
    char Unknown10[0x3C];
    float Unknown4C;
};

// FUNCTION: 0x10B29810 ?Init@Class_10E7AE9C@@QAEPAV1@XZ
Class_10E7AE9C* Class_10E7AE9C::Init()
{
    Unknown04 = 1.0f;
    Unknown08 = 0;
    Unknown0C = DAT_10e6f614;
    Unknown4C = 32767.0f;
    Unknown00 = DAT_10e7ae9c;
    return this;
}
