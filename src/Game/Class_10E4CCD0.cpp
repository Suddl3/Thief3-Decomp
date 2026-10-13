// Game/Class_10E4CCD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BC9D40.h"
#include "Game/Class_10E90D70.h"
#include "Game/State_PlayAnim.h"
#include "Game/Class_10FF667C.h"
#include "Game/Struct_10B9BCA0.h"
#include "Game/Class_10B9BDA0_Member.h"
#include "Game/State_PlayAction.h"
#include "Game/cSampleStats.h"
#include "Game/Class_10BD8880.h"
#include "Game/Class_10E928E8.h"
#include "Game/Class_10E92460.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E95898.h"
#include "Game/Struct_10B98E00.h"
#include "Game/Class_10BE5EF0.h"
#include "Game/Class_10E96FD0.h"
#include "Game/State_PatrolLook.h"
#include "Game/State_Gassed.h"
#include "Game/Class_10E96EB0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class State_SearchLook
{
public:
    State_SearchLook(int A, int B);

    char Unknown00[0x48];
};

struct Struct_10B98E00;

class cTacticWeaponHolster : public Class_10E90D70
{
public:
    cTacticWeaponHolster(int A, int B);
};

class Class_10E92730
{
public:
    Class_10E92730(int A, int B);

    char Unknown00[0x6C];
};

class Class_10E95AC8
{
public:
    Class_10E95AC8(int A, int B, int C);

    char Unknown00[0x40];
};

class Class_10E4CCD0;

class Class_10E95288
{
public:
    Class_10E95288(Struct_10B98E00* A, Class_10E4CCD0* B);

    int Unknown00[24];
};

class State_MunchCorpse
{
public:
    State_MunchCorpse(int A, int B, int C);

    int Unknown00[21];
};

void* FUN_10be1c60();

extern float DAT_10eafbdc;

void* FUN_10be4910();

int FUN_10be9bc0();

int FUN_10bed050();

int GetGassedEnableId();

int FUN_10bd1810();

// 0x11c bytes; built by its constructor at 0x10BD51C0.
class Class_10E93878
{
public:
    Class_10E93878(int A, int B);

    void** Unknown00;
    int Unknown04[70];
};

int FUN_10be9210();

// FUNCTION: 0x10B97D80 ?CreatePlayAnimState@Class_10E4CCD0@@UAEPAVState_PlayAnim@@PAUStruct_10B98E00@@H_N@Z
State_PlayAnim* Class_10E4CCD0::CreatePlayAnimState(Struct_10B98E00* A, int B, bool C)
{
    return new(0, 0, 0, 0, 0) State_PlayAnim((int)A, (int)this, B, C);
}

// FUNCTION: 0x10B97F30 ?CreateSearchLookState@Class_10E4CCD0@@UAEPAVState_SearchLook@@H@Z
State_SearchLook* Class_10E4CCD0::CreateSearchLookState(int A)
{
    return new(0, 0, 0, 0, 0) State_SearchLook(A, (int)this);
}

// FUNCTION: 0x10B98050 ?CreatePlayActionState@Class_10E4CCD0@@UAEPAVState_PlayAction@@PAUStruct_10B98E00@@_N1@Z
State_PlayAction* Class_10E4CCD0::CreatePlayActionState(Struct_10B98E00* A, bool B, bool C)
{
    return new(0, 0, 0, 0, 0) State_PlayAction((int)A, (int)this, B, C);
}

// FUNCTION: 0x10B980E0 ?FUN_10b980e0@Class_10E4CCD0@@UAEPAVcSampleStats@@H@Z
cSampleStats* Class_10E4CCD0::FUN_10b980e0(int A)
{
    return new(0, 0, 0, 0, 0) cSampleStats(A, (int)this);
}

// FUNCTION: 0x10B98170 ?FUN_10b98170@Class_10E4CCD0@@UAEPAVClass_10BD8880@@PAUStruct_10B98E00@@@Z
Class_10BD8880* Class_10E4CCD0::FUN_10b98170(Struct_10B98E00* A)
{
    return new(0, 0, 0, 0, 0) Class_10BD8880((int)A, (int)this);
}

// FUNCTION: 0x10B98290 ?CreateTacticWeaponHolster@Class_10E4CCD0@@UAEPAVcTacticWeaponHolster@@H@Z
cTacticWeaponHolster* Class_10E4CCD0::CreateTacticWeaponHolster(int A)
{
    return new(0, 0, 0, 0, 0) cTacticWeaponHolster(A, (int)this);
}

// FUNCTION: 0x10B98570 ?FUN_10b98570@Class_10E4CCD0@@UAEPAVClass_10E928E8@@HH@Z
Class_10E928E8* Class_10E4CCD0::FUN_10b98570(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E928E8(A, (int)this);
}

// FUNCTION: 0x10B98740 ?FUN_10b98740@Class_10E4CCD0@@UAEPAVClass_10E92730@@H@Z
Class_10E92730* Class_10E4CCD0::FUN_10b98740(int A)
{
    return new(0, 0, 0, 0, 0) Class_10E92730(A, (int)this);
}

// FUNCTION: 0x10B987D0 ?FUN_10b987d0@Class_10E4CCD0@@UAEPAVClass_10E95AC8@@HH@Z
Class_10E95AC8* Class_10E4CCD0::FUN_10b987d0(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E95AC8(A, (int)this, B);
}

// FUNCTION: 0x10B98980 ?FUN_10b98980@Class_10E4CCD0@@UAEPAVClass_10E95288@@PAUStruct_10B98E00@@@Z
Class_10E95288* Class_10E4CCD0::FUN_10b98980(Struct_10B98E00* A)
{
    return new(0, 0, 0, 0, 0) Class_10E95288(A, this);
}

// FUNCTION: 0x10B98AA0 ?FUN_10b98aa0@Class_10E4CCD0@@UAEPAVClass_10E92460@@HH@Z
Class_10E92460* Class_10E4CCD0::FUN_10b98aa0(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E92460(A, (int)this, B);
}

// FUNCTION: 0x10B98B30 ?CreateMunchCorpseState@Class_10E4CCD0@@UAEPAVState_MunchCorpse@@HH@Z
State_MunchCorpse* Class_10E4CCD0::CreateMunchCorpseState(int A, int B)
{
    return new(0, 0, 0, 0, 0) State_MunchCorpse(A, (int)this, B);
}

// FUNCTION: 0x10B98F60 ?FUN_10b98f60@Class_10E4CCD0@@UAEPAVClass_10E95898@@PAUStruct_10B98E00@@H_N@Z
Class_10E95898* Class_10E4CCD0::FUN_10b98f60(Struct_10B98E00* A, int B, bool C)
{
    void* Id = FUN_10be1c60();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E95898((int)A, (int)this, B, C);
    return 0;
}

// FUNCTION: 0x10B990D0 ?FUN_10b990d0@Class_10E4CCD0@@UAEPAVClass_10BE5EF0@@PAUStruct_10B98E00@@@Z
Class_10BE5EF0* Class_10E4CCD0::FUN_10b990d0(Struct_10B98E00* A)
{
    void* Id = FUN_10be4910();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10BE5EF0((int)A, (int)this);
    return 0;
}

// FUNCTION: 0x10B99470 ?FUN_10b99470@Class_10E4CCD0@@UAEPAVClass_10E96FD0@@PAUStruct_10B98E00@@H@Z
Class_10E96FD0* Class_10E4CCD0::FUN_10b99470(Struct_10B98E00* A, int B)
{
    int Id = FUN_10be9bc0();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E96FD0((int)A, (int)this, B);
    return 0;
}

// FUNCTION: 0x10B99780 ?CreatePatrolLookState@Class_10E4CCD0@@UAEPAVState_PatrolLook@@PAUStruct_10B98E00@@HHHHHH@Z
State_PatrolLook* Class_10E4CCD0::CreatePatrolLookState(Struct_10B98E00* A, int B, int C, int D, int E, int F, int G)
{
    int Id = FUN_10bed050();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) State_PatrolLook((int)A, (int)this, B, C, D, E, F, G);
    return 0;
}

// FUNCTION: 0x10B999E0 ?CreateGassedState@Class_10E4CCD0@@UAEPAVState_Gassed@@PAUStruct_10B98E00@@H@Z
State_Gassed* Class_10E4CCD0::CreateGassedState(Struct_10B98E00* A, int B)
{
    int Id = GetGassedEnableId();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) State_Gassed((int)A, (int)this, B);
    return 0;
}

// FUNCTION: 0x10B99CE0 ?FUN_10b99ce0@Class_10E4CCD0@@UAEPAVClass_10E93878@@PAUStruct_10B98E00@@@Z
Class_10E93878* Class_10E4CCD0::FUN_10b99ce0(Struct_10B98E00* A)
{
    int Id = FUN_10bd1810();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E93878((int)A, (int)this);
    return 0;
}

// FUNCTION: 0x10B99EF0 ?FUN_10b99ef0@Class_10E4CCD0@@UAEPAVClass_10E96EB0@@PAUStruct_10B98E00@@HH@Z
Class_10E96EB0* Class_10E4CCD0::FUN_10b99ef0(Struct_10B98E00* A, int B, int C)
{
    int Id = FUN_10be9210();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E96EB0((int)A, (int)this, B, C);
    return 0;
}
