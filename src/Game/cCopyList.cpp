// Game/cCopyList.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cActorManager.h"
#include "Game/cCopyList.h"
#include "Game/Class_10E6BD64.h"
#include "Game/Class_10E6BD18.h"
#include "Game/ULevel.h"

class Object_10A76760
{
public:
    int Unknown00;
};

// FUNCTION: 0x10A76760 ?FindBySource@cCopyList@@UAEPAVObject_10A76760@@H@Z
Object_10A76760* cCopyList::FindBySource(int Value)
{
    for (int i = 0; i < m_CopyCount; i++)
    {
        if (m_Copies[i]->Unknown00 == Value)
            return m_Copies[i];
    }
    return 0;
}
