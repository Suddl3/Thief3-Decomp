// Game/cObjectArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cObjectArray.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

extern void* DAT_10e8d7c0[];

// The element: 0x14 bytes, its first word the vtable (the element's constructor stores only that).
class Class_10E8D7C0
{
public:
    void* VTable;
    char Pad04[0x10];
};

// FUNCTION: 0x10BAE100 ?SetCount@cObjectArray@@QAEXH@Z
void cObjectArray::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_BlockBytes / sizeof(Class_10E8D7C0);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity) {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10E8D7C0), 0, 0, 0, 0);
        m_BlockBytes = NewCapacity * sizeof(Class_10E8D7C0);
        m_Data = Block;
    }
    else if (NewCount <= Capacity - 16) {
        if (NewCount == 0) {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_BlockBytes = 0;
        }
        else {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10E8D7C0), 0, 0, 0, 0);
            m_BlockBytes = NewCapacity * sizeof(Class_10E8D7C0);
            m_Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++) {
        Class_10E8D7C0* Element = (Class_10E8D7C0*)((char*)m_Data + j * sizeof(Class_10E8D7C0));
        if (Element)
            Element->VTable = DAT_10e8d7c0;
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
