// Game/Unsorted_10ACF9A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A174E0.h"
#include "Game/Class_10ACF9A0.h"

extern const char DAT_10e7080c[];

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

class Class_10B82390;

// FUNCTION: 0x10ACF9A0 ?CanLockpick@Class_10ACF9A0@@QAEHH@Z
int Class_10ACF9A0::CanLockpick(int A)
{
    if (!FUN_10a18230()->Virtual3(DAT_10e7080c))
        return 0;
    return FUN_10acf690(A) != 0;
}
