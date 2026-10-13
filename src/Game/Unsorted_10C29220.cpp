// Game/Unsorted_10C29220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10C38430.h"
#include "Game/Class_10E99370.h"
#include "Game/Class_10E993C0.h"
#include "Game/Class_10E9AAD0.h"
#include "Game/MC_Turn.h"
#include "Game/MC_Follow.h"
#include "Game/MC_PullToPoint.h"
#include "Game/Info_10C2F870.h"
#include "Game/Struct_10C35670.h"
#include "Game/Class_10C38610.h"
#include "Game/Class_10E993C4.h"
#include "Game/MC_FollowAbsolute.h"
#include "Game/Class_10E9AF04.h"

extern void* DAT_10e993c0[];

void FUN_10c28280();

extern void* DAT_10e9aa7c[];

void FUN_10c27290();

extern const char DAT_10e9aaa8[];

class MC_MoveToPoint
{
public:
    void Construct();
    cString GetClassName();

    void* Field00;
};

class cMotionControllerAnim
{
public:
    virtual float FUN_10c35650();

    unsigned char FUN_10c2ecf0();
    unsigned char FUN_10c2ee10();
    unsigned char FUN_10c2eeb0();
    void* FUN_10c2f530();
    bool FindValue(int Key, int* Out);
    void FUN_10c2f5c0();
    void SetInfo(const Info_10C2F870* In);
    void FUN_10c2f960();
    void SetRotation(Struct_10C35670* Value);
    void InvalidateInfo();

    char Unknown00[0x60];
    float Field60;
    Struct_10C35670 m_Rotation;
    Info_10C2F870 m_Info;
    char Pad80[0x1b];
    bool m_HasRotation;
    char Pad9C[0x1];
    unsigned char Field9d;
    char Pad9E[0x1];
    union
    {
        char m_HasInfo;
        unsigned char Field9f;
    };
    char PadA0[0x2c];
    void* Fieldcc;
    char PadD0[0x3c];
    unsigned char Field10c;
    char Pad10D[0x7];
    unsigned char Field114;
    char Pad115[0x17];
    unsigned char Field12c;
    char Pad12D[0x23];
    int m_Key;
    int m_Value;
    char Pad158[0x8];
    unsigned char Field160;
};

void FUN_10c36a20();

extern const char DAT_10e9ae18[];

extern const char DAT_10e9ae54[];

class Object_10BCE8D0;

extern const char DAT_10e9aeb8[];

class MC_StayNear : public Class_10E9AF04
{
public:
    virtual void FUN_10c37e80(Object_10BCE8D0* A);

    cString GetMotionControllerName();
};

extern const char DAT_10e9aef4[];

extern const char DAT_10e9af34[];

extern void* DAT_10e9aad0[];

// FUNCTION: 0x10C296B0 ??0Class_10E993C0@@QAE@H@Z
Class_10E993C0::Class_10E993C0(int A)
{
    Unknown04 = A;
    Unknown00 = DAT_10e993c0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
}

// FUNCTION: 0x10C29EC0 ??0Class_10E993C4@@QAE@HH@Z
Class_10E993C4::Class_10E993C4(int A, int B) : Class_10E99370(A, B)
{
}

// FUNCTION: 0x10C29EE0 ?FUN_10c29ee0@@YAXXZ
void FUN_10c29ee0()
{
    FUN_10c28280();
}

// FUNCTION: 0x10C2EB30 ?Construct@MC_MoveToPoint@@QAEXXZ
void MC_MoveToPoint::Construct()
{
    Field00 = (void*)DAT_10e9aa7c;
    FUN_10c27290();
}

// FUNCTION: 0x10C2EBD0 ?GetClassName@MC_MoveToPoint@@QAE?AVcString@@XZ
cString MC_MoveToPoint::GetClassName()
{
    return cString(DAT_10e9aaa8);
}

// FUNCTION: 0x10C2ECF0 ?FUN_10c2ecf0@cMotionControllerAnim@@QAEEXZ
unsigned char cMotionControllerAnim::FUN_10c2ecf0()
{
    return Field160;
}

// FUNCTION: 0x10C2EE10 ?FUN_10c2ee10@cMotionControllerAnim@@QAEEXZ
unsigned char cMotionControllerAnim::FUN_10c2ee10()
{
    return Field114;
}

// FUNCTION: 0x10C2EEB0 ?FUN_10c2eeb0@cMotionControllerAnim@@QAEEXZ
unsigned char cMotionControllerAnim::FUN_10c2eeb0()
{
    return Field10c;
}

// FUNCTION: 0x10C2F530 ?FUN_10c2f530@cMotionControllerAnim@@QAEPAXXZ
void* cMotionControllerAnim::FUN_10c2f530()
{
    return Fieldcc;
}

// FUNCTION: 0x10C2F570 ?FindValue@cMotionControllerAnim@@QAE_NHPAH@Z
bool cMotionControllerAnim::FindValue(int Key, int* Out)
{
    if (Key == m_Key) {
        *Out = m_Value;
        return true;
    }
    return false;
}

// FUNCTION: 0x10C2F5C0 ?FUN_10c2f5c0@cMotionControllerAnim@@QAEXXZ
void cMotionControllerAnim::FUN_10c2f5c0()
{
    Field9d = 1;
}

// FUNCTION: 0x10C2F870 ?SetInfo@cMotionControllerAnim@@QAEXPBUInfo_10C2F870@@@Z
void cMotionControllerAnim::SetInfo(const Info_10C2F870* In)
{
    m_HasInfo = 1;
    m_Info = *In;
}

// FUNCTION: 0x10C2F960 ?FUN_10c2f960@cMotionControllerAnim@@QAEXXZ
void cMotionControllerAnim::FUN_10c2f960()
{
    Field12c = 1;
}

// FUNCTION: 0x10C35650 ?FUN_10c35650@cMotionControllerAnim@@UAEMXZ
float cMotionControllerAnim::FUN_10c35650()
{
    return Field60;
}

// FUNCTION: 0x10C35670 ?SetRotation@cMotionControllerAnim@@QAEXPAUStruct_10C35670@@@Z
void cMotionControllerAnim::SetRotation(Struct_10C35670* Value)
{
    m_Rotation = *Value;
    m_HasRotation = true;
}

// FUNCTION: 0x10C356A0 ?InvalidateInfo@cMotionControllerAnim@@QAEXXZ
void cMotionControllerAnim::InvalidateInfo()
{
    Field9f = 0;
}

// FUNCTION: 0x10C36F30 ?FUN_10c36f30@@YAXXZ
void FUN_10c36f30()
{
    FUN_10c36a20();
}

// FUNCTION: 0x10C374E0 ?GetMotionControllerName@MC_Follow@@QAE?AVcString@@XZ
cString MC_Follow::GetMotionControllerName()
{
    return cString(DAT_10e9ae18);
}

// FUNCTION: 0x10C378A0 ?GetMotionControllerName@MC_FollowAbsolute@@QAE?AVcString@@XZ
cString MC_FollowAbsolute::GetMotionControllerName()
{
    return cString(DAT_10e9ae54);
}

// FUNCTION: 0x10C37E80 ?FUN_10c37e80@MC_StayNear@@UAEXPAVObject_10BCE8D0@@@Z
void MC_StayNear::FUN_10c37e80(Object_10BCE8D0* A)
{
    FUN_10c372e0(A);
}

// FUNCTION: 0x10C38040 ?GetMotionControllerName@MC_StayNear@@QAE?AVcString@@XZ
cString MC_StayNear::GetMotionControllerName()
{
    return cString(DAT_10e9aeb8);
}

// FUNCTION: 0x10C382B0 ?GetMotionControllerName@MC_PullToPoint@@QAE?AVcString@@XZ
cString MC_PullToPoint::GetMotionControllerName()
{
    return cString(DAT_10e9aef4);
}

// FUNCTION: 0x10C382E0 ?FUN_10c382e0@@YAHXZ
int FUN_10c382e0()
{
    return 0x3;
}

// FUNCTION: 0x10C38430 ?GetMotionControllerName@Class_10C38430@@QAE?AVcString@@XZ
cString Class_10C38430::GetMotionControllerName()
{
    return cString(DAT_10e9af34);
}

// FUNCTION: 0x10C384F0 ?Construct@Class_10E9AAD0@@QAEXXZ
void Class_10E9AAD0::Construct()
{
    Field00 = (void*)DAT_10e9aad0;
}

// FUNCTION: 0x10C38610 ?Reset@Class_10C38610@@QAEXXZ
void Class_10C38610::Reset()
{
    Unknown0BC.FUN_10b26930(0);
    Unknown0C4 = 0;
    Unknown0FC = 0;
}
