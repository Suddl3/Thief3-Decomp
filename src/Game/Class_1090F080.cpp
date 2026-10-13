// Game/Class_1090F080.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090F080.h"
#include "Game/cString.h"
#include "Game/Class_1090F080_Node.h"
#include "Game/Class_1090F080_Field18.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x1090F080 ?Insert@Class_1090F080@@QAEIABVcString@@ABH@Z
unsigned int Class_1090F080::Insert(const cString& Key, const int& Value)
{
    if (!m_NoResize && m_Collisions > m_Size * 0.2)
        Rehash(m_Size * 2);
    Class_1090F080_Node* Node = new(0, 0, 0, 0, 0) Class_1090F080_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_Bits) - 1);
    }
    if (m_Table[Index])
        m_Collisions++;
    Node->Next = m_Table[Index];
    m_Table[Index] = Node;
    m_Count++;
    return Index;
}

// FUNCTION: 0x1090F1E0 ?Rehash@Class_1090F080@@QAEXH@Z
void Class_1090F080::Rehash(int NewSize)
{
    int OldSize = Size;
    Class_1090F080_Node** OldTable = Table;
    Table = (Class_1090F080_Node**)operator new(NewSize * sizeof(Class_1090F080_Node*), 0, 0, 0, 0, 0);
    Size = NewSize;
    Bits = 0;
    while (NewSize >>= 1)
        Bits++;
    Count = 0;
    Collisions = 0;
    for (int i = 0; i < Size; i++)
        Table[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_1090F080_Node* Node = OldTable[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_1090F080_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}

// FUNCTION: 0x1090FB70 ?Remove@Class_1090F080@@QAE_NABVcString@@@Z
bool Class_1090F080::Remove(const cString& Key)
{
    if (!m_NoResize && m_Count < m_Size * 0.05 && m_Size > 64)
        Rehash(m_Size / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_Bits) - 1);
    }
    for (Class_1090F080_Node* Node = m_Table[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (m_KeyTraits.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                m_Collisions--;
            if (!Prev)
                m_Table[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            m_Count--;
            delete Node;
            return true;
        }
    }
    return false;
}
