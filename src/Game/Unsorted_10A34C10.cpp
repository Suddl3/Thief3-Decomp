// Game/Unsorted_10A34C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A34C10.h"
#include "Game/Class_10A34C10_Field18.h"
#include "Game/Class_10A34C10_Node.h"

unsigned int HashBytes(const void* Data, int Length);

class Class_10A34C10_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10A34C10 ?InsertOrAssign@Class_10A34C10@@QAEIABVClass_109081E0@@PAPAVClass_10A34C10_Unknown10@@@Z
unsigned int Class_10A34C10::InsertOrAssign(const Class_109081E0& Key, Class_10A34C10_Unknown10** Value)
{
    const void* Data;
    int Length;
    m_KeyOps.Virtual0(Key, &Data, &Length);
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    if (!Unknown14)
        return (unsigned int)-1;
    for (Class_10A34C10_Node* Node = Unknown14[Index]; Node; Node = Node->Next)
    {
        if (m_KeyOps.Virtual1(Key, Node->Key) == 0)
        {
            Class_10A34C10_Unknown10* New = *Value;
            Class_10A34C10_Unknown10* Old = Node->Unknown10;
            Node->Unknown10 = New;
            if (New)
                New->Virtual1();
            if (Old)
                Old->Virtual2();
            return Index;
        }
    }
    return FUN_10a348e0(Key, Value);
}
