// Game/Unsorted_10C08F00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C09190.h"
#include "Game/Class_10C09410.h"
#include "Game/cIntArray.h"

class Class_10C09090
{
public:
    void FUN_10c09090(int p1);
};

class Class_10C092F0
{
public:
    void FUN_10c092f0(int p1);
};

class Item_10C091A0;

// The header's Class_10C08E90 plus the destructor the unit inlines: a SetCount(0) and then the free.
class Class_10C08E90
{
public:
    ~Class_10C08E90()
    {
        FUN_10c089b0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }
    void FUN_10c089b0(int Count);
    void Empty();
    int Add(Item_10C091A0* Item);

    int Unknown00;
    int Unknown04;
    Item_10C091A0* Unknown08;
};

// The header's Class_10C08960 with its polymorphic base slot and the two member arrays at +0x8 and +0x14.
class Class_10C08960
{
public:
    virtual void Virtual0();
    ~Class_10C08960();

    void FUN_10c088b0();
    void FUN_10c08960();

    int Unknown04;
    Class_10C08E90 Unknown08;
    cIntArray Unknown14;
    bool Unknown20;
    char Pad21[0x3];
};

// FUNCTION: 0x10C08F00 ??1Class_10C08960@@QAE@XZ
Class_10C08960::~Class_10C08960()
{
}

// FUNCTION: 0x10C09190 ?FUN_10c09190@Class_10C09190@@QAEXH@Z
void Class_10C09190::FUN_10c09190(int p1)
{
    if (Unknown04)
        Unknown04->FUN_10c09090(p1);
}

// FUNCTION: 0x10C09410 ?FUN_10c09410@Class_10C09410@@QAEXH@Z
void Class_10C09410::FUN_10c09410(int p1)
{
    if (Unknown04)
        Unknown04->FUN_10c092f0(p1);
}
