// Game/Class_10E4CCD0_35.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E92118.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10bcbd00();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class cCombatBase;

class Class_10E96510;

class Class_10E91EE8;

class Class_10E92460;

class Class_10E92730;

class Class_10E928E8;

class Class_10E93020;

class State_PlayAnim;

class State_SearchLook;

class Class_10E93878;

class Class_10E93B68;

class Class_10E93E48;

class Class_10E95288;

class State_MunchCorpse;

class Class_10E95898;

class Class_10E95AC8;

class Class_10E96EB0;

class Class_10E96FD0;

class Class_10E97488;

// Copied from include/Game/Class_10E4CCD0.h with slot 21 named for this function.
class Class_10E4CCD0
{
public:
    virtual void Virtual0();
    virtual Class_10E95288* FUN_10b98e00(Struct_10B98E00* A);
    virtual void Virtual2();
    virtual Class_10E95898* FUN_10b98f60(Struct_10B98E00* A, int B, bool C);
    virtual void Virtual4();
    virtual Class_10E96510* FUN_10b990d0(Struct_10B98E00* A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual State_PlayAnim* CreatePlayAnimState(Struct_10B98E00* A, int B, bool C);
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual Class_10E97488* FUN_10b99780(Struct_10B98E00* A, int B, int C, int D, int E, int F, int G);
    virtual void Virtual18();
    virtual Class_10E91EE8* FUN_10b999e0(Struct_10B98E00* A, int B);
    virtual void Virtual20();
    virtual Class_10E92118* FUN_10b99b60(Struct_10B98E00* A, int B);
    virtual void Virtual22();
    virtual Class_10E93878* FUN_10b99ce0(Struct_10B98E00* A);
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual State_SearchLook* FUN_10b97f30(int A);
    virtual void Virtual28();
    virtual void Virtual29();
    virtual Class_10E93B68* FUN_10b980e0(int A);
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual Class_10E93020* FUN_10b98050(Struct_10B98E00* A, bool B, bool C);
    virtual cCombatBase* FUN_10b98170(Struct_10B98E00* A);
    virtual void Virtual36();
    virtual Class_10E93E48* FUN_10b98290(int A);
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual Class_10E928E8* FUN_10b98570(int A, int B);
    virtual void Virtual43();
    virtual void Virtual44();
    virtual Class_10E96EB0* FUN_10b99ef0(Struct_10B98E00* A, int B, int C);
    virtual Class_10E96FD0* FUN_10b99470(Struct_10B98E00* A, int B);
    virtual Class_10E92730* FUN_10b98740(int A);
    virtual Class_10E95AC8* FUN_10b987d0(int A, int B);
    virtual void Virtual49();
    virtual void Virtual50();
    virtual Class_10E95288* FUN_10b98980(Struct_10B98E00* A);
    virtual void Virtual52();
    virtual void Virtual53();
    virtual Class_10E92460* FUN_10b98aa0(int A, int B);
    virtual State_MunchCorpse* CreateMunchCorpseState(int A, int B);
};

// FUNCTION: 0x10B99B60 ?FUN_10b99b60@Class_10E4CCD0@@UAEPAVClass_10E92118@@PAUStruct_10B98E00@@H@Z
Class_10E92118* Class_10E4CCD0::FUN_10b99b60(Struct_10B98E00* A, int B)
{
    int Id = FUN_10bcbd00();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->FUN_10bbdb40() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10E92118((int)A, (int)this, B);
    return 0;
}
