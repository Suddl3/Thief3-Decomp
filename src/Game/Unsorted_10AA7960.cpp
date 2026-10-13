// Game/Unsorted_10AA7960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

void ReadString(void* Stream, int* Value);

void ReadInt(void* Stream, int* Value);

extern const char DAT_10e47660[];

class Class_10F46D9C;

class Object_10AA7BA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16(int A, void* B);
    virtual void Virtual17(int A, void* B, Class_10F46D9C* C);
};

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

class Class_10E6D940 : public cConEvent
{
public:
    virtual void Virtual1();
    virtual void FUN_10aa7960(void* Stream, int Version, int B);

    Object_10AA7BA0* Unknown08;
    void* Unknown0C;
    cString Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10AA7960 ?FUN_10aa7960@Class_10E6D940@@UAEXPAXHH@Z
void Class_10E6D940::FUN_10aa7960(void* Stream, int Version, int B)
{
    ReadInt(Stream, &Unknown14);
    if (Version >= 0xe)
        ReadInt(Stream, &Unknown18);
    int Key = 1;
    if (Version >= 7)
        ReadInt(Stream, &Key);
    if (Version >= 0x1a)
        ReadString(Stream, (int*)&Unknown10);
    else
        Unknown10.FUN_1090a590(DAT_10e47660);
    Unknown08 = DAT_10f46d9c->Virtual3();
    Unknown08->Virtual17(Key, Stream, DAT_10f46d9c);
}
