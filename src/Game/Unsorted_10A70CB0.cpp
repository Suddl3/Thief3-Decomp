// Game/Unsorted_10A70CB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A70B80.h"
#include "Game/Class_10A70DF0_Obj.h"
#include "Game/cVolumeManager.h"

struct Struct_10A70DF0
{
    Class_10A70DF0_Obj* Unknown00;
    float Unknown04;
};

extern float DAT_10eafbdc;

class cDelayedDeleter
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void DeleteAfter(float A, Class_10A70DF0_Obj* Obj);

    Class_10A70B80 m_Entries;
};

// FUNCTION: 0x10A70DF0 ?DeleteAfter@cDelayedDeleter@@UAEXMPAVClass_10A70DF0_Obj@@@Z
void cDelayedDeleter::DeleteAfter(float A, Class_10A70DF0_Obj* Obj)
{
    if (A <= DAT_10eafbdc)
    {
        Obj->Virtual1();
        delete Obj;
        return;
    }
    Struct_10A70DF0 Entry;
    Entry.Unknown00 = Obj;
    Entry.Unknown04 = A;
    Class_10A70B80* Queue = &m_Entries;
    int Index = Queue->Unknown00;
    Queue->FUN_10dd4d40(Index + 1);
    Queue->Unknown08[Index] = Entry;
}

// FUNCTION: 0x10A70F00 ?HandleEvent@cVolumeManager@@UAEXHHHH@Z
void cVolumeManager::HandleEvent(int Event, int A, int B, int C)
{
    switch (Event)
    {
    case 36:
    case 37:
        Virtual17(A, B, C);
        break;
    case 5:
        Virtual19(A, B, C);
        break;
    case 38:
        Virtual18(A, B, C);
        break;
    default:
        cActorManager::FUN_10a4c470(Event, A, B, C);
        break;
    }
}
