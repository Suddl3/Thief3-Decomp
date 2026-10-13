// Game/Unsorted_10B83850.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B83DC0.h"
#include "Game/Class_10B83E50.h"
#include "Game/Allocator_10FFA700.h"

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10943600;

class Class_10B83820
{
public:
    Class_10B83820() : m_Buffer(0), m_Count(0), m_Capacity(0), Unknown08Flag(1) {}
    ~Class_10B83820()
    {
        if (!Unknown08Flag)
        {
            Allocator_10FFA700* Allocator = DAT_10ffa700;
            Allocator->Free(m_Buffer, m_Capacity * 16, 0x11);
        }
    }

    void* m_Buffer;
    int m_Count;
    unsigned m_Capacity : 31;
    unsigned Unknown08Flag : 1;
};

int FUN_10b83a30(Class_10B83DC0* Self, Class_10B83820* Out);

void FUN_10b83870(Class_10B83820* In, Class_10943600* Out);

int FUN_10b83b60(Class_10B83E50* Self, Class_10B83820* Out);

// FUNCTION: 0x10B83DC0 ?FUN_10b83dc0@Class_10B83DC0@@QAEHPAVClass_10943600@@@Z
int Class_10B83DC0::FUN_10b83dc0(Class_10943600* Out)
{
    Class_10B83820 Tmp;
    int Count = FUN_10b83a30(this, &Tmp);
    FUN_10b83870(&Tmp, Out);
    return Count;
}

// FUNCTION: 0x10B83E50 ?FUN_10b83e50@Class_10B83E50@@QAEHPAVClass_10943600@@@Z
int Class_10B83E50::FUN_10b83e50(Class_10943600* Out)
{
    Class_10B83820 Tmp;
    int Count = FUN_10b83b60(this, &Tmp);
    FUN_10b83870(&Tmp, Out);
    return Count;
}
