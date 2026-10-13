// Game/Unsorted_10925DE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10925FC0.h"
#include "Game/Object_10AB5B20.h"
#include "Game/cRefPtr.h"

// FUNCTION: 0x10925FC0 ?GetRef@Class_10925FC0@@QAE?AVcRefPtr@@H@Z
cRefPtr Class_10925FC0::GetRef(int Index)
{
    return m_Refs[Index];
}
