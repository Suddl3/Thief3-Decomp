// Game/cPtrArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A680C0.h"
#include "Game/cPtrArray.h"

// FUNCTION: 0x10A68CB0 ?Clear@cPtrArray@@QAEXXZ
void cPtrArray::Clear()
{
    for (int i = 0; i < m_Count; i++)
    {
        Class_10A680C0* Item = m_Items[i];
        if (Item)
        {
            Item->Empty();
            ::operator delete(Item);
        }
    }
    m_Count = 0;
}
