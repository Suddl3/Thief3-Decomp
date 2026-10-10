// Game/Unsorted_10C09420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

class Class_10C09420
{
public:
    ~Class_10C09420();
};

struct Struct_10C09520
{
    int Count;
    int Unknown04;
    Class_10C09420** Items;
};

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    void FUN_10bfbd70(int Count);

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
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
    Class_10BFBD70 Unknown04;
};

// FUNCTION: 0x10C094B0 ??0Class_10E97BC8@@QAE@XZ
Class_10E97BC8::Class_10E97BC8() : VTable(DAT_10e97bc8)
{
    DAT_10f46da0->Virtual1(this, 0x27, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}

// FUNCTION: 0x10C09520 ?FUN_10c09520@@YAXPAUStruct_10C09520@@@Z
void FUN_10c09520(Struct_10C09520* Array)
{
    for (int i = 0; i < Array->Count; i++)
        delete Array->Items[i];
    Array->Count = 0;
}
