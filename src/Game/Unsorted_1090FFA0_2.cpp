// Game/Unsorted_1090FFA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class Class_109081E0;

Class_10905A90_Member* GetAllocator();

class Class_1090FD40
{
public:
    int FUN_1090fd40(const Class_109081E0& Item);
    int FUN_1090ffa0(const Class_109081E0& Item);
    void FUN_1090f2c0(int Count);
    void FUN_1090fd00();
    void FUN_10a37f80(int A, int B, int C);
    void FUN_10a39200(int Index);
    void FUN_10a391a0(int Index, const Class_109081E0& Value);
    void FUN_10a5b5b0(int A, int B);
    void FUN_10a5c560(int Index);
    void Empty()
    {
        FUN_1090f2c0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    Class_109081E0* Unknown08;
};

// FUNCTION: 0x1090FFA0 ?FUN_1090ffa0@Class_1090FD40@@QAEHABVClass_109081E0@@@Z
int Class_1090FD40::FUN_1090ffa0(const Class_109081E0& Item)
{
    int Count = Unknown00;
    for (int i = 0; i < Count; i++)
    {
        if (strcmp(*Unknown08[i], *Item) == 0)
            return i;
    }
    FUN_1090f2c0(Count + 1);
    Unknown08[Count] = Item;
    return Count;
}
