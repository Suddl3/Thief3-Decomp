// Game/Class_10E6C470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E6C470.h"

// The game's cIntArray drops the first element in place; the shared header
// only declares the method.
class cIntArray_List : public cIntArray
{
public:
    void RemoveFirst()
    {
        int Rest = Count - 1;
        if (Rest != 0)
            memmove(Data, Data + 1, Rest * 4);
        SetCount(Count - 1);
    }
};

// FUNCTION: 0x10A88D40 ??1Class_10E6C470@@UAE@XZ
Class_10E6C470::~Class_10E6C470()
{
    while (Unknown7FC.Count > 0)
    {
        // The array holds pointers, cIntArray types its data as int*.
        void* First = ((void**)Unknown7FC.Data)[0];
        ((cIntArray_List*)&Unknown7FC)->RemoveFirst();
        operator delete(First);
    }
}

// FUNCTION: 0x10A88E10 ??_GClass_10E6C470@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A88D40's definition in this unit.
