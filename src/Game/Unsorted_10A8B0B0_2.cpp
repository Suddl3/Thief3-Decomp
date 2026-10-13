// Game/Unsorted_10A8B0B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

class Object_10A8AC40;

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class cTriggerSoundSchemaParam
{
public:
    cTriggerSoundSchemaParam();

    virtual void Virtual0();
    virtual void Virtual1();
    virtual int IsRelated(int p1, cTriggerSoundSchemaParam* p2);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Reset();
    virtual void IncrementCount();
    virtual bool IsLimitReached();
    virtual void Virtual8();
    virtual int IsValid();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void CopyFrom(cTriggerSoundSchemaParam* Other);

    Object_10A8AC40* m_Schema;
    int Unknown08;
    char Pad0C[0x8];
    cString Unknown14;
};

class Class_10E5D744
{
public:
    virtual cTriggerSoundSchemaParam* FUN_10a8b0b0(int A, int B);
};

// FUNCTION: 0x10A8B0B0 ?FUN_10a8b0b0@Class_10E5D744@@UAEPAVcTriggerSoundSchemaParam@@HH@Z
cTriggerSoundSchemaParam* Class_10E5D744::FUN_10a8b0b0(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    cTriggerSoundSchemaParam* Result = new(0, 0, 0, 0, 0) cTriggerSoundSchemaParam;
    GetAllocator()->Virtual9();
    return Result;
}
