// Game/Unsorted_10AD04C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10ACFDE0.h"
#include "Game/Class_10ACF3A0.h"
#include "Game/Class_10ACF9A0.h"
#include "Game/Class_10AD0490.h"
#include "Game/Class_10ACA6A0.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Class_10F46DA0.h"
#include "Game/Class_10AD04C0.h"

class Class_10AD04C0_Virtual6
{
public:
    char Pad00[0xc];
    int Unknown0C;
};

// AActor's m_physicsObjectPadding (0xB0) holds this object; the header's Struct_10D9E5E0_Param
// declares Virtual6 as void, and the target reads the result.
class Class_10AD04C0_UnknownB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10AD04C0_Virtual6* Virtual6();
};

// The object FUN_10aca6a0 returns: its slot 2 is the call the target makes.
class Class_10AD04C0_Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

extern Class_10F46DA0* DAT_10f46da0;

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10AD04C0 ?FUN_10ad04c0@Class_10AD04C0@@QAE_NPAVUObject@@HHH@Z
bool Class_10AD04C0::FUN_10ad04c0(UObject* Src, int Obj, int List, int Flag)
{
    Class_1098E3D0* Actor = (Class_1098E3D0*)Obj;
    FUN_10acfbc0(Actor);
    Obj = 0;
    Actor->GetPropertyValue(0x800182, &Obj);
    if (Obj != 0)
    {
        if (List != 0)
        {
            if (((Class_10ACFDE0*)this)->MatchesAny((int)Actor, (List_10ACFFF0*)List))
            {
                ((Class_10ACF3A0*)this)->Unlock(Actor);
            }
        }
        List = 0;
        Actor->GetPropertyValue(0x800182, &List);
        if (List == 0)
        {
            return true;
        }
        if ((char)Flag != 0 && ((Class_10ACF9A0*)this)->CanLockpick((int)Actor))
        {
            DAT_10f46da0->Virtual5(0x3a, (Class_10B697A0*)Cast<UObject>(Src), 0, 0);
            return false;
        }
        DAT_10f3a3d8->Unknown120->FUN_10aca6a0((Class_1098E3D0**)&Flag, 2, 0);
        Class_10AD04C0_Result* Out3 = (Class_10AD04C0_Result*)Flag;
        if (Out3 != 0)
        {
            Out3->Virtual2();
        }
        return false;
    }
    if (((Class_10AD04C0_UnknownB0*)Actor->m_physicsObjectPadding)->Virtual6()->Unknown0C == 3)
    {
        if (((Class_10ACFDE0*)this)->MatchesAny((int)Actor, (List_10ACFFF0*)List))
        {
            ((Class_10AD0490*)this)->Lock(Actor);
            return false;
        }
    }
    return true;
}
