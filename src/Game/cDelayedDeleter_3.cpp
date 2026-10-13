// Game/cDelayedDeleter_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A70B80.h"
#include "Game/Struct_10A70DF0.h"
#include "Game/Class_10A70DF0_Obj.h"

// Game/cDelayedDeleter.h copied whole, with the array at 0x4 typed as Class_10A70B80 and slot 5 named.
class cDelayedDeleter
{
public:
    virtual ~cDelayedDeleter();
    virtual void Tick(float Limit);
    virtual void DeleteAfter(float A, Class_10A70DF0_Obj* Obj);
    virtual void Virtual3();
    virtual bool Find(int Key, int* Out);
    virtual void FUN_10a70e60(int Key);

    cDelayedDeleter();

    Class_10A70B80 Unknown04;
};

// FUNCTION: 0x10A70E60 ?FUN_10a70e60@cDelayedDeleter@@UAEXH@Z
void cDelayedDeleter::FUN_10a70e60(int Key)
{
    for (int i = 0; i < Unknown04.Unknown00; i++)
    {
        Struct_10A70DF0& Entry = Unknown04.Unknown08[i];
        int Id = Entry.Obj->Virtual2();
        if (Id != 0 && Id == Key)
        {
            Class_10A70DF0_Obj* Obj = Entry.Obj;
            delete Obj;
            Class_10A70B80* Array = &Unknown04;
            int Last = Array->Unknown00 - 1;
            Struct_10A70DF0 Removed = Array->Unknown08[i];
            Array->Unknown08[i] = Array->Unknown08[Last];
            Array->Unknown08[Last] = Removed;
            Array->FUN_10dd4d40(Array->Unknown00 - 1);
            i--;
        }
    }
}
