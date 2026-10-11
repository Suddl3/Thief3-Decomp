// Game/Unsorted_10A9D710_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A04080.h"

class Class_10A03780;

Class_10905A90_Member* FUN_10905aa0();

void* FUN_10a030c0();

// Game/Class_10BFBD70.h's copy, with the item type this array holds.
class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10bfbd70(int Count);

    union
    {
        int Unknown00;
        int Count;
    };
    int Unknown04;
    union
    {
        Class_10A03780** Unknown08;
        int* Data;
    };
};

class Class_10A03780
{
public:
    void FUN_10a03780(int A, int B, int C, int D);
};

// FUNCTION: 0x10A9D710 ?FUN_10a9d710@@YGXHHHHH@Z
void __stdcall FUN_10a9d710(int Id, int Value, int A, int B, int C)
{
    if (!Id)
        return;
    Class_10BFBD70 Found;
    ((Class_10A04080*)FUN_10a030c0())->FUN_10a04080(Id, Found, true);
    for (int i = 0; i < Found.Unknown00; i++)
    {
        Class_10A03780* Item = Found.Unknown08[i];
        Item->FUN_10a03780(Value, B, C, A);
    }
}
