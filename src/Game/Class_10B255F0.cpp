// Game/Class_10B255F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10B1B8A0_List.h"
#include "Game/Class_10B1B8A0.h"
#include "Game/Struct_10B1B8A0_Item.h"

class Class_10B1B8A0;

Class_10B1B8A0* FUN_10b1b600();

class Class_10B255F0
{
public:
    int GetSelectedValue();

    char Unknown00[4];
    int m_ItemIndex;
    char Unknown08[8];
    int m_UseListA;
};

// FUNCTION: 0x10B24F00 ?GetSelectedValue@Class_10B255F0@@QAEHXZ
int Class_10B255F0::GetSelectedValue()
{
    if (m_ItemIndex)
    {
        if (m_UseListA)
        {
            Class_10B1B8A0* List = FUN_10b1b600();
            Struct_10B1B8A0_List& Items = List->ListA;
            int Index = m_ItemIndex;
            if (Index < Items.Count)
            {
                Struct_10B1B8A0_List& Entries = FUN_10b1b600()->ListA;
                return Entries.Data[Index].Unknown04;
            }
        }
        else
        {
            Class_10B1B8A0* List = FUN_10b1b600();
            Struct_10B1B8A0_List& Items = List->ListB;
            int Index = m_ItemIndex;
            if (Index < Items.Count)
            {
                Struct_10B1B8A0_List& Entries = FUN_10b1b600()->ListB;
                return Entries.Data[Index].Unknown04;
            }
        }
    }
    return 0;
}
