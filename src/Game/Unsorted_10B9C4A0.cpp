// Game/Unsorted_10B9C4A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAA580.h"
#include "Game/Class_10BA9EE0.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_10974340.h"
#include "Game/Class_1098E330.h"

class Class_109BC840;

class Class_109B2980
{
public:
    int FUN_109b2980();
};

// The header's class with FUN_109671b0 added (copied whole; the lead merges it).
class Class_10967060
{
public:
    Class_10967060 FUN_10967060(const Class_10967060& A);
    float FUN_109671b0();

    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10B9C570_Actor
{
public:
    char Pad00[0x2C];
    Class_10967060 Unknown2C;
};

class Class_10B9C570_Unknown118
{
public:
    char Pad00[0x10];
    Class_10BAA580* Unknown10;
};

class Class_10B9C570
{
public:
    bool FUN_10b9c570();

    char Pad00[0xC0];
    int Unknown0C0;
    char Pad0C4[0x54];
    Class_10B9C570_Unknown118* Unknown118;
};

// FUNCTION: 0x10B9C570 ?FUN_10b9c570@Class_10B9C570@@QAE_NXZ
bool Class_10B9C570::FUN_10b9c570()
{
    if (Unknown0C0 == 0)
    {
        return false;
    }
    Class_10BAA580* Obj = Unknown118->Unknown10;
    Class_109BC840* Found = Obj->FUN_10baa580();
    if (Found != 0)
    {
        if (((Class_109B2980*)Found)->FUN_109b2980() == 0)
        {
            int Key = 0;
            if (((Class_1098E330*)Obj->FUN_10c7d570())->FUN_1098e330(0x40800648, &Key) != 0)
            {
                if (Key != 0)
                {
                    int Target = ((Class_10974340*)((Class_1096D780*)Obj->FUN_10c7d570())->Get())->FUN_10974340();
                    if (Target != 0)
                    {
                        float Scale = 0.0f;
                        ((Class_1098E330*)Target)->FUN_1098e330(0x10064c, (int*)&Scale);
                        Scale = Scale * 16.0f;
                        int Other = ((Class_10BA9EE0*)Obj)->FUN_10ba9ee0();
                        if (Other != 0)
                        {
                            if (((Class_10B9C570_Actor*)Other)->Unknown2C.FUN_10967060(((Class_10B9C570_Actor*)Obj->FUN_10c7d570())->Unknown2C).FUN_109671b0() > Scale * Scale)
                            {
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}
