// Game/Unsorted_1094E150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10939570.h"
#include "Game/Class_1094E150.h"

class Class_10953590;

extern Class_10939570* DAT_10f323fc;

struct Struct_1094E150_Item
{
    Class_10953590* Unknown00;
};

// FUNCTION: 0x1094E150 ?DeleteItems@Class_1094E150@@QAEXXZ
void Class_1094E150::DeleteItems()
{
    for (int i = 0; i < m_Count; i++)
    {
        DAT_10f323fc->FUN_1093bce0(m_Items[i]->Unknown00);
        if (m_Items[i])
            delete m_Items[i];
        m_Items[i] = 0;
    }
}
