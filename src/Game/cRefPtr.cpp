// Game/cRefPtr.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cRefPtr.h"

class Object_10AB5B20;

// FUNCTION: 0x10AB5B00 ?NotEqual@cRefPtr@@QAE_NABV1@@Z
bool cRefPtr::NotEqual(const cRefPtr& Other)
{
    return m_Object != Other.m_Object;
}
