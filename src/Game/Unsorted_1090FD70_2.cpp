// Game/Unsorted_1090FD70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10910040.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// The element: 8 bytes, two ints; shrinking calls its method on each one dropped.
class Class_1090ECF0
{
public:
    void FUN_1090ecf0();

    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x1090FD70 ?FUN_1090fd70@Class_10910040@@QAEXH@Z
void Class_10910040::FUN_1090fd70(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_1090ECF0);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_1090ECF0* Element = (Class_1090ECF0*)((char*)Unknown08 + i * sizeof(Class_1090ECF0));
        Element->FUN_1090ecf0();
    }
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_1090ECF0), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_1090ECF0);
        Unknown08 = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_1090ECF0), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_1090ECF0);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_1090ECF0* Element = (Class_1090ECF0*)((char*)Unknown08 + j * sizeof(Class_1090ECF0));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
        }
    }
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}
