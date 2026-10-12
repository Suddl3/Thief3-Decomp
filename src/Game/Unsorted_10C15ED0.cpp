// Game/Unsorted_10C15ED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C15E60.h"
#include "Game/Class_10C16030.h"
#include "Game/Class_10C161F0.h"
#include "Game/Struct_10C161F0.h"

// FUNCTION: 0x10C161B0 ?FUN_10c161b0@Class_10C161F0@@QAE_NPAUStruct_10C161F0@@@Z
bool Class_10C161F0::FUN_10c161b0(Struct_10C161F0* Source)
{
    if (!m_ById.FUN_10c15f90(Source->Unknown10, Source))
        return false;
    return Unknown4014.FUN_10c15dc0(Source->Unknown08 + Source->Unknown04, Source);
}
