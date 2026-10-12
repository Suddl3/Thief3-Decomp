// Game/Unsorted_1090EED0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1090F080.h"
#include "Game/Class_1090F080_Node.h"
#include "Game/Class_1090FF70.h"

// FUNCTION: 0x1090FC80 ?Empty@Class_1090FF70@@QAEXH@Z
void Class_1090FF70::Empty(int Size)
{
    for (int i = 0; i < m_Size; i++)
    {
        Class_1090F080_Node* Node = m_Table[i];
        while (Node)
        {
            Class_1090F080_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            Node = Next;
        }
    }
    m_Count = 0;
    m_Size = 0;
    m_Collisions = 0;
    ::operator delete(m_Table);
    m_Table = 0;
    if (!m_NoResize)
        Rehash(Size);
}
