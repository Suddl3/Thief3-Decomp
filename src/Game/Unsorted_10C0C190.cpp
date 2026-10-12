// Game/Unsorted_10C0C190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0C150.h"
#include "Game/Item_10C0C150.h"

// FUNCTION: 0x10C0C190 ?RemoveAt@Class_10C0C150@@QAEXH@Z
void Class_10C0C150::RemoveAt(int Index)
{
    int Last = Unknown00 - 1;
    Item_10C0C150 Temp = Unknown08[Index];
    Unknown08[Index] = Unknown08[Last];
    Unknown08[Last] = Temp;
    Resize(Unknown00 - 1);
}
