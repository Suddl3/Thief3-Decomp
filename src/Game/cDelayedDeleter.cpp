// Game/cDelayedDeleter.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A70DF0_Obj.h"
#include "Game/Struct_10A70DF0.h"
#include "Game/Class_10A70B80.h"

class cDelayedDeleter
{
public:
    virtual ~cDelayedDeleter();
    virtual void Tick(float A);
    virtual void DeleteAfter(float A, Class_10A70DF0_Obj* Obj);
    virtual void Virtual3();
    virtual bool Find(int Key, int* Out);

    cDelayedDeleter();

    Class_10A70B80 m_Entries;
};

// FUNCTION: 0x10A70BE0 ??1cDelayedDeleter@@UAE@XZ
cDelayedDeleter::~cDelayedDeleter()
{
    for (int i = 0; i < m_Entries.Unknown00; i++)
    {
        Struct_10A70DF0* Entry = &m_Entries.Unknown08[i];
        delete Entry->Obj;
    }
    m_Entries.FUN_10dd4d40(0);
}
