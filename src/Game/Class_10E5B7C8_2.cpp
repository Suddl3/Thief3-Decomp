// Game/Class_10E5B7C8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B7C8.h"

struct Struct_109E4FB0_Item
{
};

// FUNCTION: 0x109E4FB0 ?ClearItems@Class_10E5B7C8@@QAEXXZ
void Class_10E5B7C8::ClearItems()
{
    for (int i = 0; i < m_ItemCount; i++)
    {
        if (m_Items[i])
        {
            delete m_Items[i];
            m_Items[i] = 0;
        }
    }
}
