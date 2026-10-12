// Game/Unsorted_10C40890.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C56E40_Field00.h"

// Class_10C56E40 as its header declares it, with the copy constructor and
// assignment the header lacks: a copy takes a reference (Virtual1), and a
// replaced or destroyed handle drops one (Virtual2).
class Class_10C56E40
{
public:
    Class_10C56E40(Class_10C56E40_Field00* P)
    {
        Unknown00 = P;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    ~Class_10C56E40()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }
    Class_10C56E40() : Unknown00(0) {}
    Class_10C56E40(const Class_10C56E40& Other)
    {
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    Class_10C56E40& operator=(const Class_10C56E40& Other)
    {
        Class_10C56E40_Field00* Old = Unknown00;
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
        if (Old)
            Old->Virtual2();
        return *this;
    }

    Class_10C56E40_Field00* Unknown00;
};

// A 12-byte heap element: a handle, an int, then a float key.
struct Struct_10C40950
{
    Class_10C56E40 Unknown00;
    int Unknown04;
    float Unknown08;
};

// FUNCTION: 0x10C40950 ?PushHeapEntry@@YAXPAUStruct_10C40950@@HHVClass_10C56E40@@HM@Z
void PushHeapEntry(Struct_10C40950* Heap, int Hi, int Lo, Class_10C56E40 Value, int Data, float Key)
{
    int Parent = (Hi - 1) / 2;
    while (Lo < Hi)
    {
        if (!(Heap[Parent].Unknown08 < Key))
            break;
        Heap[Hi] = Heap[Parent];
        Hi = Parent;
        Parent = (Hi - 1) / 2;
    }
    Heap[Hi].Unknown00 = Value;
    Heap[Hi].Unknown04 = Data;
    Heap[Hi].Unknown08 = Key;
}
