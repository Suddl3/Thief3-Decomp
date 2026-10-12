// Game/Unsorted_10C15DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C15E60.h"
#include "Game/Class_10C15EB0.h"
#include "Game/Class_10C16030.h"
#include "Game/Class_10C161F0.h"
#include "Game/Struct_10C161F0.h"

class Class_10C15EB0_Member
{
public:
    char Unknown00[4];
    int Unknown04;
};

// FUNCTION: 0x10C15EB0 ?FUN_10c15eb0@Class_10C15EB0@@QAEHXZ
int Class_10C15EB0::FUN_10c15eb0()
{
    if (Unknown4018)
        return Unknown4018->Unknown04;
    return 0;
}

// FUNCTION: 0x10C161F0 ?Remove@Class_10C161F0@@QAEXPAUStruct_10C161F0@@@Z
void Class_10C161F0::Remove(Struct_10C161F0* Source)
{
    m_ById.FUN_10c16030(Source->Unknown10);
    Unknown4014.Remove(Source);
}
