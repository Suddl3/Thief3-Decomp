// Game/Unsorted_10914D80_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10914D80.h"
#include "Game/Class_10914D80_Node.h"
#include "Game/Class_10915830.h"

// FUNCTION: 0x109154F0 ?Clear@Class_10915830@@QAEXH@Z
void Class_10915830::Clear(int Size)
{
    for (int i = 0; i < m_Size; i++)
    {
        Class_10914D80_Node* Node = m_Table[i];
        while (Node)
        {
            Class_10914D80_Node* Next = Node->Next;
            Node->Key.~cString();
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
