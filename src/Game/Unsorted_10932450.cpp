// Game/Unsorted_10932450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/ListPool.h"
#include "Game/Class_10932760.h"
#include "Game/Class_10943600.h"
#include "Game/Class_10E49D14.h"

class Item_10943600;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Node_10932350
{
    char Unknown00[0xA8];
    Node_10932350* m_Prev;
    Node_10932350* m_Next;
};

class Class_109324C0 : public Node_10932350
{
public:
    Class_109324C0();

    char Unknown0B0[0x20];
};

// FUNCTION: 0x10932690 ??_GClass_10E49D14@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109326B0's definition in this unit.

// FUNCTION: 0x109326B0 ??1Class_10E49D14@@UAE@XZ
Class_10E49D14::~Class_10E49D14()
{
    FUN_10954ce0();
}

// FUNCTION: 0x10932760 ?Alloc@Class_10932760@@QAEPAUNode_10932350@@XZ
Node_10932350* Class_10932760::Alloc()
{
    Node_10932350* Node = m_FreeList.m_Head;
    if (Node)
        m_FreeList.Remove(Node);
    GetAllocator()->Virtual8(0, 0);
    if (!Node)
    {
        Node = new(0, 0, 0, 0, 0) Class_109324C0;
    }
    GetAllocator()->Virtual9();
    if (Node)
    {
        Node_10932350* Last = m_Tail;
        m_Tail = Node;
        if (!Last)
            m_Head = Node;
        else
            Last->m_Next = Node;
        Node->m_Prev = Last;
        Node->m_Next = 0;
        m_Count++;
    }
    return Node;
}
