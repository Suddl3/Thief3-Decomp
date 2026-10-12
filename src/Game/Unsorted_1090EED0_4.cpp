// Game/Unsorted_1090EED0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090F080_Field18.h"
#include "Game/Class_1090F080.h"

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_1090F080_Node
{
public:
    Class_109081E0 Key;
    int Value;
    Class_1090F080_Node* Next;
};

// FUNCTION: 0x1090FB70 ?Remove@Class_1090F080@@QAE_NABVClass_109081E0@@@Z
bool Class_1090F080::Remove(const Class_109081E0& Key)
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
