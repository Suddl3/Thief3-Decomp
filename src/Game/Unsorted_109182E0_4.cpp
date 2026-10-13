// Game/Unsorted_109182E0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stddef.h>
#include "Game/Class_1092D960.h"

class Class_10924E80
{
public:
    char Unknown00[0xD8];
    Class_1092D960* Unknown0D8;
};

extern Class_10924E80* DAT_10f2c734;

class Class_109242E0
{
public:
    void FUN_10924270();
};

extern Class_109242E0* DAT_10f319a0;

class Class_10F2C744
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
};

extern Class_10F2C744* DAT_10f2c744;

void ReleaseTextures();

class IDirect3DSurface8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

extern IDirect3DSurface8* DAT_10f2c6e4;

extern float DAT_10f2c6ec;

class Class_10B59770
{
public:
    int Unknown00;
};

extern Class_10B59770 DAT_10f2c768;

class Class_10918E10_Element
{
public:
    virtual void Virtual0(int A, int B, int C);
};

struct Struct_10918E10
{
    Class_10918E10_Element* Unknown00;
    int Unknown04;
};

extern Struct_10918E10* DAT_10f2c770;

// FUNCTION: 0x109182E0 ?ReleaseForResolution@@YAXXZ
void ReleaseForResolution()
{
    Class_1092D960* Member = DAT_10f2c734->Unknown0D8;
    if (Member)
        Member->Release();
    DAT_10f319a0->FUN_10924270();
    if (DAT_10f2c744)
        DAT_10f2c744->Virtual10();
    ReleaseTextures();
    IDirect3DSurface8** Surface = &DAT_10f2c6e4;
    do
    {
        if (*Surface)
        {
            (*Surface)->Virtual2();
            *Surface = 0;
        }
        ++Surface;
    } while ((ptrdiff_t)Surface < (ptrdiff_t)&DAT_10f2c6ec);
    for (int i = 0; i < DAT_10f2c768.Unknown00; i++)
        DAT_10f2c770[i].Unknown00->Virtual0(0, 0, DAT_10f2c770[i].Unknown04);
}
