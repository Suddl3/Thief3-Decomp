// Game/Unsorted_10947530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109481D0.h"
#include "Game/Class_109475E0.h"
#include "Game/cIntArray.h"

struct Struct_109481D0
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x109475E0 ??1Class_109475E0@@QAE@XZ
Class_109475E0::~Class_109475E0()
{
}

// FUNCTION: 0x109481D0 ?HasFlags@Class_109481D0@@QAE_NH@Z
bool Class_109481D0::HasFlags(int Mask)
{
    if (UnknownB0)
    {
        if (UnknownB0->Unknown04 & Mask)
            return true;
    }
    return false;
}
