// Game/cConversationManager_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class cConversationManager;

class Class_10A82F30
{
public:
    Class_10A82F30(cConversationManager* Owner);

    char Unknown00[0x74];
};

class cConversationManager
{
public:
    virtual Class_10A82F30* FUN_10a12dd0();
};

// FUNCTION: 0x10A12DD0 ?FUN_10a12dd0@cConversationManager@@UAEPAVClass_10A82F30@@XZ
Class_10A82F30* cConversationManager::FUN_10a12dd0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10A82F30* Result = new(0, 0, 0, 0, 0) Class_10A82F30(this);
    GetAllocator()->Virtual9();
    return Result;
}
