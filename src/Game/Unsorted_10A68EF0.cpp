// Game/Unsorted_10A68EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string.h>
#include "Game/cIntArray.h"
#include "Game/Class_10943600.h"
#include "Game/Item_10943600.h"
#include "Game/Class_10A68AE0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A68F90.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A68F90_Unknown04
{
public:
    int Key;
    int Value;
    Class_10A68AE0 Unknown08;
    bool Flag;
    char Unknown15;
};

// FUNCTION: 0x10A68F90 ?FUN_10a68f90@Class_10A68F90@@QAEXHPAHABVClass_10A68AE0@@_N@Z
void Class_10A68F90::FUN_10a68f90(int Key, int* Value, const Class_10A68AE0& Other, bool Flag)
{
    int Total = Unknown04.Count;
    cIntArray* Array = &Unknown04;
    for (int I = 0; I < Total; I++)
    {
        Class_10A68F90_Unknown04* Item = (Class_10A68F90_Unknown04*)Unknown04.Data[I];
        if (Item->Unknown15 == 0 && Item->Key == Key)
        {
            delete Item;
            if (I != Array->Count - 1)
            {
                int From = I + 1;
                int To = I;
                int Count = Array->Count - I - 1;
                if (From != To && Count)
                    memmove(Array->Data + To, Array->Data + From, Count * sizeof(int));
            }
            Array->SetCount(Array->Count - 1);
            break;
        }
    }
    Class_10A68F90_Unknown04* NewItem = new (0, 0, 0, 0, 0) Class_10A68F90_Unknown04;
    NewItem->Key = Key;
    NewItem->Value = *Value;
    NewItem->Unknown08.CopyFrom(Other);
    NewItem->Flag = Flag;
    NewItem->Unknown15 = 0;
    int N = Array->Count;
    Array->SetCount(N + 1);
    Array->Data[N] = (int)NewItem;
}
