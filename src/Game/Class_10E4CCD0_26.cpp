// Game/Class_10E4CCD0_26.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10E95F40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Struct_10B98E00.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10BB8140;

class Object_10BE58C0;

// Class_10E960D8 as its header declares it, except that the object is the 0x6c bytes the game
// allocates: Unknown04 is Class_10E95F40's member, and the header's Pad6C is not part of the object.
class Class_10E960D8 : public Class_10E95F40
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
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void FUN_10be4250(bool A);
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Serialize(Object_10BE58C0* Ar);
    virtual float FUN_10be4340();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual int FUN_10be4170();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual bool Virtual86();

    Class_10E960D8(int A, int B);

    bool FUN_10be4540();
    void FUN_10be4ef0(Object_10BE58C0* Ar);
    void FUN_10be7ea0();
    void FUN_10be85b0();
    int FUN_10be4280();
    int FUN_10be42a0();
    void FUN_10be8f70();
    void FUN_10be8ee0();

    char Pad0C[0x5c];
    int m_Interval;
};

void* FUN_10be4570();

class Class_10E95288;

class Class_10E95898;

class cYellowAlert;

class Class_10E4CCD0
{
public:
    virtual void Virtual0();
    virtual Class_10E95288* FUN_10b98e00(Struct_10B98E00* A);
    virtual void Virtual2();
    virtual Class_10E95898* FUN_10b98f60(Struct_10B98E00* A, int B, bool C);
    virtual void Virtual4();
    virtual cYellowAlert* FUN_10b990d0(Struct_10B98E00* A);
    virtual Class_10E960D8* FUN_10b99180(Struct_10B98E00* A);
};

// FUNCTION: 0x10B99180 ?FUN_10b99180@Class_10E4CCD0@@UAEPAVClass_10E960D8@@PAUStruct_10B98E00@@@Z
Class_10E960D8* Class_10E4CCD0::FUN_10b99180(Struct_10B98E00* A)
{
    void* Id = FUN_10be4570();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->GetFloat() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10E960D8((int)A, (int)this);
    return 0;
}
