// Game/Unsorted_10B196D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF8020.h"

class Class_10B196D0
{
public:
    char Unknown00[0x478];
    Class_10AF8020* m_Infos;
    int m_InfoCount;
};

struct Struct_10AA3520
{
    char Unknown00[8];
    Class_10B196D0* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B196D0 ?FindInfoIndex@@YGHH@Z
int __stdcall FindInfoIndex(int Key)
{
    Class_10B196D0* Owner = DAT_10f35dec->Unknown08;
    int Count = Owner->m_InfoCount;
    for (int i = 0; i < Count; i++)
    {
        Class_10AF8020* Item = &Owner->m_Infos[i];
        if (Item->FUN_10af8020(Key))
            return i;
    }
    return -1;
}
