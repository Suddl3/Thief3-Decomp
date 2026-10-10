// Game/Unsorted_10B3AD90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A174E0.h"
#include "Game/Class_10B3AD90.h"

extern const char DAT_10e78dc4[];

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

// FUNCTION: 0x10B3AD90 ?FUN_10b3ad90@Class_10B3AD90@@QAEXH@Z
void Class_10B3AD90::FUN_10b3ad90(int A)
{
    FUN_10a18230()->Virtual3(DAT_10e78dc4);
}
