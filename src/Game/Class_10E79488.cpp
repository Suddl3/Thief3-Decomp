// Game/Class_10E79488.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10D660B0.h"
#include "Game/Class_10E79488.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10AA3520_Member.h"
#include "Game/Class_10ABDC10.h"
#include "T3Player/T3PlayerClasses.h"
#include "Game/Class_10B1D170.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10B1BD70.h"

void* GetWindowManager();

extern void* GWindowManager[];

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B1BCB0 ?FUN_10b1bcb0@Class_10E79488@@UAEXXZ
void Class_10E79488::FUN_10b1bcb0()
{
    static_cast<Class_10D660B0*>(GetWindowManager())->FUN_10d660b0();
}

// FUNCTION: 0x10B1BCC0 ?HasWindowManager@Class_10E79488@@UAE_NH@Z
bool Class_10E79488::HasWindowManager(int param)
{
    return GWindowManager[0] != 0;
}

// FUNCTION: 0x10B1BE80 ?FUN_10b1be80@Class_10E79488@@UAEXH@Z
void Class_10E79488::FUN_10b1be80(int A)
{
    if (DAT_10f35dec)
    {
        Class_10B1BD70* Obj = DAT_10f35dec->UnknownBC;
        if (Obj)
            Obj->FUN_10b1bd70();
    }
}
