// Game/Unsorted_10B9C670.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Struct_10AA3520.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_109E3D60_Member.h"

class Class_10B21580;

class Class_10B21820;

// Game/Object_10B4CA50_A.h copied whole, with slot 8 as the call site shows it: two
// arguments (the pointer FUN_10c7d570 returns, and the array the items go into).
class Object_10B4CA50_A
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B21580* A, Class_10B21820* B, FString* C, FString* D, const FString& E, int F, int G);
    virtual void Virtual5();
    virtual void Virtual6(int A);
    virtual void Virtual7();
    virtual void Virtual8(void* A, cIntArray& B);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18(int A, int B);
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B9C670 ?FUN_10b9c670@@YAXPAVClass_10C7D570@@@Z
void FUN_10b9c670(Class_10C7D570* Owner)
{
    if (DAT_10f35dec)
    {
        if (DAT_10f35dec->Unknown64)
        {
            cIntArray Items;
            DAT_10f35dec->Unknown64->Virtual8(Owner->FUN_10c7d570(), Items);
            for (int i = 0; i < Items.Count; i++)
            {
                int Id = ((Class_10AAB5C0*)Items.Data[i])->GetUnknown08();
                if (Id && ((UObject*)Id)->IsA(AActor::StaticClass()))
                    DAT_10f35dec->Unknown28->Virtual2(Id);
            }
        }
        DAT_10f35dec->Unknown28->Virtual2((int)Owner->FUN_10c7d570());
    }
}
