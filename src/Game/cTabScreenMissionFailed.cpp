// Game/cTabScreenMissionFailed.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

cString FUN_1090a660(const char* Text);

class cTabScreenMissionFailed
{
public:
    cString GetTitle();
};

// FUNCTION: 0x10B5C2A0 ?GetTitle@cTabScreenMissionFailed@@QAE?AVcString@@XZ
cString cTabScreenMissionFailed::GetTitle()
{
    cString Local = FUN_1090a660("<string=T_TabScreenMissionFailedTitle>");
    return Local;
}
