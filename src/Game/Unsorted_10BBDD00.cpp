// Game/Unsorted_10BBDD00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BBE020.h"
#include "Game/Class_10E90A64.h"

// FUNCTION: 0x10BBE020 ?FUN_10bbe020@Class_10BBE020@@QAEXH@Z
void Class_10BBE020::FUN_10bbe020(int Item)
{
    cIntArray* Set = &Unknown18;
    for (int i = 0; i < Unknown18.Count; i++)
    {
        Class_10E90A64* Elem = (Class_10E90A64*)Unknown18.Data[i];
        if (Elem->Unknown04 == Item)
        {
            int Last = Set->Count - 1;
            int Moved = Set->Data[Last];
            int Old = Set->Data[i];
            Set->Data[i] = Moved;
            Set->Data[Last] = Old;
            Set->SetCount(Set->Count - 1);
            delete Elem;
            return;
        }
    }
}
