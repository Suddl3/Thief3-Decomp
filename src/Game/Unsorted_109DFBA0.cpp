// Game/Unsorted_109DFBA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E3750.h"
#include "Game/Class_109E3760.h"
#include "Game/Class_109E37D0.h"
#include "Game/Class_109E37E0.h"
#include "Game/Class_109E37F0.h"
#include "Game/Class_109E3800.h"
#include "Game/Class_109E38A0.h"
#include "Game/Class_109E38C0.h"
#include "Game/Class_109E38D0.h"
#include "Game/Class_109E3910.h"
#include "Game/Class_109E3920.h"
#include "Game/Class_109E39C0.h"
#include "Game/Class_109E39D0.h"
#include "Game/Class_109E39F0.h"
#include "Game/Class_109E3A00.h"
#include "Game/Class_109E44D0.h"
#include "Game/Class_109E5310.h"

void FUN_10d4e090();

void FUN_10a53560();

struct Struct_109E5310
{
    char Unknown00[0x6C];
    int Unknown6C;
    int Unknown70;
};

extern int DAT_10f35db8;

void* __stdcall AllocRADMemory(unsigned Bytes);

void __stdcall RadFree(void* Ptr);

extern "C" __declspec(dllimport) void __stdcall _RADSetMemory(void* (__stdcall* Alloc)(unsigned), void (__stdcall* Free)(void*));

extern float DAT_10f35b20;

void FUN_109e1410(float p1, bool p2);

// FUNCTION: 0x109E1E60 ?FUN_109e1e60@@YAX_N@Z
void FUN_109e1e60(bool p1)
{
    FUN_109e1410(DAT_10f35b20, p1);
}

// FUNCTION: 0x109E2990 ?InitRadMemory@@YAXXZ
void InitRadMemory()
{
    if (DAT_10f35db8++ == 0)
        _RADSetMemory(AllocRADMemory, RadFree);
}

// FUNCTION: 0x109E2A80 ?FUN_109e2a80@@YAXXZ
void FUN_109e2a80()
{
    FUN_10d4e090();
}

// FUNCTION: 0x109E3750 ?GetFieldDC@Class_109E3750@@QAEPAXXZ
void* Class_109E3750::GetFieldDC()
{
    return &FieldDC;
}

// FUNCTION: 0x109E3760 ?GetField_E0@Class_109E3760@@QAEPAXXZ
void* Class_109E3760::GetField_E0()
{
    return &Field_E0;
}

// FUNCTION: 0x109E37D0 ?GetFieldCC@Class_109E37D0@@QAEEXZ
unsigned char Class_109E37D0::GetFieldCC()
{
    return FieldCC;
}

// FUNCTION: 0x109E37E0 ?SetFieldCC@Class_109E37E0@@QAEXE@Z
void Class_109E37E0::SetFieldCC(unsigned char param)
{
    FieldCC = param;
}

// FUNCTION: 0x109E37F0 ?GetFieldCD@Class_109E37F0@@QAEEXZ
unsigned char Class_109E37F0::GetFieldCD()
{
    return FieldCD;
}

// FUNCTION: 0x109E3800 ?SetFieldCD@Class_109E3800@@QAEXE@Z
void Class_109E3800::SetFieldCD(unsigned char param)
{
    FieldCD = param;
}

// FUNCTION: 0x109E38A0 ?SetFieldCE@Class_109E38A0@@QAEXE@Z
void Class_109E38A0::SetFieldCE(unsigned char p1)
{
    FieldCE = p1;
}

// FUNCTION: 0x109E38B0 ?FUN_109e38b0@@YGXHH@Z
void __stdcall FUN_109e38b0(int p1, int p2)
{
}

// FUNCTION: 0x109E38C0 ?SetFieldB0@Class_109E38C0@@QAEXH@Z
void Class_109E38C0::SetFieldB0(int p1)
{
    FieldB0 = p1;
}

// FUNCTION: 0x109E38D0 ?GetFieldB0@Class_109E38D0@@QAEPAXXZ
void* Class_109E38D0::GetFieldB0()
{
    return FieldB0;
}

// FUNCTION: 0x109E3910 ?FUN_109e3910@Class_109E3910@@QAEPAXXZ
void* Class_109E3910::FUN_109e3910()
{
    return &unknown_d8;
}

// FUNCTION: 0x109E3920 ?GetFieldE4@Class_109E3920@@QAEPAXXZ
void* Class_109E3920::GetFieldE4()
{
    return FieldE4;
}

// FUNCTION: 0x109E39C0 ?GetField100@Class_109E39C0@@QAEPAXXZ
void* Class_109E39C0::GetField100()
{
    return Field100;
}

// FUNCTION: 0x109E39D0 ?GetField108@Class_109E39D0@@QAEPAXXZ
void* Class_109E39D0::GetField108()
{
    return Field108;
}

// FUNCTION: 0x109E39F0 ?GetFieldC4@Class_109E39F0@@QAEPAXXZ
void* Class_109E39F0::GetFieldC4()
{
    return FieldC4;
}

// FUNCTION: 0x109E3A00 ?SetFieldE4@Class_109E3A00@@QAEXHH@Z
void Class_109E3A00::SetFieldE4(int p1, int p2)
{
    FieldE4 = p1;
}

// FUNCTION: 0x109E3C90 ?FUN_109e3c90@@YGXH@Z
void __stdcall FUN_109e3c90(int p1)
{
}

// FUNCTION: 0x109E3CA0 ?FUN_109e3ca0@@YGDXZ
char __stdcall FUN_109e3ca0()
{
    return 0;
}

// FUNCTION: 0x109E44D0 ?GetField_158@Class_109E44D0@@QAEPAXXZ
void* Class_109E44D0::GetField_158()
{
    return &Field_158;
}

// FUNCTION: 0x109E4990 ?FUN_109e4990@@YAXXZ
void FUN_109e4990()
{
    FUN_10a53560();
}

// FUNCTION: 0x109E5310 ?FUN_109e5310@Class_109E5310@@QAEXPAUStruct_109E5310@@@Z
void Class_109E5310::FUN_109e5310(Struct_109E5310* A)
{
    Unknown98 = A;
    UnknownB0 = (float)A->Unknown6C;
    UnknownB4 = (float)A->Unknown70;
    FUN_109e3d70();
}
