// Game/cConversationManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cConversationManager.h"
#include "Game/Struct_10A13110.h"
#include "Game/Class_10919B80.h"
#include "Game/Class_10E5D548_Unknown10.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10CA8290.h"

class Class_10A80E60;

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

// FUNCTION: 0x10A12E60 ?FUN_10a12e60@cConversationManager@@UAEPAVClass_10919B80@@H@Z
Class_10919B80* cConversationManager::FUN_10a12e60(int A)
{
    Class_10919B80* Result = Virtual0();
    Result->SetField28(A);
    return Result;
}

// FUNCTION: 0x10A12FD0 ?FUN_10a12fd0@cConversationManager@@UAEXH@Z
void cConversationManager::FUN_10a12fd0(int Param)
{
    for (int i = 0; i < Unknown14; i++)
        Virtual14(Param, &Unknown1C[i]);
}

// FUNCTION: 0x10A13090 ?FUN_10a13090@cConversationManager@@UAEHH@Z
int cConversationManager::FUN_10a13090(int Param)
{
    for (int i = 0; i < m_ChildCount; i++)
        m_Children[i]->Virtual29(Param);
    return 1;
}

// FUNCTION: 0x10A130D0 ?FUN_10a130d0@cConversationManager@@UAEHH@Z
int cConversationManager::FUN_10a130d0(int Param)
{
    for (int i = 0; i < m_ChildCount; i++)
    {
        m_Children[i]->Virtual34(Param);
        m_Children[i]->Virtual30(Param);
    }
    return 1;
}

// FUNCTION: 0x10A13110 ?FindEntryByKey@cConversationManager@@UAEPAUStruct_10A13110@@H@Z
Struct_10A13110* cConversationManager::FindEntryByKey(int Key)
{
    for (int i = 0; i < m_EntryCount; i++)
    {
        if (m_Entries[i].Unknown00 == Key)
            return &m_Entries[i];
    }
    return 0;
}

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
