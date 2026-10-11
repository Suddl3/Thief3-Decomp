// Game/Class_10E96810_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF280.h"
#include "Game/Object_10BE58C0.h"

class Class_10BFF460 : public Class_10BFF280
{
public:
    bool FUN_10bff330();
};

class Class_10E960D8
{
public:
    virtual void Virtual0();

    void FUN_10be4ef0(Object_10BE58C0* Ar);

    Class_10BBB410* Unknown04;
    char Unknown08[0x60];
    int m_Interval;
};

class Class_10E96810 : public Class_10E960D8
{
public:
    virtual void FUN_10be4a20();
    virtual void Serialize(Object_10BE58C0* Ar);

    bool Unknown6C;
};

// FUNCTION: 0x10BE4A20 ?FUN_10be4a20@Class_10E96810@@UAEXXZ
void Class_10E96810::FUN_10be4a20()
{
    Class_10BFF460* Obj = Unknown04->FUN_10bbb410();
    if (Obj && Obj->FUN_10bff330())
    {
        Class_10BBB410* Ctrl = Unknown04;
        Ctrl->FUN_10bb9f60(Obj->FUN_10bff280(), 0);
    }
}
