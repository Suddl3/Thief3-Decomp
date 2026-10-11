// Game/Unsorted_10B34C30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10E6DC88.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E79548.h"

struct Struct_10A89290
{
    char Pad00[0x8];
    int Unknown08;
};

class Class_1096C8D0_Field0C
{
public:
    char Pad00[0x1c];
    Struct_10A89290* Unknown1C;
};

class Class_1096C8D0
{
public:
    void FUN_1096c8d0();

    UBOOL IsValid()
    {
        if (Unknown04 == 0)
            return Unknown08 < UObject::GObjObjects.Num();
        return !(Unknown10 == Unknown0C->Unknown1C && Unknown24 == 0);
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_1096C8D0_Field0C* Unknown0C;
    Struct_10A89290* Unknown10;
    Class_10B0D530 Unknown14;
    char Pad15[0xf];
    int Unknown24;
};

class Class_10971570
{
public:
    int FUN_10971570(int Id, bool* Out);
    int FUN_109766a0(int A, int B);

    char Pad00[0x1];
};

class Class_10B34F60_Object
{
public:
    char Pad00[0xe8];
    Class_10971570* UnknownE8;
    int UnknownEC;
};

extern Class_1096C8D0* DAT_10ff3818;

class Class_10E7C178
{
public:
    void FUN_10b34f60();

    char Pad00[0x8];
    unsigned char Unknown08;
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Constructed by 0x10AAF5B0 as Class_10E6DC88(0x66), then its own tables: the primary
// (Class_10EB766C's) at +0x0 and the second base's (Class_10E5B578's) at +0xC.
class Class_10E7C268 : public Class_10E6DC88
{
public:
    Class_10E7C268() : Class_10E6DC88(0x66)
    {
    }

    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10B34F60 ?FUN_10b34f60@Class_10E7C178@@QAEXXZ
void Class_10E7C178::FUN_10b34f60()
{
    for (DAT_10ff3818->FUN_1096c8d0(); DAT_10ff3818->IsValid(); DAT_10ff3818->FUN_1096c8d0())
    {
        int Obj;
        if (DAT_10ff3818->Unknown04 == 0)
            Obj = (int)UObject::GObjObjects(DAT_10ff3818->Unknown08);
        else
            Obj = DAT_10ff3818->Unknown10->Unknown08;
        if (Obj != 0 && ((Class_10B34F60_Object*)Obj)->UnknownEC != 0 && ((Class_10B34F60_Object*)Obj)->UnknownE8 != 0)
        {
            bool Found;
            if (Unknown08 == 8)
                Found = ((Class_10B34F60_Object*)Obj)->UnknownE8->FUN_109766a0(0x20000b5, 0) == 1;
            else
            {
                bool Out;
                ((Class_10B34F60_Object*)Obj)->UnknownE8->FUN_10971570(0x20000b5, &Out);
                Found = Out == Unknown08;
            }
            if (Found)
                break;
        }
    }
}

// FUNCTION: 0x10B35020 ?FUN_10b35020@Class_10E79548@@UAEPAVClass_10E7C268@@XZ
Class_10E7C268* Class_10E79548::FUN_10b35020()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E7C268* Result = new(0, 0, 0, 0, 0) Class_10E7C268;
    FUN_10905aa0()->Virtual9();
    return Result;
}
