// Game/Class_10E6BC44_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_1098E330.h"
#include "Game/cIntArray.h"
#include "Game/Class_Field04.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10E6BC44.h"

class Class_10A6FED0_Owner
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_Field04* A, int B, int C);
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A76A60 ?FUN_10a76a60@Class_10E6BC44@@QAEXPAVClass_Field04@@PAVcIntArray@@@Z
void Class_10E6BC44::FUN_10a76a60(Class_Field04* A, cIntArray* B)
{
    Class_1098E330* Obj = (Class_1098E330*)A;
    int Key;
    Obj->FUN_1098e330(0x2047b, &Key);
    for (int i = 0; i < B->Count; i++)
    {
        int Item = B->Data[i];
        if (Item != (int)Obj && Key != Item)
        {
            if (Key != (int)DAT_10f35dec->Unknown08)
            {
                if (Obj->IsA(APawn::StaticClass()))
                    continue;
            }
            int Key2;
            ((Class_1098E330*)Item)->FUN_1098e330(0x80027a, &Key2);
            if (Key2)
            {
                DAT_10f35dec->Unknown1C->Virtual1(A, 0, 0);
                return;
            }
        }
    }
}
