// Game/Class_10E4CCD0_39.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10be2fe0();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

// The object the function allocates: 0x4c bytes, built from (int, int, int, int).
class State_Fetch
{
public:
    State_Fetch(int A, int B, int C, int D);

    char Pad00[0x4c];
};

class Class_10E4CCD0
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
    virtual void Virtual20();
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
    virtual State_Fetch* FUN_10b99fb0(Struct_10B98E00* A, int B, int C);
};

// FUNCTION: 0x10B99FB0 ?FUN_10b99fb0@Class_10E4CCD0@@UAEPAVState_Fetch@@PAUStruct_10B98E00@@HH@Z
State_Fetch* Class_10E4CCD0::FUN_10b99fb0(Struct_10B98E00* A, int B, int C)
{
    int Id = FUN_10be2fe0();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > 0.0f)
        return new(0, 0, 0, 0, 0) State_Fetch((int)A, (int)this, B, C);
    return 0;
}
