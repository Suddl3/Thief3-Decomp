// Game/Unsorted_10B4D760_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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
    char Unknown00[0x54C];
    unsigned char Unknown54C;
};

class Class_10E7EBF8 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int FUN_10b4d760(Object_10B4D650* A, int B);

    char Unknown10;
    char Unknown11;
};

// FUNCTION: 0x10B4D760 ?FUN_10b4d760@Class_10E7EBF8@@UAEHPAVObject_10B4D650@@H@Z
int Class_10E7EBF8::FUN_10b4d760(Object_10B4D650* A, int B)
{
    if (Unknown11)
    {
        ((Class_10B396B0*)GetLinkedObject())->ResetHandler(B);
        Unknown08 = 0x101;
        return 0x17;
    }
    if (A->Unknown54C <= 3)
    {
        if (Unknown10 == 10)
            Unknown08 = A->Unknown54C + 0xcc;
        else
            Unknown08 = A->Unknown54C + 0x81;
    }
    if (Unknown08 != 0x101)
        ((Class_10B39530*)GetLinkedObject())->Play(Unknown08, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    return Virtual4();
}
