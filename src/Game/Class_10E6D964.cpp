// Game/Class_10E6D964.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10AA7BA0.h"

void ReadString(void* Stream, int* Value);

void ReadInt(void* Stream, int* Value);

class Class_10F46D9C;

class Class_10F46D9C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Object_10AA7BA0* Virtual3();
};

extern Class_10F46D9C* DAT_10f46d9c;

class cConEvent
{
public:
    virtual ~cConEvent();

    int Unknown04;
};

class Class_10E6D964 : public cConEvent
{
public:
    virtual void Virtual1();
    virtual void FUN_10aa7b40(void* Stream, int Version, int B);

    Object_10AA7BA0* Unknown08;
    void* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10AA7B40 ?FUN_10aa7b40@Class_10E6D964@@UAEXPAXHH@Z
void Class_10E6D964::FUN_10aa7b40(void* Stream, int Version, int B)
{
    ReadString(Stream, &Unknown10);
    int Key = 1;
    if (Version >= 7)
        ReadInt(Stream, &Key);
    Unknown08 = DAT_10f46d9c->Virtual3();
    Unknown08->Virtual17(Key, Stream, DAT_10f46d9c);
}
