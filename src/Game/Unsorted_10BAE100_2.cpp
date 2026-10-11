// Game/Unsorted_10BAE100_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAEC00.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

extern void* DAT_10e8d7c0[];

// The element: 0x14 bytes, its first word the vtable (the element's constructor stores only that).
class Class_10E8D7C0
{
public:
    void* VTable;
    char Pad04[0x10];
};

// FUNCTION: 0x10BAE100 ?FUN_10bae100@Class_10BAEC00@@QAEXH@Z
void Class_10BAEC00::FUN_10bae100(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10E8D7C0);
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity) {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10E8D7C0), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10E8D7C0);
        Unknown08 = Block;
    }
    else if (NewCount <= Capacity - 16) {
        if (NewCount == 0) {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10E8D7C0), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10E8D7C0);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++) {
        Class_10E8D7C0* Element = (Class_10E8D7C0*)((char*)Unknown08 + j * sizeof(Class_10E8D7C0));
        if (Element)
            Element->VTable = DAT_10e8d7c0;
    }
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}
