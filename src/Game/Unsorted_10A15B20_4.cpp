// Game/Unsorted_10A15B20_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15D50.h"
#include "Game/Class_10A15D50_Node.h"
#include "Game/Class_10A15D50_Unknown18.h"
#include "Game/Struct_10A15D50_Value.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10A15D50 ?FUN_10a15d50@Class_10A15D50@@QAEIABHABUStruct_10A15D50_Value@@@Z
unsigned int Class_10A15D50::FUN_10a15d50(const int& Key, const Struct_10A15D50_Value& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10a15e20(Unknown0C * 2);
    Class_10A15D50_Node* Node = new(0, 0, 0, 0, 0) Class_10A15D50_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}
