// Game/Unsorted_10B4D650_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10971570.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B396B0.h"

class Class_10B39870;

// Copied from include/Game/Class_10AA82D0.h with the return type the symbol has.
class Class_10AA82D0
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

class Object_10B4D650
{
public:
    char Unknown00[0x440];
    Class_10971570* Unknown440;
    char Unknown444[0x108];
    unsigned char Unknown54C;
    char Unknown54D;
    bool Unknown54E;
};

class Class_10E7EBF8 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void FUN_10b4d650(Object_10B4D650* A);

    char Unknown10;
    char Unknown11;
};

// FUNCTION: 0x10B4D650 ?FUN_10b4d650@Class_10E7EBF8@@UAEXPAVObject_10B4D650@@@Z
void Class_10E7EBF8::FUN_10b4d650(Object_10B4D650* A)
{
    char* Flag = &Unknown10;
    A->Unknown440->FUN_10971570(0x20000bd, (bool*)Flag);
    if (A->Unknown54C <= 3)
    {
        if (*Flag == '\n')
            Unknown08 = A->Unknown54C + 200;
        else
            Unknown08 = A->Unknown54C + 0x7d;
    }
    ((Class_10B39530*)GetLinkedObject())->Play(Unknown08, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    ((Class_10B396B0*)GetLinkedObject())->ResetHandler((*Flag == '\n') + 0x60);
    A->Unknown54E = true;
    Unknown11 = 0;
}
