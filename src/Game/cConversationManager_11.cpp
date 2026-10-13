// Game/cConversationManager_11.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B26930.h"
#include "Game/Class_10E6C364.h"

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class cConversationManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual Class_10E6C364* FUN_10a12e80(int A);
};

// FUNCTION: 0x10A12E80 ?FUN_10a12e80@cConversationManager@@UAEPAVClass_10E6C364@@H@Z
Class_10E6C364* cConversationManager::FUN_10a12e80(int A)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C364* Result = new(0, 0, 0, 0, 0) Class_10E6C364();
    GetAllocator()->Virtual9();
    ((Class_10B26930*)Result)->FUN_10b26930(A);
    return Result;
}
