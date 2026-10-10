// Game/Class_10E6C740.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C740.h"
#include "Game/Class_10E6C740_Member.h"

// FUNCTION: 0x10A8C950 ?FUN_10a8c950@Class_10E6C740@@UAEHHPBV1@@Z
int Class_10E6C740::FUN_10a8c950(int A, const Class_10E6C740* B)
{
    switch (A)
    {
    case 1:
        return (Unknown04 && (Unknown08 == Unknown04->Unknown38 || B->Unknown08 == Unknown04->Unknown38))
            || B->Unknown08 == Unknown08;
    }
    return 0;
}
