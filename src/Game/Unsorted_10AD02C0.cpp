// Game/Unsorted_10AD02C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ACF9A0.h"
#include "Game/Class_10AD0210.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B82390.h"

class Class_1098E3D0;

extern void* DAT_10e47850[];

// A set up by FUN_10af4b90(0x27, DAT_10e47850) (the "TArray" name), with its out-of-line destructor.
class Class_10AD01A0 : public Class_10AF4B90
{
public:
    Class_10AD01A0() { FUN_10af4b90(0x27, DAT_10e47850); }
    ~Class_10AD01A0();
};

// The local's own class: no destructor of its own, so the implicit one calls ~Class_10AD01A0 and adds a dword.
class Class_10AD0200 : public Class_10AD01A0
{
public:
    int Unknown0C;
};

// Class_10AD0490's header has no fields; its base Class_10ACF9A0 sits at offset 0 (FUN_10acf690 is called on this).
class Class_10AD0490 : public Class_10ACF9A0
{
public:
    void FUN_10ad03f0(Class_1098E3D0* Obj);
    void Lock(Class_1098E3D0* Obj);
};

// FUNCTION: 0x10AD03F0 ?FUN_10ad03f0@Class_10AD0490@@QAEXPAVClass_1098E3D0@@@Z
void Class_10AD0490::FUN_10ad03f0(Class_1098E3D0* Obj)
{
    Class_10AD0200 Items;
    Class_10B82390* Found = FUN_10acf690((int)Obj);
    if (Found)
        Found->FUN_10b82390(0x8056b, &Items);
    Items.Unknown0C = 0;
    Found = FUN_10acf690((int)Obj);
    if (Found)
        ((Class_10AD0210*)Found)->CreateItem(0x8056b, (int)&Items);
}
