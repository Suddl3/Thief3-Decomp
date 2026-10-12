// Game/Unsorted_10C08590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C08690.h"

class cIntArray
{
public:
    void RemoveAt(int Index);
    void FUN_10c08690(Struct_10C08690* Item);

    int FindIndex(Struct_10C08690* Item)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            if (Unknown08[i] == Item)
                return i;
        }
        return -1;
    }

    int Unknown00;
    int m_CapacityBytes;
    Struct_10C08690** Unknown08;
};

// FUNCTION: 0x10C08690 ?FUN_10c08690@cIntArray@@QAEXPAUStruct_10C08690@@@Z
void cIntArray::FUN_10c08690(Struct_10C08690* Item)
{
    if (Item->Unknown78 & 4)
    {
        int Index = FindIndex(Item);
        if (Index != -1)
            RemoveAt(Index);
    }
}
