// Game/Class_10E4CCD0_36.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/State_Choking.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int GetChokingEnableId();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
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
    virtual State_Choking* CreateChokingState(Struct_10B98E00* A, int B);
};

// FUNCTION: 0x10B99C20 ?CreateChokingState@Class_10E4CCD0@@UAEPAVState_Choking@@PAUStruct_10B98E00@@H@Z
State_Choking* Class_10E4CCD0::CreateChokingState(Struct_10B98E00* A, int B)
{
    int Id = GetChokingEnableId();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > 0.0f)
        return new(0, 0, 0, 0, 0) State_Choking((int)A, (int)this, B);
    return 0;
}
