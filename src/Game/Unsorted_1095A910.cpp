// Game/Unsorted_1095A910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_1095A760.h"

class Class_1095AE50_Elem
{
public:
    void FUN_1095a510(char* Text);
    void FUN_1095aab0();

    char Unknown00[0x14];
    Class_1095A760 Unknown14;
    int Unknown20;
};

// FUNCTION: 0x1095AE50 ?FUN_1095ae50@@YAXPAVClass_1095AE50_Elem@@HPADH@Z
void FUN_1095ae50(Class_1095AE50_Elem* Elems, int Count, char* Data, int Flags)
{
    char Buffer[1024];
    int Pos = 0;
    for (int i = 0; i < Count; ++i)
    {
        short Value = *(short*)(Data + Pos);
        Pos += 2;
        Elems[i].Unknown14.FUN_1095a5a0(Value);
        int Size = Elems[i].Unknown14.Unknown00 * 0x5c;
        memcpy(Elems[i].Unknown14.Unknown08, Data + Pos, Size);
        Pos += Size;
        int Len = *(int*)(Data + Pos);
        Pos += 4;
        if (Len != 0)
        {
            memcpy(Buffer, Data + Pos, Len);
            Pos += Len;
            Buffer[Len] = 0;
            Elems[i].FUN_1095a510(Buffer);
        }
        if (Flags > 2)
        {
            int Field = *(int*)(Data + Pos);
            Pos += 4;
            Elems[i].Unknown20 = Field;
        }
        Elems[i].FUN_1095aab0();
    }
}
