// Game/Class_10915830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10914D80.h"
#include "Game/Class_10914D80_Node.h"
#include "Game/Class_10915830.h"
#include "Game/Class_10915210.h"
#include "Game/Class_109169E0.h"
#include "Game/Class_10916CA0.h"
#include "Game/Class_109242E0.h"
#include "Game/Class_10924E80.h"

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

// FUNCTION: 0x10915830 ?Free@Class_10915830@@QAEXXZ
void Class_10915830::Free()
{
    Clear(0x40);
    ::operator delete(m_Table);
    m_Count = 0;
    m_Size = 0;
    m_Table = 0;
    m_Collisions = 0;
}
