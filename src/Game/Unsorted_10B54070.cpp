// Game/Unsorted_10B54070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B16D80.h"
#include "Game/Class_10BFBD70.h"

void* FUN_10b154c0();

struct Struct_10C08690;

class Class_10B542D0
{
public:
    Class_10B542D0()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = 0;
    }
    ~Class_10B542D0();

    int Unknown00;
    int Unknown04;
    Class_10BFBD70 Unknown08;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x10B542D0 ??1Class_10B542D0@@QAE@XZ
Class_10B542D0::~Class_10B542D0()
{
    ((Class_10B16D80*)FUN_10b154c0())->FUN_10b16d80(0);
    Unknown14 = 0;
    Unknown18 = 0;
}
