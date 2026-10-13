// Game/Unsorted_10B15960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E8FB0.h"
#include "Game/Class_10B15960.h"
#include "Game/Class_10B16930.h"
#include "Game/Class_10B17140.h"
#include "Game/Class_10B2C030.h"
#include "Game/Options.h"
#include "Game/Class_10B2ADA0.h"

Class_10905A90_Member* GetAllocator();

class cIntArray
{
public:
    void SetCount(int NewCount);

    ~cIntArray()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(Data);
            Data = 0;
            m_CapacityBytes = 0;
        }
    }

    int Count;
    int m_CapacityBytes;
    Class_10B2C030** Data;
};

class Class_10E79228 : public Class_109E8FB0
{
public:
    ~Class_10E79228();

    Class_10B17140 Unknown220;
};

class Options;

Options* GetOptions();

// FUNCTION: 0x10B160B0 ?FUN_10b160b0@Class_10B15960@@QAEXHPAX_N@Z
void Class_10B15960::FUN_10b160b0(int A, void* B, bool C)
{
    if (GetOptions()->Get(1))
    {
        Class_10B2ADA0* P = FUN_10b15ed0();
        if (P)
        {
            if (!P->Virtual53())
                P->Virtual56(2);
            P->FUN_10b2ada0(A, B, C);
        }
    }
}

// FUNCTION: 0x10B166A0 ?FUN_10b166a0@Class_10B16930@@QAEXXZ
void Class_10B16930::FUN_10b166a0()
{
    cIntArray First = FUN_109e6d80(0x69);
    if (First.Count > 0 && First.Data[0])
        First.Data[0]->FUN_10b2c130();

    cIntArray Second = FUN_109e6d80(0x6a);
    if (Second.Count > 0 && Second.Data[0])
        Second.Data[0]->FUN_10b2c130();
}

// FUNCTION: 0x10B177C0 ??1Class_10E79228@@QAE@XZ
Class_10E79228::~Class_10E79228()
{
}
