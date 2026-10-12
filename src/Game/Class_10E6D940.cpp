// Game/Class_10E6D940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10F46D9C.h"
#include "Game/Object_10AA7BA0.h"

void WriteInt(void* Stream, int Value);

void WriteString(void* Stream, int* Value);

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
    virtual void WriteToStream(void* Stream, int A, int B);

    Object_10AA7BA0* Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10AA7750 ?WriteToStream@Class_10E6D940@@UAEXPAXHH@Z
void Class_10E6D940::WriteToStream(void* Stream, int A, int B)
{
    WriteInt(Stream, Unknown14);
    WriteInt(Stream, Unknown18);
    WriteInt(Stream, DAT_10f46d9c->Virtual34());
    WriteString(Stream, &Unknown10);
    Unknown08->Virtual16(DAT_10f46d9c->Virtual34(), Stream);
}
