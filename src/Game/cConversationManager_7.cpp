// Game/cConversationManager_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10CA8290.h"
#include "Game/cConversationManager.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e5d498[];

class Class_109022E0;

class Class_10A84CE0 : public Class_10CA8290
{
public:
    void FUN_10a84ce0(const Class_109022E0& A);
};

class cFlagElementLogic : public Class_10A84CE0
{
public:
    cFlagElementLogic()
    {
        VTable = DAT_10e5d498;
    }

    void** VTable;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A13600 ?FUN_10a13600@cConversationManager@@UAEPAVcFlagElementLogic@@ABVClass_109022E0@@M@Z
cFlagElementLogic* cConversationManager::FUN_10a13600(const Class_109022E0& A, float B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    cFlagElementLogic* Result = new(0, 0, 0, 0, 0) cFlagElementLogic;
    FUN_10905aa0()->Virtual9();
    Result->FUN_10a84ce0(A);
    Result->FUN_10ca8290(B);
    return Result;
}
