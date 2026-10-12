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

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A1ED50 ??1cTaggedAnimSeq@@UAE@XZ
cTaggedAnimSeq::~cTaggedAnimSeq()
{
    if (m_Name)
    {
        int* Obj = m_Name - 1;
        GetAllocator()->Virtual5(Obj);
        m_Name = 0;
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

// FUNCTION: 0x10A1F880 ?GetAt@Class_10A1F880@@QAEHH@Z
int Class_10A1F880::GetAt(int Index)
{
    if (Index >= 0 && Index < m_Count)
        return m_Values[Index];
    return 0;
}
