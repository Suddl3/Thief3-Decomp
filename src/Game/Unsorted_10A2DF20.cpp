// Game/Unsorted_10A2DF20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A174E0.h"
#include "Game/Class_10A2E400.h"
#include "Game/Class_10A2E430.h"
#include "Game/Class_10A2EE30.h"

int FUN_10a2e900(void* p1);

extern void* DAT_10f39f34;

extern const char DAT_10e662b4[];

enum EFindName
{
    FNAME_Find = 0,
    FNAME_Add = 1
};

class FName
{
public:
    FName(const char* Name, EFindName FindType = FNAME_Add);

    unsigned long Value;
};

Class_10A174E0* FUN_10a18230();

// FUNCTION: 0x10A2E400 ?CacheGameDayIndex@Class_10A2E400@@QAEXXZ
void Class_10A2E400::CacheGameDayIndex()
{
    m_GameDayIndex = FUN_10a18230()->Virtual0(FName(DAT_10e662b4));
}

// FUNCTION: 0x10A2E430 ?MatchesMask@Class_10A2E430@@QAE_NI@Z
bool Class_10A2E430::MatchesMask(unsigned Mask)
{
    if (m_BitIndex == 0xFFFFFFFF)
        return true;
    if (m_BitIndex >= 32)
        return false;
    return (Mask & (1 << m_BitIndex)) != 0;
}

// FUNCTION: 0x10A2E4B0 ?FUN_10a2e4b0@@YAXXZ
void FUN_10a2e4b0()
{
    if (DAT_10f39f34)
    {
        delete DAT_10f39f34;
        DAT_10f39f34 = 0;
    }
}

// FUNCTION: 0x10A2ED30 ?FUN_10a2ed30@@YAHPAX@Z
int FUN_10a2ed30(void* p1)
{
    if (!p1)
        return -1;
    return FUN_10a2e900(p1);
}

// FUNCTION: 0x10A2EE30 ?Init@Class_10A2EE30@@QAEPAV1@XZ
Class_10A2EE30* Class_10A2EE30::Init()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = -1;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    return this;
}
