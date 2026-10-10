// Game/Unsorted_10A8A5B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D740.h"
#include "Game/UByteProperty.h"

class UProperty;

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E6C5D0
{
public:
    Class_10E6C5D0() : Unknown04(0) {}

    virtual ~Class_10E6C5D0();

    int Unknown04;
};

// FUNCTION: 0x10A8A5B0 ??_GClass_10E6C5D0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A8A620's definition in this unit.

// FUNCTION: 0x10A8A5D0 ??$Cast@VUByteProperty@@@@YAPAVUByteProperty@@PAVUObject@@@Z
template UByteProperty* Cast<UByteProperty>(UObject* Src);

// FUNCTION: 0x10A8A620 ?FUN_10a8a620@Class_10E5D740@@UAEPAVClass_10E6C5D0@@HH@Z
Class_10E6C5D0* Class_10E5D740::FUN_10a8a620(int A, int B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6C5D0* Result = new(0, 0, 0, 0, 0) Class_10E6C5D0;
    FUN_10905aa0()->Virtual9();
    return Result;
}
