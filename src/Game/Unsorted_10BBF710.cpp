// Game/Unsorted_10BBF710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Object_10BBF5E0.h"
#include "Game/Struct_10BBF5E0.h"
#include "Game/Class_1098E3D0.h"

void ClearDuplicateIds(Struct_10BBF5E0** Params, int Id);

int FindIdIndex(Object_10BBF5E0* Object, int Id);

int FindBadIdIndex(Object_10BBF5E0* Object);

class Class_10BBF710_Param
{
public:
    char Unknown00[0xC0];
    Object_10BBF5E0 Unknown0C0;
};

// FUNCTION: 0x10BBF710 ?FUN_10bbf710@@YAXPAVClass_10BBF710_Param@@@Z
void FUN_10bbf710(Class_10BBF710_Param* X)
{
    for (int i = 1; i <= X->Unknown0C0.Unknown00->Count; i++)
    {
        ClearDuplicateIds(&X->Unknown0C0.Unknown00, i);
    }
    for (int j = 1; j <= X->Unknown0C0.Unknown00->Count; j++)
    {
        if (FindIdIndex(&X->Unknown0C0, j) == -1)
        {
            int Bad = FindBadIdIndex(&X->Unknown0C0);
            if (Bad != -1)
            {
                Class_1098E3D0* Element = (Class_1098E3D0*)X->Unknown0C0.Unknown00->Data[Bad];
                int Id = j;
                Element->FUN_1098e3d0(0x200282, &Id);
            }
        }
    }
}
