// Game/Class_109E2E70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_109E2E70.h"
#include "Game/Struct_109E2E70_Entry.h"
#include "Game/Struct_109E2E70_Node.h"

struct Struct_109E2E70_Node;

// FUNCTION: 0x109E2E70 ?FUN_109e2e70@Class_109E2E70@@QAE_NHPAVcIntArray@@_N@Z
bool Class_109E2E70::FUN_109e2e70(int Index, cIntArray* Out, bool Flag)
{
    if (Index < 0 || Index >= Unknown04.Count)
        return false;
    Struct_109E2E70_Entry* Entry = (Struct_109E2E70_Entry*)Unknown04.Data[Index];
    if (!Entry)
        return false;
    Struct_109E2E70_Node* Node = Entry->Unknown04;
    while (Node)
    {
        bool Take = Flag;
        if (!Take)
        {
            int Key;
            if (Node->Unknown08->GetPropertyValue(0x8004ef, &Key))
                Take = Key == 1;
        }
        if (Take)
        {
            int Slot = Out->Count;
            Out->SetCount(Slot + 1);
            Out->Data[Slot] = (int)Node->Unknown08;
        }
        Node = Node->Next;
    }
    return true;
}
