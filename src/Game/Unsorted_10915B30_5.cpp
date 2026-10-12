// Game/Unsorted_10915B30_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10915D50.h"
#include "Game/Class_10915D50_Node.h"
#include "Game/Class_10916CA0.h"

// FUNCTION: 0x10916B80 ?Clear@Class_10916CA0@@QAEXH@Z
void Class_10916CA0::Clear(int Size)
{
    for (int i = 0; i < m_Size; i++)
    {
        Class_10915D50_Node* Node = m_Table[i];
        while (Node)
        {
            Class_10915D50_Node* Next = Node->Next;
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
