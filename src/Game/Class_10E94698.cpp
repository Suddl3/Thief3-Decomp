// Game/Class_10E94698.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF240.h"
#include "Game/Class_10BFF460.h"

class cTacticMoveToPoint
{
public:
    virtual void FUN_10bdaf30();

    void PopState();
};

class Class_10E94698 : public cTacticMoveToPoint
{
public:
    virtual void FUN_10bdaf30();

    Class_10BBB410* Unknown04;
};

// FUNCTION: 0x10BDAF30 ?FUN_10bdaf30@Class_10E94698@@UAEXXZ
void Class_10E94698::FUN_10bdaf30()
{
    Class_10BFF460* Obj = Unknown04->FUN_10bbb410();
    if (Obj && !Obj->FUN_10bff330())
        Obj->FUN_10bff240(1);
    PopState();
}
