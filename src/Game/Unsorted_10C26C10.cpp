// Game/Unsorted_10C26C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include "Game/cIntArray.h"

class Class_10C26C10 : public cIntArray
{
public:
    void FUN_10c26c10(cIntArray* Other);
};

// FUNCTION: 0x10C26C10 ?FUN_10c26c10@Class_10C26C10@@QAEXPAVcIntArray@@@Z
void Class_10C26C10::FUN_10c26c10(cIntArray* Other)
{
    for (int i = 0; i < Other->Count; i++)
    {
        int Index = FindIndex(Other->Data[i]);
        if (Index != -1)
        {
            int Last = Count - 1;
            int Tmp = Data[Index];
            Data[Index] = Data[Last];
            Data[Last] = Tmp;
            SetCount(Count - 1);
        }
    }
}
