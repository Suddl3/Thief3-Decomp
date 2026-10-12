// Game/Class_10E8C00C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C00C.h"

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
};

// FUNCTION: 0x10C068F0 ?Serialize@Class_10E8C00C@@UAEXAAVFArchive@@@Z
void Class_10E8C00C::Serialize(FArchive& Ar)
{
    int Count = m_ChildCount;
    Ar.Virtual1(&Count, 4);
    for (int i = 0; i < Count; i++)
        m_Children[i]->Serialize(Ar);
}
