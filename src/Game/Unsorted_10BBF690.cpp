// Game/Unsorted_10BBF690.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E3D0.h"

class Class_10BBF690_Param
{
public:
    char Unknown00[0x18];
    int Unknown18;
    char Unknown1C[0x4];
    Class_1098E3D0** Unknown20;
};

// FUNCTION: 0x10BBF690 ?FUN_10bbf690@@YAXPAPAVClass_10BBF690_Param@@H@Z
void FUN_10bbf690(Class_10BBF690_Param** Obj, int Id)
{
    bool Found = false;
    for (int i = 0; i < (*Obj)->Unknown18; i++)
    {
        Class_1098E3D0* Item = (*Obj)->Unknown20[i];
        int Value = 0;
        Item->FUN_1098e330(0x200282, &Value);
        if (Value == Id)
        {
            if (!Found)
                Found = true;
            else
            {
                Value = 0;
                Item->FUN_1098e3d0(0x200282, &Value);
            }
        }
    }
}
