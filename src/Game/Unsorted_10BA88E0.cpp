// Game/Unsorted_10BA88E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BA9EC0.h"
#include "Game/Class_10BA9ED0.h"
#include "Game/Class_10BA9F80.h"
#include "Game/Class_10BA9FA0.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BAA050.h"
#include "Game/Class_10BAA390.h"
#include "Game/Class_10BAA3B0.h"
#include "Game/Class_10BAA3C0.h"
#include "Game/Class_10BB7D50.h"
#include "Game/Class_10BB7D70.h"
#include "Game/Class_10BB7D80.h"
#include "Game/Class_10BB7D90.h"
#include "Game/Class_10BB7DA0.h"
#include "Game/Class_10BB7E40.h"
#include "Game/Class_10BB7E50.h"
#include "Game/Class_10BB7EE0.h"
#include "Game/Class_10BB7EF0.h"
#include "Game/Class_10BB7F20.h"
#include "Game/Class_10BB80E0.h"
#include "Game/Class_10BB80F0.h"
#include "Game/Class_10BB8100.h"
#include "Game/Class_10BB8110.h"
#include "Game/Class_10BB8120.h"
#include "Game/Class_10BB8130.h"
#include "Game/Class_10BB8140.h"
#include "Game/Class_10BB8150.h"
#include "Game/Class_10BB8230.h"
#include "Game/Class_10BB8240.h"
#include "Game/Class_10BB8250.h"
#include "Game/Class_10BB8260.h"
#include "Game/Class_10BB8270.h"
#include "Game/Class_10BB8280.h"
#include "Game/Class_10BB85B0.h"
#include "Game/Class_10BB85C0.h"
#include "Game/Class_10BB85D0.h"
#include "Game/Class_10BB8600.h"
#include "Game/Class_10BB8610.h"
#include "Game/Class_10BB8620.h"
#include "Game/Class_10BB8630.h"
#include "Game/Class_10BB8640.h"
#include "Game/Class_10BB86E0.h"
#include "Game/Class_10C29000.h"
#include "Game/Class_10E99370.h"
#include "Game/SoundSchema.h"
#include "Game/Struct_10BA9EF0.h"
#include "Game/Struct_10BA9F20.h"
#include "Game/Struct_10BB8180.h"
#include "Game/Class_10BA9F20.h"
#include "Game/Class_10BA9F70.h"
#include "Game/Class_10BB8180.h"
#include "Game/Class_10E5CBD8.h"

class Class_10E4AB88
{
public:
    void* FUN_10baa3a0();

    char Unknown00[0x160];
    void* Unknown160;
};

void __stdcall FUN_109e3c90(int);

// FUNCTION: 0x10BA9EC0 ?FUN_10ba9ec0@Class_10BA9EC0@@QAEPAXXZ
void* Class_10BA9EC0::FUN_10ba9ec0()
{
    return &UnknownF0;
}

// FUNCTION: 0x10BA9ED0 ?FUN_10ba9ed0@Class_10BA9ED0@@QAEPAXXZ
void* Class_10BA9ED0::FUN_10ba9ed0()
{
    return &Unknown128;
}

// FUNCTION: 0x10BA9EF0 ?FUN_10ba9ef0@Class_10E5CBD8@@QAE?AUStruct_10BA9EF0@@XZ
Struct_10BA9EF0 Class_10E5CBD8::FUN_10ba9ef0()
{
    return Unknown90;
}

// FUNCTION: 0x10BA9F20 ?FUN_10ba9f20@Class_10BA9F20@@QAE?AUStruct_10BA9F20@@XZ
Struct_10BA9F20 Class_10BA9F20::FUN_10ba9f20()
{
    return Unknown9C;
}

// FUNCTION: 0x10BA9F70 ?FUN_10ba9f70@Class_10BA9F70@@QAEXE@Z
void Class_10BA9F70::FUN_10ba9f70(unsigned char param)
{
    *((unsigned char*)this + 0x65) = param;
}

// FUNCTION: 0x10BA9F80 ?FUN_10ba9f80@Class_10BA9F80@@UAEMXZ
float Class_10BA9F80::FUN_10ba9f80()
{
    return Unknown64;
}

// FUNCTION: 0x10BA9FA0 ?FUN_10ba9fa0@Class_10BA9FA0@@UAEMXZ
float Class_10BA9FA0::FUN_10ba9fa0()
{
    return Unknown68;
}

// FUNCTION: 0x10BA9FD0 ?FUN_10ba9fd0@Class_10BA9FD0@@QAEPAXXZ
void* Class_10BA9FD0::FUN_10ba9fd0() {
    return &unknown_54;
}

// FUNCTION: 0x10BAA050 ?FUN_10baa050@Class_10BAA050@@QAEPAXXZ
void* Class_10BAA050::FUN_10baa050()
{
    return ((void**)Unknown44)[1];
}

// FUNCTION: 0x10BAA390 ?FUN_10baa390@Class_10BAA390@@QAEXH@Z
void Class_10BAA390::FUN_10baa390(int param)
{
    Unknown160 = param;
}

// FUNCTION: 0x10BAA3A0 ?FUN_10baa3a0@Class_10E4AB88@@QAEPAXXZ
void* Class_10E4AB88::FUN_10baa3a0()
{
    return Unknown160;
}

// FUNCTION: 0x10BAA3B0 ?FUN_10baa3b0@Class_10BAA3B0@@QAEXH@Z
void Class_10BAA3B0::FUN_10baa3b0(int param)
{
    Unknown0C8 = param;
}

// FUNCTION: 0x10BAA3C0 ?FUN_10baa3c0@Class_10BAA3C0@@QAEPAXXZ
void* Class_10BAA3C0::FUN_10baa3c0()
{
    return UnknownCC;
}

// FUNCTION: 0x10BB0AA0 ?FUN_10bb0aa0@@YGXH@Z
void __stdcall FUN_10bb0aa0(int x)
{
    FUN_109e3c90(x);
}

// FUNCTION: 0x10BB0AD0 ?FUN_10bb0ad0@@YAHXZ
int FUN_10bb0ad0()
{
    return 0x36;
}

// FUNCTION: 0x10BB0AE0 ?FUN_10bb0ae0@@YAHXZ
int FUN_10bb0ae0()
{
    return 0x81;
}

// FUNCTION: 0x10BB0AF0 ?FUN_10bb0af0@@YAHXZ
int FUN_10bb0af0()
{
    return 0x82;
}

// FUNCTION: 0x10BB0B00 ?FUN_10bb0b00@@YAHXZ
int FUN_10bb0b00()
{
    return 0x83;
}

// FUNCTION: 0x10BB7D50 ?FUN_10bb7d50@Class_10BB7D50@@QAEXXZ
void Class_10BB7D50::FUN_10bb7d50()
{
    Unknown1e8 = 0;
}

// FUNCTION: 0x10BB7D70 ?FUN_10bb7d70@Class_10BB7D70@@QAEMXZ
float Class_10BB7D70::FUN_10bb7d70()
{
    return Unknown1DC;
}

// FUNCTION: 0x10BB7D80 ?FUN_10bb7d80@Class_10BB7D80@@QAEXH@Z
void Class_10BB7D80::FUN_10bb7d80(int param)
{
    Unknown244 = param;
}

// FUNCTION: 0x10BB7D90 ?FUN_10bb7d90@Class_10BB7D90@@QAEXXZ
void Class_10BB7D90::FUN_10bb7d90()
{
    Unknown24c--;
}

// FUNCTION: 0x10BB7DA0 ?FUN_10bb7da0@Class_10BB7DA0@@QAEXXZ
void Class_10BB7DA0::FUN_10bb7da0()
{
    Unknown254++;
}

// FUNCTION: 0x10BB7E40 ?FUN_10bb7e40@Class_10BB7E40@@QAEMXZ
float Class_10BB7E40::FUN_10bb7e40()
{
    return Unknown25C;
}

// FUNCTION: 0x10BB7E50 ?FUN_10bb7e50@Class_10BB7E50@@QAEMXZ
float Class_10BB7E50::FUN_10bb7e50()
{
    return Unknown260;
}

// FUNCTION: 0x10BB7EE0 ?FUN_10bb7ee0@Class_10BB7EE0@@QAEMXZ
float Class_10BB7EE0::FUN_10bb7ee0()
{
    return Unknown27C;
}

// FUNCTION: 0x10BB7EF0 ?FUN_10bb7ef0@Class_10BB7EF0@@QAEXH@Z
void Class_10BB7EF0::FUN_10bb7ef0(int param)
{
    Unknown27C = param;
}

// FUNCTION: 0x10BB7F20 ?FUN_10bb7f20@Class_10BB7F20@@QAEEXZ
unsigned char Class_10BB7F20::FUN_10bb7f20()
{
    return Unknown282;
}

// FUNCTION: 0x10BB80E0 ?FUN_10bb80e0@Class_10BB80E0@@QAEMXZ
float Class_10BB80E0::FUN_10bb80e0()
{
    return Unknown2C8;
}

// FUNCTION: 0x10BB80F0 ?FUN_10bb80f0@Class_10BB80F0@@QAEXH@Z
void Class_10BB80F0::FUN_10bb80f0(int param)
{
    Unknown2c8 = param;
}

// FUNCTION: 0x10BB8100 ?FUN_10bb8100@Class_10BB8100@@QAEXE@Z
void Class_10BB8100::FUN_10bb8100(unsigned char param)
{
    Unknown280 = param;
}

// FUNCTION: 0x10BB8110 ?FUN_10bb8110@Class_10BB8110@@QAEEXZ
unsigned char Class_10BB8110::FUN_10bb8110()
{
    return Unknown280;
}

// FUNCTION: 0x10BB8120 ?FUN_10bb8120@Class_10BB8120@@QAEXH@Z
void Class_10BB8120::FUN_10bb8120(int param)
{
    Unknown2a8 = param;
}

// FUNCTION: 0x10BB8130 ?FUN_10bb8130@Class_10BB8130@@QAEMXZ
float Class_10BB8130::FUN_10bb8130()
{
    return Unknown2a8;
}

// FUNCTION: 0x10BB8140 ?FUN_10bb8140@Class_10BB8140@@QAEXH@Z
void Class_10BB8140::FUN_10bb8140(int param)
{
    Unknown2ac = param;
}

// FUNCTION: 0x10BB8150 ?FUN_10bb8150@Class_10BB8150@@QAEMXZ
float Class_10BB8150::FUN_10bb8150()
{
    return Unknown2ac;
}

// FUNCTION: 0x10BB8180 ?FUN_10bb8180@Class_10BB8180@@QAE?AUStruct_10BB8180@@XZ
Struct_10BB8180 Class_10BB8180::FUN_10bb8180()
{
    return Unknown2B0;
}

// FUNCTION: 0x10BB8230 ?FUN_10bb8230@Class_10BB8230@@QAEEXZ
unsigned char Class_10BB8230::FUN_10bb8230() {
    return unknown_334;
}

// FUNCTION: 0x10BB8240 ?FUN_10bb8240@Class_10BB8240@@QAEEXZ
unsigned char Class_10BB8240::FUN_10bb8240() {
    return unknown_335;
}

// FUNCTION: 0x10BB8250 ?FUN_10bb8250@Class_10BB8250@@QAEEXZ
unsigned char Class_10BB8250::FUN_10bb8250() {
    return unknown_337;
}

// FUNCTION: 0x10BB8260 ?FUN_10bb8260@Class_10BB8260@@QAEXE@Z
void Class_10BB8260::FUN_10bb8260(unsigned char param)
{
    Unknown337 = param;
}

// FUNCTION: 0x10BB8270 ?FUN_10bb8270@Class_10BB8270@@QAEMXZ
float Class_10BB8270::FUN_10bb8270()
{
    return Unknown2c0;
}

// FUNCTION: 0x10BB8280 ?FUN_10bb8280@Class_10BB8280@@QAEXH@Z
void Class_10BB8280::FUN_10bb8280(int param)
{
    Unknown2C0 = param;
}

// FUNCTION: 0x10BB85B0 ?FUN_10bb85b0@Class_10BB85B0@@QAEXE@Z
void Class_10BB85B0::FUN_10bb85b0(unsigned char param)
{
    Unknown2f0 = param;
}

// FUNCTION: 0x10BB85C0 ?FUN_10bb85c0@Class_10BB85C0@@QAEEXZ
unsigned char Class_10BB85C0::FUN_10bb85c0() {
    return unknown_2f1;
}

// FUNCTION: 0x10BB85D0 ?FUN_10bb85d0@Class_10BB85D0@@QAEXXZ
void Class_10BB85D0::FUN_10bb85d0()
{
    Unknown10->FUN_10c29000();
}

// FUNCTION: 0x10BB8600 ?FUN_10bb8600@Class_10BB8600@@QAEEXZ
unsigned char Class_10BB8600::FUN_10bb8600()
{
    return Unknown2f4;
}

// FUNCTION: 0x10BB8610 ?FUN_10bb8610@Class_10BB8610@@QAEHXZ
int Class_10BB8610::FUN_10bb8610()
{
    return Unknown300;
}

// FUNCTION: 0x10BB8620 ?FUN_10bb8620@Class_10BB8620@@QAEXXZ
void Class_10BB8620::FUN_10bb8620()
{
    Unknown2f5 = 1;
}

// FUNCTION: 0x10BB8630 ?FUN_10bb8630@Class_10BB8630@@QAEXXZ
void Class_10BB8630::FUN_10bb8630()
{
    Unknown2f5 = 0;
}

// FUNCTION: 0x10BB8640 ?FUN_10bb8640@Class_10BB8640@@QAEPAXXZ
void* Class_10BB8640::FUN_10bb8640()
{
    return Unknown2f8;
}

// FUNCTION: 0x10BB86E0 ?FUN_10bb86e0@Class_10BB86E0@@QAEMXZ
float Class_10BB86E0::FUN_10bb86e0()
{
    return Unknown340;
}
