// Game/Unsorted_10B8C290.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BB8300.h"
#include "Game/cIntArray.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10AAF570;

// Copied whole from include/Game/Class_Field04.h, with FUN_10ada010 added: the same object gets it.
class Class_Field04 : public Class_10BB8300
{
public:
    void FUN_10b46f90();
    void FUN_10b46fb0();
    void FUN_10bb83e0();
    void FUN_10b47310(int A);
    void Reset();
    int FUN_1098e290(int Id, FString* Out);
    void FUN_1098e290();
    void FUN_10ada010(int Id);

    char Pad01[0xb];
    char Pad293[0x1];
    Class_10AAF570* Unknown0C;
    int Unknown10;
    int Unknown14;
    float Unknown18;
    char Unknown1C[0x1C];
    int Unknown38;
    int Unknown3C;
    float Unknown40;
    int Unknown44;
    unsigned char Unknown48;
    char Unknown49[3];
    cIntArray Unknown4C;
    char Pad58[0x6c];
    FString UnknownC4;
    FString UnknownD0;
    FString m_DefaultString;
    FString UnknownE8;
    char PadF4[0x1e0];
    unsigned char Unknown2D4;
    char Pad2D5[0x3];
};

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

class Class_10B8C290
{
public:
    void FUN_10b8c290();

    char Unknown00[0x8];
    Class_10B8C290_Unknown08* Unknown08;
    char Unknown0C[0x24];
    Struct_10B8C290* Unknown30;
};

// FUNCTION: 0x10B8C290 ?FUN_10b8c290@Class_10B8C290@@QAEXXZ
void Class_10B8C290::FUN_10b8c290()
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
