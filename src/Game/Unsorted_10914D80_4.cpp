// Game/Unsorted_10914D80_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10914D80.h"
#include "Game/Class_10914D80_Field18.h"
#include "Game/Class_10914D80_Node.h"
#include "Game/Class_10915210.h"
#include "Game/Class_109169E0.h"

class Class_1090A780;

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x109152A0 ?FUN_109152a0@Class_10915210@@QAEXABVClass_1090A780@@H@Z
void Class_10915210::FUN_109152a0(const Class_1090A780& Name, int B)
{
    Class_109169E0* Obj = FUN_10915210(Name);
    if (Obj)
        Obj->FUN_109172f0(B);
}

// FUNCTION: 0x109153E0 ?Remove@Class_10914D80@@QAE_NABVcString@@@Z
bool Class_10914D80::Remove(const cString& Key)
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
    for (Class_10914D80_Node* Node = m_Table[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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
            Node->Key.~cString();
            ::operator delete(Node);
            return true;
        }
    }
    return false;
}
