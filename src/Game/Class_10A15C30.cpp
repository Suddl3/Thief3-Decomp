// Game/Class_10A15C30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A15B20_Unknown14.h"
#include "Game/Class_10A15B20_Unknown18.h"
#include "Game/Class_10A15C30.h"
#include "Game/Class_10A15C30_Field18.h"
#include "Game/Class_10A15C30_Node.h"

class Class_10A15B20_Unknown14;

class Class_10A15B20_Unknown18;

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A15C30 ?FUN_10a15c30@Class_10A15C30@@QAE_NPAH@Z
bool Class_10A15C30::FUN_10a15c30(int* p1)
{
    const void* Data;
    int Length;
    m_KeyCompare.Virtual0(*p1, &Data, &Length);
    Class_10A15C30_Node** Buckets = m_Buckets;
    if (!Buckets)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    for (Class_10A15C30_Node* Node = Buckets[Index]; Node; Node = Node->Next)
    {
        if (m_KeyCompare.Virtual1(*p1, Node->Key) == 0)
            return true;
    }
    return false;
}
