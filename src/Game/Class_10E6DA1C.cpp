// Game/cConGoalCompleteEvent.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/cConGoalCompleteEvent.h"

extern char DAT_10e6c0f0[];

extern char DAT_10e6da0c[];

extern "C" int fprintf(FILE* File, const char* Format, ...);

// FUNCTION: 0x10AAB080 ?Print@cConGoalCompleteEvent@@UAEHPAU_iobuf@@H@Z
int cConGoalCompleteEvent::Print(FILE* File, int Param)
{
    fprintf(File, DAT_10e6c0f0, DAT_10e6da0c, GetName().Unknown00);
    return 1;
}
