// Game/Unsorted_10BA5350_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BA8F10.h"
#include "Game/Class_10C15EF0.h"
#include "Game/Class_10E8C5FC.h"
#include "Game/Class_10E8C600.h"
#include "Game/Class_10E8C604.h"
#include "Game/Class_10E8C608.h"
#include "Game/Class_10E8C60C.h"
#include "Game/Class_10E8C610.h"
#include "Game/Class_10E8C614.h"
#include "Game/Class_10E8C618.h"
#include "Game/Class_10E8C61C.h"
#include "Game/Class_10E98C84.h"
#include "Game/Class_10E8D658.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8d554[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E8D554 : public Class_10EB766C
{
public:
    Class_10E8D554()
    {
        VTable = DAT_10e8d554;
    }
};

extern void* DAT_10e8d570[];

class Class_10E8D570 : public Class_10EB766C
{
public:
    Class_10E8D570()
    {
        VTable = DAT_10e8d570;
    }
};

extern void* DAT_10e8d58c[];

class Class_10E8D58C : public Class_10EB766C
{
public:
    Class_10E8D58C()
    {
        VTable = DAT_10e8d58c;
    }
};

extern void* DAT_10e8d5a8[];

class Class_10E8D5A8 : public Class_10EB766C
{
public:
    Class_10E8D5A8()
    {
        VTable = DAT_10e8d5a8;
    }
};

extern void* DAT_10e8d5c4[];

class Class_10E8D5C4 : public Class_10EB766C
{
public:
    Class_10E8D5C4()
    {
        VTable = DAT_10e8d5c4;
    }
};

extern void* DAT_10e8d5e0[];

class Class_10E8D5E0 : public Class_10EB766C
{
public:
    Class_10E8D5E0()
    {
        VTable = DAT_10e8d5e0;
    }
};

extern void* DAT_10e8d5fc[];

class Class_10E8D5FC : public Class_10EB766C
{
public:
    Class_10E8D5FC()
    {
        VTable = DAT_10e8d5fc;
    }
};

extern void* DAT_10e8d618[];

class Class_10E8D618 : public Class_10EB766C
{
public:
    Class_10E8D618()
    {
        VTable = DAT_10e8d618;
    }
};

extern void* DAT_10e8d634[];

class Class_10E8D634 : public Class_10EB766C
{
public:
    Class_10E8D634()
    {
        VTable = DAT_10e8d634;
    }
};

extern Class_10BA8F10* DAT_10ff6684;

// FUNCTION: 0x10BA88E0 ?Create@Class_10E8C5FC@@UAEPAVClass_10E8D554@@XZ
Class_10E8D554* Class_10E8C5FC::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D554;
}

// FUNCTION: 0x10BA8970 ?Create@Class_10E8C600@@UAEPAVClass_10E8D570@@XZ
Class_10E8D570* Class_10E8C600::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D570;
}

// FUNCTION: 0x10BA8A00 ?Create@Class_10E8C604@@UAEPAVClass_10E8D58C@@XZ
Class_10E8D58C* Class_10E8C604::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D58C;
}

// FUNCTION: 0x10BA8A90 ?Create@Class_10E8C608@@UAEPAVClass_10E8D5A8@@XZ
Class_10E8D5A8* Class_10E8C608::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D5A8;
}

// FUNCTION: 0x10BA8B20 ?Create@Class_10E8C60C@@UAEPAVClass_10E8D5C4@@XZ
Class_10E8D5C4* Class_10E8C60C::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D5C4;
}

// FUNCTION: 0x10BA8BB0 ?Create@Class_10E8C610@@UAEPAVClass_10E8D5E0@@XZ
Class_10E8D5E0* Class_10E8C610::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D5E0;
}

// FUNCTION: 0x10BA8C40 ?Create@Class_10E8C614@@UAEPAVClass_10E8D5FC@@XZ
Class_10E8D5FC* Class_10E8C614::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D5FC;
}

// FUNCTION: 0x10BA8CD0 ?Create@Class_10E8C618@@UAEPAVClass_10E8D618@@XZ
Class_10E8D618* Class_10E8C618::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D618;
}

// FUNCTION: 0x10BA8D60 ?Create@Class_10E8C61C@@UAEPAVClass_10E8D634@@XZ
Class_10E8D634* Class_10E8C61C::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8D634;
}

// FUNCTION: 0x10BA8E40 ??0Class_10E8D658@@QAE@XZ
Class_10E8D658::Class_10E8D658()
{
}

// FUNCTION: 0x10BA8EF0 ??_GClass_10E8D658@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10BA8E40's definition in this unit.

// FUNCTION: 0x10BA8F10 ?FUN_10ba8f10@@YAXXZ
void FUN_10ba8f10()
{
    if (DAT_10ff6684)
    {
        delete DAT_10ff6684;
        DAT_10ff6684 = 0;
    }
}
