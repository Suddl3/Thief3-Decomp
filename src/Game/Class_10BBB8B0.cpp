// Game/Class_10BBB8B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10BB9FC0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF240.h"
#include "Game/Class_10BFF280.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10BF23A0_Unknown04.h"
#include "Game/Class_10C16C10.h"

class Class_10E5CBD8;

struct Struct_10BA9EF0;

// The object FUN_10bff280() returns; its slot 34 is the one called here.
class Class_10BBB580_Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
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
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual int Virtual34();
};

// Game/Class_10BBB8B0.h copied whole, with the fields at 0xAC and 0x210 named.
class Class_10BBB8B0
{
public:
    void FUN_10bbb8b0();
    bool FUN_10bbb580(const Struct_10BA9EF0& Position);

    char Unknown00[8];
    Class_10E5CBD8* Unknown08;
    char Unknown0C[0xA0];
    Class_10C16C10 Unknown0AC;
    char Unknown0AD[0x163];
    Class_10BFF460* Unknown210;
};

// FUNCTION: 0x10BBB580 ?FUN_10bbb580@Class_10BBB8B0@@QAE_NABUStruct_10BA9EF0@@@Z
bool Class_10BBB8B0::FUN_10bbb580(const Struct_10BA9EF0& Position)
{
    if (Unknown210 != 0 && Unknown210->FUN_10bff460() != true)
        ((Class_10BBB410*)this)->CancelCurrent();
    Class_10BFF460* Obj = Unknown210;
    if (Obj != 0 && ((Class_10BFF280*)Obj)->FUN_10bff280() != 0)
    {
        bool Flag = ((Class_10BBB580_Result*)((Class_10BFF280*)Obj)->FUN_10bff280())->Virtual34() == 1;
        FVector Buf;
        Unknown0AC.FUN_10c16c10(&Buf, ((Class_10BFF280*)Obj)->FUN_10bff280(), Flag);
        return ((Class_10BF23A0_Unknown04*)this)->FUN_10bb7db0(((Class_10BFF280*)Obj)->FUN_10bff280(), (int)&Buf, (int)&Position);
    }
    return false;
}
