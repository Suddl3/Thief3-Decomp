// Game/Unsorted_10A9D710_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A04080.h"

class Class_10A03780;

Class_10905A90_Member* GetAllocator();

void* FUN_10a030c0();

// Game/cIntArray.h's copy, with the item type this array holds.
class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}
    ~cIntArray()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
    }

    void SetCount(int Count);

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
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
    cIntArray Found;
    ((Class_10A04080*)FUN_10a030c0())->FUN_10a04080(Id, Found, true);
    for (int i = 0; i < Found.Unknown00; i++)
    {
        Class_10A03780* Item = Found.Unknown08[i];
        Item->FUN_10a03780(Value, B, C, A);
    }
}
