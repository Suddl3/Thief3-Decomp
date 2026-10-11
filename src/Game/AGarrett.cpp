// Game/AGarrett.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10ABF100.h"
#include "Game/Class_10a46380.h"

Class_10ABF100* FUN_10abf0d0();

class AGarrett : public Class_10a46380
{
public:
    virtual int GetGoalCount();
};

// FUNCTION: 0x10B21AA0 ?GetGoalCount@AGarrett@@UAEHXZ
int AGarrett::GetGoalCount()
{
    if (FUN_10abf0d0()->FUN_10abf100())
        return CitySectionGoals.Num();
    return Class_10a46380::GetGoalCount();
}
