// Game/Unsorted_10A37F80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A38090.h"
#include "Game/Class_10EC1058.h"
#include "Game/cString.h"
#include "Game/Class_10A382D0.h"
#include "Game/Class_10A38340.h"

int FUN_10af36e0(const char* A, const char* B);

class Class_10A382D0_Item
{
public:
    const char* Unknown00;
};

// FUNCTION: 0x10A382D0 ?FindItemByName@Class_10A382D0@@QAEPAVClass_10A382D0_Item@@PAPBD@Z
Class_10A382D0_Item* Class_10A382D0::FindItemByName(const char** Name)
{
    for (int i = 0; i < m_ItemCount; i++)
    {
        Class_10A382D0_Item* Item = m_Items[i];
        const char* Want = *Name;
        if (!Want)
            Want = DAT_10e47660;
        const char* Have = Item->Unknown00;
        if (!Have)
            Have = DAT_10e47660;
        if (!FUN_10af36e0(Have, Want))
            return Item;
    }
    return 0;
}

// FUNCTION: 0x10A38340 ??0Class_10A38340@@QAE@XZ
Class_10A38340::Class_10A38340()
{
}
