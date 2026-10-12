// Game/Unsorted_10915B30_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10915D50_Field18.h"
#include "Game/Class_10915D50.h"

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();
    cString& operator=(const cString& Other);

    char* Unknown00;
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10915D50_Node
{
public:
    cString Key;
    int Value;
    Class_10915D50_Node* Next;
};

// FUNCTION: 0x10916A70 ?Remove@Class_10915D50@@QAE_NABVcString@@@Z
bool Class_10915D50::Remove(const cString& Key)
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
    for (Class_10915D50_Node* Node = m_Table[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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
