// Game/Unsorted_10C19200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10C1A940.h"
#include "Game/Class_10C1A950.h"
#include "Game/Class_10C1AAC0.h"
#include "Game/Class_10E98D08.h"
#include "Game/Class_10C28EF0.h"
#include "Game/Class_10C28F00.h"
#include "Game/SoundNotifier.h"
#include "Game/Class_10E99370.h"
#include "Game/Struct_10C1AAD0.h"
#include "Game/Struct_10C1ACA0.h"
#include "Game/Struct_10C1AD20.h"
#include "Game/Struct_10C1AF80.h"
#include "Game/Class_10C1AAD0.h"
#include "Game/Class_10C1AF80.h"
#include "Game/cMenu.h"
#include "Game/Class_10E98F00.h"
#include "Game/Class_10E99020.h"
#include "Game/Class_10E992D4.h"
#include "Game/Class_10E8D7AC.h"
#include "Game/Class_10E98F48.h"

extern int DAT_10ff708c;

extern void* DAT_10e98d08[];

extern void* DAT_10e8d7ac[];

void FUN_10c1f820();

extern void* DAT_10ff7098;

struct OutputStruct_10C26670
{
    int field0;
    int field4;
    int field8;
};

struct Info_10C266A0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

extern int DAT_10ff709c;

extern int DAT_10ff70a0;

// FUNCTION: 0x10C1A160 ?GetCounter@@YAHXZ
int GetCounter()
{
    return DAT_10ff708c;
}

// FUNCTION: 0x10C1A940 ?FUN_10c1a940@Class_10C1A940@@QAEXXZ
void Class_10C1A940::FUN_10c1a940()
{
    *(void**)this = (void*)DAT_10e98d08;
}

// FUNCTION: 0x10C1A950 ?FUN_10c1a950@Class_10C1A950@@UAEMXZ
float Class_10C1A950::FUN_10c1a950()
{
    return Field20;
}

// FUNCTION: 0x10C1AAC0 ?FUN_10c1aac0@Class_10C1AAC0@@QAEEXZ
unsigned char Class_10C1AAC0::FUN_10c1aac0()
{
    return Unknown46;
}

// FUNCTION: 0x10C1AAD0 ?FUN_10c1aad0@Class_10C1AAD0@@QAE_NPAUStruct_10C1AAD0@@PAM@Z
bool Class_10C1AAD0::FUN_10c1aad0(Struct_10C1AAD0* Out, float* Value)
{
    *Out = Unknown48;
    *Value = 16.0f;
    return true;
}

// FUNCTION: 0x10C1AB60 ?FUN_10c1ab60@@YAHXZ
int FUN_10c1ab60()
{
    return 0x100011;
}

// FUNCTION: 0x10C1ABC0 ?FUN_10c1abc0@@YAHXZ
int FUN_10c1abc0()
{
    return 0x100012;
}

// FUNCTION: 0x10C1AC50 ?FUN_10c1ac50@@YAHXZ
int FUN_10c1ac50()
{
    return 0x100013;
}

// FUNCTION: 0x10C1AC90 ?FUN_10c1ac90@@YAHXZ
int FUN_10c1ac90()
{
    return 0x100014;
}

// FUNCTION: 0x10C1AD10 ?FUN_10c1ad10@@YAHXZ
int FUN_10c1ad10()
{
    return 0x1001ea;
}

// FUNCTION: 0x10C1ADB0 ?FUN_10c1adb0@@YAHXZ
int FUN_10c1adb0()
{
    return 0x1002c5;
}

// FUNCTION: 0x10C1AF60 ?FUN_10c1af60@@YAHXZ
int FUN_10c1af60()
{
    return 0x100435;
}

// FUNCTION: 0x10C1AF70 ?FUN_10c1af70@@YAHXZ
int FUN_10c1af70()
{
    return 0x100447;
}

// FUNCTION: 0x10C1AF80 ?FUN_10c1af80@Class_10C1AF80@@QAE_NPAUStruct_10C1AF80@@PAM@Z
bool Class_10C1AF80::FUN_10c1af80(Struct_10C1AF80* Out, float* Value)
{
    *Out = Unknown0C;
    *Value = 0.0f;
    return true;
}

// FUNCTION: 0x10C1AFB0 ?FUN_10c1afb0@@YAHXZ
int FUN_10c1afb0()
{
    return 0x1005cd;
}

// FUNCTION: 0x10C1D6A0 ??0Class_10E8D7AC@@QAE@XZ
Class_10E8D7AC::Class_10E8D7AC()
{
    Unknown00 = DAT_10e8d7ac;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
}

// FUNCTION: 0x10C1F980 ?FUN_10c1f980@@YAXXZ
void FUN_10c1f980()
{
    FUN_10c1f820();
}

// FUNCTION: 0x10C25570 ?FUN_10c25570@@YAPAXXZ
void* FUN_10c25570(void)
{
    return DAT_10ff7098;
}

// FUNCTION: 0x10C26670 ?FUN_10c26670@@YGXPAUOutputStruct_10C26670@@HHH@Z
void __stdcall FUN_10c26670(OutputStruct_10C26670* Out, int param2, int param3, int param4)
{
    Out->field0 = 0xffff - param2;
    Out->field4 = 0;
    Out->field8 = 0xffff - param3;
}

// FUNCTION: 0x10C266A0 ?FUN_10c266a0@@YGXPAUInfo_10C266A0@@HHH@Z
void __stdcall FUN_10c266a0(Info_10C266A0* Out, int A, int B, int C)
{
    Out->Unknown00 = C;
    Out->Unknown04 = 0xFFFF - A;
    Out->Unknown08 = B;
}

// FUNCTION: 0x10C27900 ?FUN_10c27900@@YAHXZ
int FUN_10c27900()
{
    return DAT_10ff709c;
}

// FUNCTION: 0x10C28BC0 ?FUN_10c28bc0@@YAHXZ
int FUN_10c28bc0()
{
    return DAT_10ff70a0;
}

// FUNCTION: 0x10C28EF0 ?FUN_10c28ef0@Class_10C28EF0@@QAEHXZ
int Class_10C28EF0::FUN_10c28ef0()
{
    return Field1D;
}

// FUNCTION: 0x10C28F00 ?Reset@Class_10C28F00@@QAEXXZ
void Class_10C28F00::Reset()
{
    Field04 = 0;
}
