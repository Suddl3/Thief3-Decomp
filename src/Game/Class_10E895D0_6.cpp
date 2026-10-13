// Game/Class_10E895D0_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BB8300.h"
#include "Game/cIntArray.h"
#include "Game/Class_Field04.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10AAF570;

// The object this->Unknown08 points to; its Unknown04 at +4 is the field.
class Class_10B8C290_Unknown08
{
public:
    char Unknown00[0x4];
    Class_Field04* Unknown04;
};

struct Struct_10B8C290
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E895D0
{
public:
    void FUN_10b8c290();

    char Unknown00[0x8];
    Class_10B8C290_Unknown08* Unknown08;
    char Unknown0C[0x24];
    Struct_10B8C290* Unknown30;
};

// FUNCTION: 0x10B8C290 ?FUN_10b8c290@Class_10E895D0@@QAEXXZ
void Class_10E895D0::FUN_10b8c290()
{
    Struct_10B8C290 Local;
    Class_Field04* Field = Unknown08->Unknown04;
    if (Field->FUN_1098e290(0x806eb, (FString*)&Local))
    {
        GetAllocator()->Virtual8(0, 0);
        Unknown30 = new(0, 0, 0, 0, 0) Struct_10B8C290;
        GetAllocator()->Virtual9();
        *Unknown30 = Local;
        Field->FUN_10ada010(0x806eb);
    }
}
