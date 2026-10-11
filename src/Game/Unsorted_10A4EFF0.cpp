// Game/Unsorted_10A4EFF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A243F0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10A4EFB0
{
public:
    void FUN_10a4e9d0(int Count);
    void FUN_10a4efb0();
    void FUN_10a4f120();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
    Class_10A243F0 Unknown0C[0x42];
    int Unknown324[0xff];
    Class_10A243F0 Unknown720[0xe];
};

// FUNCTION: 0x10A4F120 ?FUN_10a4f120@Class_10A4EFB0@@QAEXXZ
void Class_10A4EFB0::FUN_10a4f120()
{
    FUN_10a4e9d0(0);
    for (int i = 0; i < 0x42; i++)
    {
        unsigned Capacity;
        if (Unknown0C[i].Unknown08 == 0)
            Capacity = 0;
        else
            Capacity = (unsigned)Unknown0C[i].Unknown04 >> 2;
        FUN_10905aa0()->Virtual8(0, 0);
        if ((int)Capacity < 0)
        {
            int Want = 0;
            if (Capacity)
                Want = 0x10;
            Unknown0C[i].Unknown08 = FUN_10905aa0()->Virtual3(Unknown0C[i].Unknown08, Want * 4, 0, 0, 0, 0);
            Unknown0C[i].Unknown04 = Want * 4;
        }
        else if ((int)(Capacity - 16) >= 0)
        {
            FUN_10905aa0()->Virtual5(Unknown0C[i].Unknown08);
            Unknown0C[i].Unknown08 = 0;
            Unknown0C[i].Unknown04 = 0;
        }
        FUN_10905aa0()->Virtual9();
        Unknown0C[i].Unknown00 = 0;
    }
    for (int i = 0; i < 0xff; i++)
        Unknown324[i] = 0x40;
    for (int i = 0; i < 0xe; i++)
        Unknown720[i].FUN_10a243f0(0);
}
