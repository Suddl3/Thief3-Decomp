// Game/Unsorted_10BBF5E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E330.h"
#include "Game/Object_10BBF5E0.h"
#include "Game/Struct_10BBF5E0.h"

// FUNCTION: 0x10BBF5E0 ?FUN_10bbf5e0@@YAHPAVObject_10BBF5E0@@H@Z
int FUN_10bbf5e0(Object_10BBF5E0* A, int B)
{
    for (int i = 0; i < A->Unknown00->Count; i++)
    {
        Class_1098E330* Item = A->Unknown00->Data[i];
        int Result = 0;
        Item->FUN_1098e330(0x200282, &Result);
        if (Result == B)
            return i;
    }
    return -1;
}
