// Game/cDelayedDeleter_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A70B80.h"
#include "Game/Class_10A70DF0_Obj.h"

struct Struct_10A70DF0
{
    Class_10A70DF0_Obj* Obj;
    float Unknown04;
};

extern float DAT_10eafbdc;

// Game/cDelayedDeleter.h copied whole, with the array at 0x4 typed as Class_10A70B80 and slot 1 named.
class cDelayedDeleter
{
public:
    virtual ~cDelayedDeleter();
    virtual void Tick(float Limit);
    virtual void DeleteAfter(float A, Class_10A70DF0_Obj* Obj);
    virtual void Virtual3();
    virtual bool Find(int Key, int* Out);

    cDelayedDeleter();

    Class_10A70B80 m_Entries;
};

// FUNCTION: 0x10A70CB0 ?Tick@cDelayedDeleter@@UAEXM@Z
void cDelayedDeleter::Tick(float Limit)
{
    for (int i = 0; i < m_Entries.Unknown00; i++)
    {
        Struct_10A70DF0& Entry = m_Entries.Unknown08[i];
        Entry.Unknown04 -= Limit;
        if (Entry.Unknown04 <= DAT_10eafbdc)
        {
            Class_10A70DF0_Obj* Obj = Entry.Obj;
            Obj->Virtual1();
            delete Obj;
            Class_10A70B80* Array = &m_Entries;
            int Last = Array->Unknown00 - 1;
            Struct_10A70DF0 Removed = Array->Unknown08[i];
            Array->Unknown08[i] = Array->Unknown08[Last];
            Array->Unknown08[Last] = Removed;
            Array->FUN_10dd4d40(Array->Unknown00 - 1);
            i--;
        }
    }
}
