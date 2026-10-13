// Game/Class_10BBB410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10978090.h"
#include "Game/Class_10BBDC30.h"
#include "Game/Class_10BBDB10.h"
#include "Game/Class_10C28240.h"
#include "Game/Class_10C16740.h"

class Class_10BBDB40;

class Class_10BFF460;

// Game/Class_10C7D570.h copied whole, with FUN_10ba9fd0 (called on this object too).
class Class_10C7D570
{
public:
    void* FUN_10c7d570();
    void* FUN_10ba9fd0();
    Class_10BBDB40* FUN_10dbd510(int Id);
    Class_10BBDB40* FUN_10dbd510();

    char Unknown00[0x64];
    bool Unknown64;
};

// The base of Class_10BBB410: the fields this function reads are in it.
class Class_10BB9FC0
{
public:
    char Unknown00[0x8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0xa0];
    Class_10C16740 Unknown0AC;
    char Unknown108[0x58];
    Class_10C28240 Unknown160;
    char Unknown16C[0x50];
    Class_10C28240 Unknown1BC;
};

// Game/Class_10BBB410.h copied whole, with FUN_10bb7c10 added.
class Class_10BBB410 : public Class_10BB9FC0
{
public:
    void FUN_10bb7c10();
    void FUN_10bb9f60(int A, int B);
    Class_10BFF460* GetCurrent();
    void CancelCurrent();
    void RemoveItem(int Item);
    int FUN_10bbb730();
};

// FUNCTION: 0x10BB7C10 ?FUN_10bb7c10@Class_10BBB410@@QAEXXZ
void Class_10BBB410::FUN_10bb7c10()
{
    Class_10978090* Obj = (Class_10978090*)Unknown08->FUN_10ba9fd0();
    int Mode = (int)Obj->FUN_10978090();
    bool IsOne = Mode == 1;
    int Id1 = IsOne ? 0x40100684 : 0x40100222;
    int Id2 = IsOne ? 0x40100685 : 0x40100522;
    Unknown0AC.FUN_10c16740(((Class_10BBDC30*)Unknown08->FUN_10dbd510())->FUN_10bbdad0(Id1));
    Unknown0AC.FUN_10c16770(((Class_10BBDC30*)Unknown08->FUN_10dbd510())->FUN_10bbdad0(Id1));
    Unknown0AC.FUN_10c167a0(((Class_10BBDC30*)Unknown08->FUN_10dbd510())->FUN_10bbdad0(Id2));
    Unknown0AC.FUN_10c167d0(((Class_10BBDC30*)Unknown08->FUN_10dbd510())->FUN_10bbdad0(Id2));
    Unknown0AC.FUN_10c16800(((Class_10BBDC30*)Unknown08->FUN_10dbd510())->FUN_10bbdad0(Id2));
    if (((Class_10BBDB10*)Unknown08->FUN_10dbd510())->GetInt(0x40800654) == 0)
        Unknown0AC.FUN_10c28240();
    if (((Class_10BBDB10*)Unknown08->FUN_10dbd510())->GetInt(0x40800655) == 0)
        Unknown160.FUN_10c28240();
    if (((Class_10BBDB10*)Unknown08->FUN_10dbd510())->GetInt(0x40800656) == 0)
        Unknown1BC.FUN_10c28240();
}
