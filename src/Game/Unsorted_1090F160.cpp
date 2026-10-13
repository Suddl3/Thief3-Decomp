// Game/Unsorted_1090F160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090FD40.h"

extern const char DAT_10e47660[];

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x1090F160 ?FUN_1090f160@Class_1090FD40@@QAEHABVcString@@@Z
int Class_1090FD40::FUN_1090f160(const cString& Name)
{
    for (int i = 0; i < m_Count; i++)
    {
        const char* Want = Name.Unknown00 ? Name.Unknown00 : DAT_10e47660;
        const char* Have = m_Items[i].Unknown00 ? m_Items[i].Unknown00 : DAT_10e47660;
        if (strcmp(Have, Want) == 0)
            return i;
    }
    return -1;
}
