// Game/Unsorted_10B81D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B822C0.h"
#include "Game/Struct_10B859B0_0C.h"
#include "Game/Struct_10B859B0_Vector.h"
#include "Game/Class_10B859B0.h"
#include "Game/Struct_10B859B0_Rotation.h"
#include "Game/Struct_10B859B0_Transform.h"
#include "Game/Allocator_10FFA700.h"

typedef unsigned char BYTE;

class Class_10B822C0_Member
{
public:
    char Unknown00[0x28];
    unsigned int Unknown28;
};

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10B83820
{
public:
    void FreeBuffer();

    void* m_Buffer;
    int m_Count;
    unsigned m_Capacity : 31;
    unsigned Unknown08Flag : 1;
};

// FUNCTION: 0x10B822C0 ?FUN_10b822c0@Class_10B822C0@@QAEHXZ
int Class_10B822C0::FUN_10b822c0()
{
    if (Unknown8C)
        return Unknown8C->Unknown28 & 0x1F;
    return 0;
}

// FUNCTION: 0x10B83820 ?FreeBuffer@Class_10B83820@@QAEXXZ
void Class_10B83820::FreeBuffer()
{
    if (!Unknown08Flag)
    {
        Allocator_10FFA700* Allocator = DAT_10ffa700;
        Allocator->Free(m_Buffer, m_Capacity * 16, 0x11);
    }
}

// FUNCTION: 0x10B859B0 ?Reset@Class_10B859B0@@QAEPAV1@XZ
Class_10B859B0* Class_10B859B0::Reset()
{
    Unknown0C.Struct_10B859B0_0C::Struct_10B859B0_0C();
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    m_Transform.SetIdentity();
    return this;
}
