// Game/Unsorted_10C09420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C09420.h"

struct Struct_10C09520
{
    int Count;
    int Unknown04;
    Class_10C09420** Items;
};

class Class_10E97BC8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E97BC8* Obj, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern void* DAT_10e97bc8[];

class Class_10E97BC8
{
public:
    Class_10E97BC8();

    void* VTable;
    cIntArray Unknown04;
};

// FUNCTION: 0x10C094B0 ??0Class_10E97BC8@@QAE@XZ
Class_10E97BC8::Class_10E97BC8() : VTable(DAT_10e97bc8)
{
    DAT_10f46da0->Virtual1(this, 0x27, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}

// FUNCTION: 0x10C09520 ?ClearItems@@YAXPAUStruct_10C09520@@@Z
void ClearItems(Struct_10C09520* Array)
{
    for (int i = 0; i < Array->Count; i++)
        delete Array->Items[i];
    Array->Count = 0;
}
