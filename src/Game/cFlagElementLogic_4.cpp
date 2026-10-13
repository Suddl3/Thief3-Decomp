// Game/cFlagElementLogic_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

void ReadString(void* Reader, int* Out);

void ReadInt(void* Reader, int* Out);

extern const char DAT_10e47660[];

class cFlagElementLogic
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10a84b70(void* Reader, int A, int B);

    FName Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A84B70 ?FUN_10a84b70@cFlagElementLogic@@UAEXPAXHH@Z
void cFlagElementLogic::FUN_10a84b70(void* Reader, int A, int B)
{
    cString Text;
    ReadString(Reader, (int*)&Text);
    Unknown04 = FName(Text.Unknown00 ? Text.Unknown00 : DAT_10e47660, FNAME_Intrinsic);
    ReadInt(Reader, &Unknown08);
}
