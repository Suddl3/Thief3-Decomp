// Game/cCheatHandler.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E81A60.h"
#include "Game/cCheatHandler.h"

extern void* DAT_10e80418[];

// FUNCTION: 0x10B40A00 ?Construct@cCheatHandler@@QAEPAV1@XZ
cCheatHandler* cCheatHandler::Construct()
{
    this->Class_10E81A60::Class_10E81A60();
    *(void***)this = DAT_10e80418;
    return this;
}
