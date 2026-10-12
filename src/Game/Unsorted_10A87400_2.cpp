// Game/Unsorted_10A87400_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A873D0.h"
#include "Game/Class_10A87F40.h"

struct Class_10A87C00_Node
{
    Class_10A87C00_Node* Next;
    Class_10A87C00_Node* Prev;
};

class Class_10A87C00
{
public:
    ~Class_10A87C00();

    int Count;
    Class_10A87C00_Node* Head;
    Class_10A87C00_Node* Tail;
    Class_10A873D0 m_Index;
};

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A87C00 ??1Class_10A87C00@@QAE@XZ
Class_10A87C00::~Class_10A87C00()
{
    while (Head)
    {
        Class_10A87C00_Node* Node = Head;
        Head = Node->Next;
        if (Tail == Node)
            Tail = Node->Prev;
        if (Node->Next)
            Node->Next->Prev = Node->Prev;
        if (Node->Prev)
            Node->Prev->Next = Node->Next;
        Node->Next = (Class_10A87C00_Node*)-1;
        Node->Prev = (Class_10A87C00_Node*)-1;
        Count--;
        delete Node;
    }
    m_Index.Reset(0x40);
}

// FUNCTION: 0x10A87F40 ?Clear@Class_10A87F40@@QAEXXZ
void Class_10A87F40::Clear()
{
    FUN_10a87cd0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        Unknown04 = 0;
    }
}
