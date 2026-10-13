// Game/Unsorted_10A1F0C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E65558.h"
#include "Game/Class_10905A90_Member.h"

class Class_1090A780;

class Class_10A1F150;

class cTaggedAnimSeq : public Class_10E65558
{
public:
    virtual ~cTaggedAnimSeq();
    virtual Class_1090A780 GetName();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool SetName(Class_10A1F150* Item);
    virtual void Play(void* A);

    cTaggedAnimSeq();

    int* m_Name;
    int Unknown08;
    int Unknown0C;
};

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A1F0C0 ?CreateTaggedAnimSeq@@YAPAVcTaggedAnimSeq@@XZ
cTaggedAnimSeq* CreateTaggedAnimSeq()
{
    GetAllocator()->Virtual8(0, 0);
    cTaggedAnimSeq* Result = new(0, 0, 0, 0, 0) cTaggedAnimSeq;
    GetAllocator()->Virtual9();
    return Result;
}
