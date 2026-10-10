// Game/Unsorted_10AA7750_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10F46D9C.h"
#include "Game/Object_10AA7BA0.h"

void FUN_10d3d2d0(void* Stream, int Value);

void FUN_10d3d990(void* Stream, int* Value);

class Class_10E6C104
{
public:
    virtual ~Class_10E6C104();

    char Unknown04[4];
};

extern Class_10F46D9C* DAT_10f46d9c;

class Class_10E6D940 : public Class_10E6C104
{
public:
    virtual ~Class_10E6D940();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10aa7750(void* Stream, int A, int B);

    Object_10AA7BA0* Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10AA7750 ?FUN_10aa7750@Class_10E6D940@@UAEXPAXHH@Z
void Class_10E6D940::FUN_10aa7750(void* Stream, int A, int B)
{
    FUN_10d3d2d0(Stream, Unknown14);
    FUN_10d3d2d0(Stream, Unknown18);
    FUN_10d3d2d0(Stream, DAT_10f46d9c->Virtual34());
    FUN_10d3d990(Stream, &Unknown10);
    Unknown08->Virtual16(DAT_10f46d9c->Virtual34(), Stream);
}
