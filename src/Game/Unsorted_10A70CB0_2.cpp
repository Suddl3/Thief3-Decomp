// Game/Unsorted_10A70CB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A70B80.h"

class Class_10A70DF0_Obj
{
public:
    virtual ~Class_10A70DF0_Obj();
    virtual void Virtual1();
};

struct Struct_10A70DF0
{
    Class_10A70DF0_Obj* Obj;
    float Unknown04;
};

extern float DAT_10eafbdc;

// Game/Class_10E6BA88.h copied whole, with the array at 0x4 typed as Class_10A70B80 and slot 1 named.
class Class_10E6BA88
{
public:
    virtual ~Class_10E6BA88();
    virtual void FUN_10a70cb0(float Limit);
    virtual void FUN_10a70df0(float A, Class_10A70DF0_Obj* Obj);
    virtual void Virtual3();
    virtual bool FUN_10a70b40(int Key, int* Out);

    Class_10E6BA88();

    Class_10A70B80 Unknown04;
};

// FUNCTION: 0x10A70CB0 ?FUN_10a70cb0@Class_10E6BA88@@UAEXM@Z
void Class_10E6BA88::FUN_10a70cb0(float Limit)
{
    for (int i = 0; i < Unknown04.Unknown00; i++)
    {
        Struct_10A70DF0& Entry = Unknown04.Unknown08[i];
        Entry.Unknown04 -= Limit;
        if (Entry.Unknown04 <= DAT_10eafbdc)
        {
            Class_10A70DF0_Obj* Obj = Entry.Obj;
            Obj->Virtual1();
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
