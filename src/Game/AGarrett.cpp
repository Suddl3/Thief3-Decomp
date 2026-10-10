// Game/AGarrett.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10ABF100.h"
#include "Game/Class_10a46380.h"

Class_10ABF100* FUN_10abf0d0();

class AGarrett : public Class_10a46380
{
public:
    virtual int FUN_10b21aa0();
};

// FUNCTION: 0x10B21AA0 ?FUN_10b21aa0@AGarrett@@UAEHXZ
int AGarrett::FUN_10b21aa0()
{
    if (FUN_10abf0d0()->FUN_10abf100())
        return CitySectionGoals.Num();
    return FUN_10a46380();
}
