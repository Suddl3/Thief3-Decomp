// Game/Unsorted_10A2F520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A905A0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Class_10E66320 as Game/Class_10E66320.h has it, except Virtual1 returns Class_10E66320* (the symbol's type).
class Class_10E66320 : public Class_10A905A0
{
public:
    virtual ~Class_10E66320();
    virtual Class_10E66320* Virtual1();
    virtual int FUN_10a2f0c0(Class_10E66320* Other);
    virtual bool FUN_10a2f0f0(int p1);
    virtual void FUN_109b1f50(FString* p1);
    virtual FString* FUN_10a2f510();

    Class_10E66320();

    FString Unknown04;
    int Unknown10;
};

// Game/Class_10E66350.h plus the Virtual1 override (slot 1) and FUN_10a2eeb0, a method called on Copy (ecx holds it).
class Class_10E66350 : public Class_10E66320
{
public:
    virtual ~Class_10E66350();
    virtual Class_10E66320* Virtual1();
    virtual int FUN_10a2f0c0(Class_10E66320* Other);

    Class_10E66350();
    void FUN_10a2eeb0(FString* Name, UBOOL* Found, FString* Source);

    int Unknown14;
    FString Unknown18;
    FString Unknown24;
    int Unknown30;
    int Unknown34;
};

// FUNCTION: 0x10A2F800 ?Virtual1@Class_10E66350@@UAEPAVClass_10E66320@@XZ
Class_10E66320* Class_10E66350::Virtual1()
{
    Class_10E66350* Copy = ::new(0, 0, 0, 0, 0) Class_10E66350();
    Copy->FUN_10a2eeb0(&Copy->Unknown18, &Copy->Unknown30, Unknown30 != 0 ? &Unknown18 : 0);
    Copy->FUN_10a2eeb0(&Copy->Unknown24, &Copy->Unknown34, Unknown34 != 0 ? &Unknown24 : 0);
    Copy->FUN_109b1f50(FUN_10a2f510());
    return Copy;
}
