// Game/Unsorted_10B76350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

int FUN_10af3690(const char* A, const char* B);

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

// FUNCTION: 0x10B76370 ?CompareNames@@YAHPAPAVFName@@0@Z
int CompareNames(FName** A, FName** B)
{
    return FUN_10af3690(*(*A)->FUN_10af9730(), *(*B)->FUN_10af9730());
}
