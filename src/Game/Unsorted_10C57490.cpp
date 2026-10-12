// Game/Unsorted_10C57490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10C592B0.h"
#include "Game/Class_10C57530_Unknown18.h"
#include "Game/Class_10C59030.h"
#include "Game/Class_10C59030_Value.h"
#include "Game/Class_10C592B0_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C57530 ?FUN_10c57530@Class_10C59030@@QAEIABVClass_109081E0@@ABVClass_10C59030_Value@@@Z
unsigned int Class_10C59030::FUN_10c57530(const Class_109081E0& Key, const Class_10C59030_Value& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c57620(Unknown0C * 2);
    Class_10C592B0_Node* Node = new(0, 0, 0, 0, 0) Class_10C592B0_Node;
    Node->Key = Key.Unknown00;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}
