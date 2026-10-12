// Game/Unsorted_10AA7B40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA7C30.h"
#include "Game/Struct_10AA7D70.h"

void ReadString(void* Reader, int* Out);

void ReadInt(void* Reader, int* Out);

class Class_10E6C14C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void ReadFields(void* Reader, int A, int B);
    virtual void WriteFields(void* Stream, int A, int B);

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

void WriteString(void* Stream, int* Value);

void WriteInt(void* Stream, int Value);

class Object_10AA7C30
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A, int B);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual int Virtual10();
};

class cConEvent
{
public:
    cConEvent();

    virtual ~cConEvent();

    int Unknown04;
};

class Class_10E6D964 : public cConEvent
{
public:
    Class_10E6D964();

    virtual ~Class_10E6D964();

    void* Unknown08;
    void* Unknown0C;
    Struct_10AA7D70 Unknown10;
};

// FUNCTION: 0x10AA7C30 ?FUN_10aa7c30@Class_10AA7C30@@QAEHXZ
int Class_10AA7C30::FUN_10aa7c30()
{
    if (Unknown0C)
    {
        Unknown0C->Virtual3(0x74, 0);
        return Unknown0C->Virtual10();
    }
    return 0;
}

// FUNCTION: 0x10AA7D70 ??0Class_10E6D964@@QAE@XZ
Class_10E6D964::Class_10E6D964() : Unknown08(0), Unknown0C(0)
{
}

// FUNCTION: 0x10AA7D90 ??_GClass_10E6D964@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AA7D70's definition in this unit.

// FUNCTION: 0x10AA7ED0 ?ReadFields@Class_10E6C14C@@UAEXPAXHH@Z
void Class_10E6C14C::ReadFields(void* Reader, int A, int B)
{
    ReadString(Reader, &Unknown08);
    ReadInt(Reader, &Unknown0C);
}

// FUNCTION: 0x10AA7F00 ?WriteFields@Class_10E6C14C@@UAEXPAXHH@Z
void Class_10E6C14C::WriteFields(void* Stream, int A, int B)
{
    WriteString(Stream, &Unknown08);
    WriteInt(Stream, Unknown0C);
}
