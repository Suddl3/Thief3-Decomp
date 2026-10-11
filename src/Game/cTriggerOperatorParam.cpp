// Game/cTriggerOperatorParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerOperatorParam.h"

// FUNCTION: 0x10A8D2D0 ?TestRelation@cTriggerOperatorParam@@UAEHHPAV1@@Z
int cTriggerOperatorParam::TestRelation(int A, cTriggerOperatorParam* B)
{
    switch (A)
    {
    case 1:
        return B->Unknown04 == Unknown04;
    case 6:
        return B->Unknown04 != Unknown04;
    }
    return 0;
}
