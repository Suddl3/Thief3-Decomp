// Game/Unsorted_10B7C3F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <float.h>
#include "Game/Class_10B7C3F0.h"
#include "Game/Class_10B7C4A0.h"

class Class_10B7C3F0_Member
{
public:
    virtual ~Class_10B7C3F0_Member();

    char Unknown04[2];
    unsigned short m_RefCount;
};

// FUNCTION: 0x10B7C3F0 ?SetRefCounted@Class_10B7C3F0@@QAEXPAVClass_10B7C3F0_Member@@@Z
void Class_10B7C3F0::SetRefCounted(Class_10B7C3F0_Member* New)
{
    if (New)
        New->m_RefCount++;
    Class_10B7C3F0_Member* Old = Unknown54;
    if (Old)
    {
        Old->m_RefCount--;
        if (Old->m_RefCount == 0)
            delete Old;
    }
    Unknown54 = New;
}

// FUNCTION: 0x10B7C4A0 ?Reset@Class_10B7C4A0@@QAEPAV1@XZ
Class_10B7C4A0* Class_10B7C4A0::Reset()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown10[0][0] = Unknown10[0][1] = Unknown10[0][2] = Unknown10[0][3] = 0.0f;
    Unknown10[1][0] = Unknown10[1][1] = Unknown10[1][2] = Unknown10[1][3] = 0.0f;
    Unknown10[2][0] = Unknown10[2][1] = Unknown10[2][2] = Unknown10[2][3] = 0.0f;
    Unknown10[3][0] = Unknown10[3][1] = Unknown10[3][2] = Unknown10[3][3] = 0.0f;
    Unknown10[4][0] = Unknown10[4][1] = Unknown10[4][2] = Unknown10[4][3] = 0.0f;
    for (int i = 0; i < 3; i++)
        Unknown60[i][0] = Unknown60[i][1] = Unknown60[i][2] = Unknown60[i][3] = 0.0f;
    Unknown60[0][0] = 1.0f;
    Unknown60[1][1] = 1.0f;
    Unknown60[2][2] = 1.0f;
    m_Min = -FLT_MAX;
    m_Max = FLT_MAX;
    Unknown98 = 0;
    return this;
}
