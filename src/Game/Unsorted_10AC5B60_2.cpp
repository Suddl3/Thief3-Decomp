// Game/Unsorted_10AC5B60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E330.h"
#include "Game/Class_10AA3520.h"
#include "Game/Class_10AC92E0.h"
#include "Game/Class_10AC92F0.h"
#include "Game/Class_10AC9300.h"
#include "Game/Class_10AC9310.h"
#include "Game/Class_10ACFDE0.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6FC78.h"
#include "Game/Class_10E6FC7C.h"
#include "Game/Class_10E6FCF8.h"
#include "Game/Class_10E6FEDC.h"
#include "Game/Class_10E70060.h"
#include "Game/Class_10E700F0.h"
#include "Game/Class_10E7007C.h"
#include "Game/Class_10E708CC.h"
#include "Game/Class_10E708D8.h"
#include "Game/Class_10E708E4.h"
#include "Game/Class_10E708F0.h"
#include "Game/Class_10E708FC.h"
#include "Game/Class_10E70908.h"
#include "Game/Class_10E70914.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10AC67F0.h"
#include "Game/Struct_10AC6820.h"
#include "Game/cVertexBufferInfo.h"
#include "Game/Class_10E701C8.h"
#include "Game/Class_10B82390.h"

extern void* DAT_10e6fc78[];

extern void* DAT_10e6fc7c[];

extern void* DAT_10e6fedc[];

extern float DAT_10e58a20;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern void* DAT_10e701c8[];

void FUN_10a4c5f0();

Class_10B82390* __stdcall FUN_10acf690(int A);

void FUN_10acf940();

class Class_1098E330;

struct Struct_10AD0040
{
    char Unknown00[0xE8];
    Class_1098E330* UnknownE8;
    int UnknownEC;
};

void FUN_10ad01a0();

struct Struct_10AA3520
{
    char Unknown00[0x08];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10ACB8B0
{
public:
    void FUN_10acb8b0(int A, int B);
};

extern Class_10F3A3D8* DAT_10f3a3d8;

extern void* DAT_10e708cc[];

extern void* DAT_10e708d8[];

extern void* DAT_10e708e4[];

extern void* DAT_10e708f0[];

extern void* DAT_10e708fc[];

extern void* DAT_10e70908[];

extern void* DAT_10e70914[];

// FUNCTION: 0x10AC67F0 ?GetUnknownD0@cVertexBufferInfo@@QAE?AUStruct_10AC67F0@@XZ
Struct_10AC67F0 cVertexBufferInfo::GetUnknownD0()
{
    return m_Origin;
}

// FUNCTION: 0x10AC6820 ?GetUnknown108@cVertexBufferInfo@@QAE?AUStruct_10AC6820@@XZ
Struct_10AC6820 cVertexBufferInfo::GetUnknown108()
{
    return m_Bounds;
}

// FUNCTION: 0x10AC6850 ?GetField168@cVertexBufferInfo@@UAEMXZ
float cVertexBufferInfo::GetField168()
{
    return Field168;
}

// FUNCTION: 0x10AC6860 ?GetField1B0@cVertexBufferInfo@@QAEHXZ
int cVertexBufferInfo::GetField1B0()
{
    return Field1B0;
}

// FUNCTION: 0x10AC84B0 ?FUN_10ac84b0@@YGHPAVClass_1098E330@@@Z
int __stdcall FUN_10ac84b0(Class_1098E330* Obj)
{
    int Value = 0;
    Obj->FUN_1098e330(0x8000ca, &Value);
    return Value;
}

// FUNCTION: 0x10AC84E0 ?FUN_10ac84e0@@YGHPAVClass_1098E330@@@Z
int __stdcall FUN_10ac84e0(Class_1098E330* Obj)
{
    int Value = 0;
    Obj->FUN_1098e330(0x8000cb, &Value);
    return Value;
}

// FUNCTION: 0x10AC8510 ?FUN_10ac8510@@YGHPAVClass_1098E330@@@Z
int __stdcall FUN_10ac8510(Class_1098E330* Obj)
{
    int Value = 0;
    Obj->FUN_1098e330(0x80048b, &Value);
    return Value;
}

// FUNCTION: 0x10AC8660 ?FUN_10ac8660@Class_10E6FC78@@QAEPAV1@XZ
Class_10E6FC78* Class_10E6FC78::FUN_10ac8660()
{
    Field00 = DAT_10e6fc78;
    return this;
}

// FUNCTION: 0x10AC87C0 ?FUN_10ac87c0@Class_10E6FC7C@@QAEPAV1@XZ
Class_10E6FC7C* Class_10E6FC7C::FUN_10ac87c0()
{
    Field00 = DAT_10e6fc7c;
    return this;
}

// FUNCTION: 0x10AC92E0 ?FUN_10ac92e0@Class_10AC92E0@@QAEXXZ
void Class_10AC92E0::FUN_10ac92e0()
{
    Field05 = 0x1;
}

// FUNCTION: 0x10AC92F0 ?FUN_10ac92f0@Class_10AC92F0@@QAEXXZ
void Class_10AC92F0::FUN_10ac92f0()
{
    Field05 = 0;
}

// FUNCTION: 0x10AC9300 ?FUN_10ac9300@Class_10AC9300@@QAEXXZ
void Class_10AC9300::FUN_10ac9300()
{
    Field07 = 1;
}

// FUNCTION: 0x10AC9310 ?FUN_10ac9310@Class_10AC9310@@QAEXXZ
void Class_10AC9310::FUN_10ac9310()
{
    Field08 = 1;
}

// FUNCTION: 0x10AC9330 ??0Class_10E6FCF8@@QAE@XZ
Class_10E6FCF8::Class_10E6FCF8()
{
    Unknown04 = 0;
    Unknown05 = 0;
    Unknown06 = 0;
    Unknown07 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
}

// FUNCTION: 0x10AC9420 ??_GClass_10E6FCF8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AC9330's definition in this unit.

// FUNCTION: 0x10ACA670 ?FUN_10aca670@Class_10E6FEDC@@QAEPAV1@XZ
Class_10E6FEDC* Class_10E6FEDC::FUN_10aca670()
{
    Field00 = DAT_10e6fedc;
    return this;
}

// FUNCTION: 0x10ACC480 ?FUN_10acc480@@YGHHHH@Z
int __stdcall FUN_10acc480(int p1, int p2, int p3)
{
    return 2;
}

// FUNCTION: 0x10ACC490 ?FUN_10acc490@Class_10E7007C@@UAEMHHH@Z
float Class_10E7007C::FUN_10acc490(int a, int b, int c)
{
    return DAT_10e58a20;
}

// FUNCTION: 0x10ACC4A0 ?FUN_10acc4a0@@YGMPAVClass_1098E330@@HH@Z
float __stdcall FUN_10acc4a0(Class_1098E330* Obj, int, int)
{
    float Value = -1.0f;
    Obj->FUN_1098e330(0x10058a, (int*)&Value);
    return Value;
}

// FUNCTION: 0x10ACD6A0 ??0Class_10E700F0@@QAE@XZ
Class_10E700F0::Class_10E700F0()
{
}

// FUNCTION: 0x10ACE450 ?HandleEvent@@YGXHHHH@Z
void __stdcall HandleEvent(int A, int B, int C, int D)
{
    if (A == 0x10)
        DAT_10f46da0->Virtual5(0x39, B, 0, 0);
}

// FUNCTION: 0x10ACE4A0 ?FUN_10ace4a0@Class_10E701C8@@QAEXXZ
void Class_10E701C8::FUN_10ace4a0()
{
    *(void**)this = (void*)DAT_10e701c8;
    FUN_10a4c5f0();
}

// FUNCTION: 0x10ACFB10 ?FUN_10acfb10@@YGXHPAX@Z
void __stdcall FUN_10acfb10(int A, void* B)
{
    Class_10B82390* Obj = FUN_10acf690(A);
    if (Obj)
        Obj->FUN_10b82390(0x8056b, B);
}

// FUNCTION: 0x10ACFDD0 ?FUN_10acfdd0@@YAXXZ
void FUN_10acfdd0()
{
    FUN_10acf940();
}

// FUNCTION: 0x10AD0040 ?Matches@Class_10ACFDE0@@QAEHHPAUStruct_10AD0040@@@Z
int Class_10ACFDE0::Matches(int A, Struct_10AD0040* B)
{
    return FUN_10acfde0(A, B->UnknownEC == 0 ? 0 : B->UnknownE8);
}

// FUNCTION: 0x10AD0200 ?FUN_10ad0200@@YAXXZ
void FUN_10ad0200()
{
    FUN_10ad01a0();
}

// FUNCTION: 0x10AD0900 ?FUN_10ad0900@@YGHHHH@Z
int __stdcall FUN_10ad0900(int p1, int p2, int p3)
{
    return 1;
}

// FUNCTION: 0x10AD0910 ?FUN_10ad0910@@YAHXZ
int FUN_10ad0910()
{
    return 0x91;
}

// FUNCTION: 0x10AD0920 ?FUN_10ad0920@@YGHHHH@Z
int __stdcall FUN_10ad0920(int A, int B, int C)
{
    DAT_10f46da0->Virtual5(0x44, DAT_10f35dec->Unknown08, -1, 0);
    return 1;
}

// FUNCTION: 0x10AD0950 ?FUN_10ad0950@@YAHXZ
int FUN_10ad0950()
{
    return 0x92;
}

// FUNCTION: 0x10AD0960 ?FUN_10ad0960@@YGHHHH@Z
int __stdcall FUN_10ad0960(int A, int B, int C)
{
    DAT_10f46da0->Virtual5(0x46, DAT_10f35dec->Unknown08, -1, 0);
    return 1;
}

// FUNCTION: 0x10AD09B0 ?FUN_10ad09b0@@YAHXZ
int FUN_10ad09b0()
{
    return 0x86;
}

// FUNCTION: 0x10AD09C0 ?FUN_10ad09c0@@YAHXZ
int FUN_10ad09c0()
{
    return 0x84;
}

// FUNCTION: 0x10AD09D0 ?FUN_10ad09d0@Class_10E708F0@@UAEHHPAVClass_10AA3520@@H@Z
int Class_10E708F0::FUN_10ad09d0(int A, Class_10AA3520* Obj, int C)
{
    int Value = Obj->Virtual8();
    DAT_10f3a3d8->Unknown110->FUN_10acb8b0(Value, 0);
    return 1;
}

// FUNCTION: 0x10AD0A00 ?FUN_10ad0a00@@YAHXZ
int FUN_10ad0a00()
{
    return 0x93;
}

// FUNCTION: 0x10AD0A10 ?FUN_10ad0a10@@YAHXZ
int FUN_10ad0a10()
{
    return 0x97;
}

// FUNCTION: 0x10AD0A20 ?FUN_10ad0a20@@YAHXZ
int FUN_10ad0a20()
{
    return 0x9b;
}

// FUNCTION: 0x10AD0AA0 ?FUN_10ad0aa0@Class_10E708CC@@QAEPAV1@XZ
Class_10E708CC* Class_10E708CC::FUN_10ad0aa0()
{
    *(void**)this = DAT_10e708cc;
    return this;
}

// FUNCTION: 0x10AD0AB0 ?FUN_10ad0ab0@Class_10E708D8@@QAEPAV1@XZ
Class_10E708D8* Class_10E708D8::FUN_10ad0ab0()
{
    *(void**)this = DAT_10e708d8;
    return this;
}

// FUNCTION: 0x10AD0AC0 ?FUN_10ad0ac0@Class_10E708E4@@QAEPAV1@XZ
Class_10E708E4* Class_10E708E4::FUN_10ad0ac0()
{
    *(void**)this = DAT_10e708e4;
    return this;
}

// FUNCTION: 0x10AD0AD0 ?FUN_10ad0ad0@Class_10E708F0@@QAEPAV1@XZ
Class_10E708F0* Class_10E708F0::FUN_10ad0ad0()
{
    *(void**)this = DAT_10e708f0;
    return this;
}

// FUNCTION: 0x10AD0AE0 ?FUN_10ad0ae0@Class_10E708FC@@QAEPAV1@XZ
Class_10E708FC* Class_10E708FC::FUN_10ad0ae0()
{
    Field00 = DAT_10e708fc;
    return this;
}

// FUNCTION: 0x10AD0AF0 ?FUN_10ad0af0@Class_10E70908@@QAEPAV1@XZ
Class_10E70908* Class_10E70908::FUN_10ad0af0()
{
    Field00 = DAT_10e70908;
    return this;
}

// FUNCTION: 0x10AD0B00 ?FUN_10ad0b00@Class_10E70914@@QAEPAV1@XZ
Class_10E70914* Class_10E70914::FUN_10ad0b00()
{
    Field00 = DAT_10e70914;
    return this;
}
