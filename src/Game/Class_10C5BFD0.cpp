// Game/Class_10C5BFD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C5B990.h"
#include "Game/Class_10C5BFD0.h"
#include "Game/Class_10C5BA20.h"

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C5BE90 ?FUN_10c5be90@Class_10C5BFD0@@QAE_NPAHPAVClass_10C5B910@@@Z
bool Class_10C5BFD0::FUN_10c5be90(int* A, Class_10C5B910* B)
{
    const void* Data;
    int Length;
    m_KeyTraits.Virtual0(A, &Data, &Length);
    Class_10C5BE90_Unknown14** Table = m_Buckets;
    if (!Table)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    for (Class_10C5BE90_Unknown14* Node = Table[Index]; Node; Node = Node->Next)
    {
        if (m_KeyTraits.Virtual1(A, Node) == 0)
        {
            ((Class_10C5BA20*)B)->CopyFrom(Node->Unknown04);
            return true;
        }
    }
    return false;
}
