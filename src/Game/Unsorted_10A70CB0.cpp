// Game/Unsorted_10A70CB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A70B80.h"
#include "Game/Class_10A70DF0_Obj.h"

struct Struct_10A70DF0
{
    Class_10A70DF0_Obj* Unknown00;
    float Unknown04;
};

extern float DAT_10eafbdc;

class Class_10E6BA88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10a70df0(float A, Class_10A70DF0_Obj* Obj);

    Class_10A70B80 Unknown04;
};

class cActorManager
{
public:
    virtual void HandleEvent(int A, int B, int C, int D);
    virtual void FUN_10a4c470(int A, int B, int C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
};

class cVolumeManager : public cActorManager
{
public:
    virtual void HandleEvent(int Event, int A, int B, int C);
    virtual void Virtual17(int A, int B, int C);
    virtual void Virtual18(int A, int B, int C);
    virtual void Virtual19(int A, int B, int C);
};

// FUNCTION: 0x10A70DF0 ?FUN_10a70df0@Class_10E6BA88@@UAEXMPAVClass_10A70DF0_Obj@@@Z
void Class_10E6BA88::FUN_10a70df0(float A, Class_10A70DF0_Obj* Obj)
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
    Class_10A70B80* Queue = &Unknown04;
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
