// Game/Class_10E6BA88.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A70DF0_Obj.h"
#include "Game/Struct_10A70DF0.h"
#include "Game/Class_10A70B80.h"

class Class_10E6BA88
{
public:
    virtual ~Class_10E6BA88();
    virtual void FUN_10a70cb0(float A);
    virtual void FUN_10a70df0(float A, Class_10A70DF0_Obj* Obj);
    virtual void Virtual3();
    virtual bool FUN_10a70b40(int Key, int* Out);

    Class_10E6BA88();

    Class_10A70B80 Unknown04;
};

// FUNCTION: 0x10A70BE0 ??1Class_10E6BA88@@UAE@XZ
Class_10E6BA88::~Class_10E6BA88()
{
    for (int i = 0; i < Unknown04.Unknown00; i++)
    {
        Struct_10A70DF0* Entry = &Unknown04.Unknown08[i];
        delete Entry->Obj;
    }
    Unknown04.FUN_10dd4d40(0);
}
