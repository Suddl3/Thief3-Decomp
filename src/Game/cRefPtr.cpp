// Game/cRefPtr.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cRefPtr.h"
#include "Game/Class_10AC14F0.h"
#include "Game/Class_10AC2600.h"
#include "Game/Class_10AC3BF0.h"
#include "Game/Class_10E6F388.h"
#include "Game/Class_10E6F4B4.h"
#include "Game/Object_10AB5B20.h"
#include "Game/Struct_10AC1830.h"
#include "Game/Class_10AC1830.h"

class Object_10AB5B20;

// FUNCTION: 0x10AB5B00 ?NotEqual@cRefPtr@@QAE_NABV1@@Z
bool cRefPtr::NotEqual(const cRefPtr& Other)
{
    return m_Object != Other.m_Object;
}

// FUNCTION: 0x10AB5B20 ?Copy@cRefPtr@@QAE?AV1@XZ
cRefPtr cRefPtr::Copy()
{
    return *this;
}
