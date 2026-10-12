// Game/Unsorted_1090EED0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090F080_Field18.h"
#include "Game/Class_1090F080.h"
#include "Game/cString.h"
#include "Game/Class_1090F080_Node.h"

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
