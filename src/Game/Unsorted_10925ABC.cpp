// Game/Unsorted_10925ABC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_1092D990;

// Game/Class_10924E80.h without its base (Class_10925410 is 0xE8 bytes, and m_Items sits at 0xBC here)
// and with FUN_10925c60 as the code shows it: a bool flag, a bool result.
class Class_10924E80
{
public:
    bool FUN_10925c60(void* A, bool B);

    char Pad00[0xBC];
    cIntArray m_Items;
    char PadC8[0x10];
    Class_1092D990* Unknown0D8;
};

// FUNCTION: 0x10925C60 ?FUN_10925c60@Class_10924E80@@QAE_NPAX_N@Z
bool Class_10924E80::FUN_10925c60(void* A, bool B)
{
    cIntArray* List = &m_Items;
    for (int i = 0; i < m_Items.Count; i++)
    {
        if (m_Items.Data[i] == (int)A)
            return false;
    }
    if (B)
    {
        int Index = List->Count;
        List->SetCount(Index + 1);
        List->Data[Index] = (int)A;
        return true;
    }
    List->SetCount(List->Count + 1);
    int Rest = List->Count - 1;
    if (Rest)
        memmove(List->Data + 1, List->Data, Rest * sizeof(int));
    List->Data[0] = (int)A;
    return true;
}
