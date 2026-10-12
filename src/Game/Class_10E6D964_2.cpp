// Game/Class_10E6D964_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10F46D9C.h"
#include "Game/Object_10AA7BA0.h"

void WriteString(void* Stream, int* Value);

void WriteInt(void* Stream, int Value);

extern Class_10F46D9C* DAT_10f46d9c;

class Class_10E6C104
{
public:
    Class_10E6C104();

    virtual ~Class_10E6C104();

    int Unknown04;
};

class Class_10E6D964 : public Class_10E6C104
{
public:
    virtual ~Class_10E6D964();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10aa7ba0(void* Stream, int A, int B);

    Object_10AA7BA0* Unknown08;
    void* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10AA7BA0 ?FUN_10aa7ba0@Class_10E6D964@@UAEXPAXHH@Z
void Class_10E6D964::FUN_10aa7ba0(void* Stream, int A, int B)
{
    WriteString(Stream, &Unknown10);
    WriteInt(Stream, DAT_10f46d9c->Virtual34());
    Unknown08->Virtual16(DAT_10f46d9c->Virtual34(), Stream);
}
