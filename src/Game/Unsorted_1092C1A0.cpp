// Game/Unsorted_1092C1A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1092BA00.h"
#include "Game/Struct_109296A0_Node.h"
#include "Game/Class_10939570.h"

// Game/Class_10939570.h copied whole, with the method the header lacks.
class Class_10953590;

// One list of a Class_109296A0 pair: the object at 0x10F31AB0 holds two of them, the second at +0xC.
class Class_1092C0A0
{
public:
    void Clear();

    Struct_109296A0_Node* m_Head;
    Struct_109296A0_Node* m_Tail;
    int m_Count;
};

extern Class_10939570* DAT_10f323fc;

extern Class_1092C0A0 DAT_10f31ab0;

extern Class_1092C0A0 DAT_10f31abc;

extern bool DAT_10f31aa4;

extern Class_1092BA00 DAT_10eff23c;

void FUN_1092bdb0(void* Node);

// FUNCTION: 0x1092C1C0 ?FUN_1092c1c0@@YAXXZ
void FUN_1092c1c0()
{
    DAT_10f323fc->FUN_1093b1f0();
    Struct_109296A0_Node* Node = DAT_10f31ab0.m_Head;
    while (Node)
    {
        Struct_109296A0_Node* Next = Node->Unknown10;
        FUN_1092bdb0(Node);
        if (Node->Unknown0C == 0)
            DAT_10f31ab0.m_Head = Node->Unknown10;
        else
            Node->Unknown0C->Unknown10 = Node->Unknown10;
        if (Node->Unknown10 == 0)
            DAT_10f31ab0.m_Tail = Node->Unknown0C;
        else
            Node->Unknown10->Unknown0C = Node->Unknown0C;
        DAT_10f31ab0.m_Count--;
        Struct_109296A0_Node* Last = DAT_10f31abc.m_Tail;
        DAT_10f31abc.m_Tail = Node;
        if (Last == 0)
            DAT_10f31abc.m_Head = Node;
        else
            Last->Unknown10 = Node;
        Node->Unknown10 = 0;
        Node->Unknown0C = Last;
        DAT_10f31abc.m_Count++;
        Node = Next;
    }
    DAT_10f31ab0.Clear();
    DAT_10f31abc.Clear();
    DAT_10eff23c.Clear(0x40);
    DAT_10f31aa4 = false;
}
