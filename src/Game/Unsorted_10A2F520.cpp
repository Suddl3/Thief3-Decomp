// Game/Unsorted_10A2F520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A905A0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E66320 : public Class_10A905A0
{
public:
    virtual ~Class_10E66320();
    virtual Class_10E66320* Virtual1();
    virtual int FUN_10a2f0c0(Class_10E66320* Other);
    virtual bool FUN_10a2f0f0(int p1);
    virtual void FUN_109b1f50(FString* p1);
    virtual FString* GetName();
    virtual void Virtual5();

    Class_10E66320();

    FString m_Name;
    int m_HasName;
    int Unknown14;
};

// FUNCTION: 0x10A2F520 ?Virtual1@Class_10E66320@@UAEPAV1@XZ
Class_10E66320* Class_10E66320::Virtual1()
{
    Class_10E66320* Copy = new(0, 0, 0, 0, 0) Class_10E66320;
    Copy->FUN_109b1f50(GetName());
    return Copy;
}
