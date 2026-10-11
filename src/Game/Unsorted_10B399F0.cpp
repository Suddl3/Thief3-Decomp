// Game/Unsorted_10B399F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B3A460.h"
#include "Game/Class_10B481C0.h"
#include "Game/Class_Field04.h"

struct Struct_10B21820_Object
{
    char Pad00[0x4a1];
    unsigned char Unknown4A1;
};

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

Class_10B3A460* FUN_10b3abf0();

class Class_10B39A70
{
public:
    void FUN_10b399f0();
    void FUN_10b39a70(int A);

    char Unknown00[4];
    Struct_10B21820_Object* Unknown04;
    Class_10B21820* Unknown08;
    Class_10B481C0* Unknown0C[8];
};

// FUNCTION: 0x10B399F0 ?FUN_10b399f0@Class_10B39A70@@QAEXXZ
void Class_10B39A70::FUN_10b399f0()
{
    if (Unknown04 == 0)
    {
        Unknown04 = Unknown08->FUN_10991e10();
        if (Unknown04 != 0)
        {
            for (int i = 0; i < 8; i++)
            {
                ((Class_Field04*)Unknown0C[i])->FUN_10b47310((int)Unknown04);
            }
            Unknown04->Unknown4A1 = 1;
            int Index = FUN_10b3abf0()->FUN_10b3a460(0)->Unknown1C;
            Class_10B481C0* Obj = Unknown0C[Index];
            Obj->FUN_10b481c0(0, -1.0f, 1.0f, 0x101, 0, false, false, -1.0f);
        }
    }
}
