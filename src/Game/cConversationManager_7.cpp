// Game/cConversationManager_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10CA8290.h"
#include "Game/cConversationManager.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e5d498[];

class Class_109022E0;

class Class_10A84CE0 : public Class_10CA8290
{
public:
    void SetFlagName(const Class_109022E0& A);
};

class cFlagElementLogic : public Class_10A84CE0
{
public:
    cFlagElementLogic()
    {
        VTable = DAT_10e5d498;
    }

    void** VTable;
    int m_FlagName;
    int m_ExpectedValue;
};

// FUNCTION: 0x10A13600 ?CreateFlagElement@cConversationManager@@UAEPAVcFlagElementLogic@@ABVClass_109022E0@@M@Z
cFlagElementLogic* cConversationManager::CreateFlagElement(const Class_109022E0& A, float B)
{
    GetAllocator()->Virtual8(0, 0);
    cFlagElementLogic* Result = new(0, 0, 0, 0, 0) cFlagElementLogic;
    GetAllocator()->Virtual9();
    Result->SetFlagName(A);
    Result->FUN_10ca8290(B);
    return Result;
}
