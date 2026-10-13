// Game/Unsorted_10B9F4B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C04D90.h"
#include "Game/Class_10B9F520.h"

class Class_10B9F520_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* V, int Length);
};

// FUNCTION: 0x10B9F520 ?FUN_10b9f520@Class_10B9F520@@QAEXPAVClass_10B9F520_Param@@@Z
void Class_10B9F520::FUN_10b9f520(Class_10B9F520_Param* Ar)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C04D90* Obj = Unknown14[i];
        int Count;
        Ar->Virtual1(&Count, 4);
        for (int j = 0; j < Count; j++)
        {
            int Index;
            Ar->Virtual1(&Index, 4);
            Obj->AddValue(Unknown20[Index]);
        }
    }
}
