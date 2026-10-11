// Game/Unsorted_10BDB3A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BDB3A0.h"

class Class_10c7d570_Result
{
public:
    char Unknown00[0x34];
    float Unknown34;
};

// FUNCTION: 0x10BDB3A0 ?FUN_10bdb3a0@Class_10BDB3A0@@QAE_NXZ
bool Class_10BDB3A0::FUN_10bdb3a0()
{
    Class_10BFF460* Obj = Unknown04->FUN_10bbb410();
    if (Obj)
    {
        if (Obj->FUN_10bff460())
        {
            FVector Vec = Obj->FUN_10bff360();
            Class_10c7d570_Result* Other = (Class_10c7d570_Result*)Unknown04->Unknown08->FUN_10c7d570();
            return Vec.Z - Other->Unknown34 > 64.0f ? 1 : 0;
        }
    }
    return false;
}
