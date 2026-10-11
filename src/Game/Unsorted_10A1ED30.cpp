// Game/Unsorted_10A1ED30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A1EDC0.h"
#include "Game/Class_10A1F880.h"
#include "Game/Class_10E65558.h"
#include "Game/cTaggedAnimSeq.h"

class Class_10D382EB {
public:
    void FUN_10d382eb();
};

struct Struct_10A1EDC0_Streambuf {
    int Unknown00;
    Class_10D382EB Unknown04;
};

struct Struct_10A1EDC0_Ios {
    char Unknown00[0x28];
    Struct_10A1EDC0_Streambuf* Unknown28;
};

struct Struct_10A1EDC0_Ostream : virtual Struct_10A1EDC0_Ios {
};

Class_10905A90_Member* FUN_10905aa0();

// FUNCTION: 0x10A1ED50 ??1cTaggedAnimSeq@@UAE@XZ
cTaggedAnimSeq::~cTaggedAnimSeq()
{
    if (Unknown04)
    {
        int* Obj = Unknown04 - 1;
        FUN_10905aa0()->Virtual5(Obj);
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10A1EDC0 ?FUN_10a1edc0@Class_10A1EDC0@@QAEXXZ
void Class_10A1EDC0::FUN_10a1edc0()
{
    Struct_10A1EDC0_Streambuf* Buf = Unknown00->Unknown28;
    if (Buf)
        Buf->Unknown04.FUN_10d382eb();
}

// FUNCTION: 0x10A1EE60 ??_GcTaggedAnimSeq@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A1ED50's definition in this unit.

// FUNCTION: 0x10A1F880 ?FUN_10a1f880@Class_10A1F880@@QAEHH@Z
int Class_10A1F880::FUN_10a1f880(int Index)
{
    if (Index >= 0 && Index < Unknown04)
        return Unknown0C[Index];
    return 0;
}
