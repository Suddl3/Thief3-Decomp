// Game/Unsorted_10BBEF10_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBEFA0.h"
#include "Game/Class_10BBEFB0.h"
#include "Game/Class_10BBEFC0.h"
#include "Game/Class_10BBFEF0.h"
#include "Game/Class_10BC1BA0.h"
#include "Game/Class_10BC2080.h"
#include "Game/Class_10BC2090.h"

class AAIPathPoint
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
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void FUN_10bbef50(int p1, int p2);

    char Unknown04[0xBC];
    Class_10BC1BA0 Unknown0C0;
};

class Class_10BBEFA0;

class Class_10BBEFB0;

class Class_10BBEFC0;

// FUNCTION: 0x10BBEF50 ?FUN_10bbef50@AAIPathPoint@@UAEXHH@Z
void AAIPathPoint::FUN_10bbef50(int p1, int p2)
{
    Unknown0C0.ParsePathLinks(p1);
}

// FUNCTION: 0x10BBEFA0 ?FUN_10bbefa0@Class_10BBEFA0@@QAEXXZ
void Class_10BBEFA0::FUN_10bbefa0()
{
    UnknownC0.FUN_10bc2080(this);
}

// FUNCTION: 0x10BBEFB0 ?FUN_10bbefb0@Class_10BBEFB0@@QAEXXZ
void Class_10BBEFB0::FUN_10bbefb0()
{
    UnknownC0.FUN_10bc2090(this);
}

// FUNCTION: 0x10BBEFC0 ?FUN_10bbefc0@Class_10BBEFC0@@QAEXXZ
void Class_10BBEFC0::FUN_10bbefc0()
{
    UnknownC0.GetFirst(this);
}
