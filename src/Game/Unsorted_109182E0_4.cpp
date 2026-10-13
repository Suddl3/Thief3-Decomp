// Game/Unsorted_109182E0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stddef.h>
#include "Game/Class_1092D960.h"
#include "Game/Class_10918E10_Element.h"
#include "Game/Class_10B59770.h"
#include "Game/Class_10F2C744.h"
#include "Game/IDirect3DSurface8.h"
#include "Game/Struct_10918E10.h"
#include "Game/Class_109242E0.h"

class Class_10924E80
{
public:
    char Unknown00[0xD8];
    Class_1092D960* Unknown0D8;
};

extern Class_10924E80* DAT_10f2c734;

extern Class_109242E0* DAT_10f319a0;

extern Class_10F2C744* DAT_10f2c744;

void ReleaseTextures();

extern IDirect3DSurface8* DAT_10f2c6e4;

extern float DAT_10f2c6ec;

extern Class_10B59770 DAT_10f2c768;

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
