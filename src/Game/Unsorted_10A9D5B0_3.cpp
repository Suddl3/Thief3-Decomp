// Game/Unsorted_10A9D5B0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A04080.h"

Class_10905A90_Member* GetAllocator();

class Class_10A034B0
{
public:
    void FUN_10a034b0(int Value);
};

// A growable array of pointers: a count, the capacity in bytes and the items.
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

    int Unknown00;
    int m_CapacityBytes;
    Class_10A034B0** Unknown08;
};

void* FUN_10a030c0();

// FUNCTION: 0x10A9D660 ?FUN_10a9d660@@YGXHH@Z
void __stdcall FUN_10a9d660(int Id, int Value)
{
    if (!Id)
        return;
    cIntArray Found;
    ((Class_10A04080*)FUN_10a030c0())->FUN_10a04080(Id, Found, true);
    for (int i = 0; i < Found.Unknown00; i++)
        Found.Unknown08[i]->FUN_10a034b0(Value);
}
