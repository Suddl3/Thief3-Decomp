// Game/Class_10E4CCD0_32.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E90D70.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class FVector;

class cString;

int FUN_10bed050();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

extern float DAT_10eafbdc;

// include/Game/State_PatrolLook.h, copied whole with the constructor this function calls (0x10BED9E0).
class State_PatrolLook : public Class_10E90D70
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
    virtual void FUN_10bed060(int A);

    State_PatrolLook(int A, int B, int C, int D, int E, int F, int G, int H);
    State_PatrolLook(int A, int B, const FVector& C, float D, const cString& E, int F, int G, int H);

    int Unknown40;
    float m_EndTime;
    int Unknown48;
    int Unknown4C[3];
    int m_Limit;
    int m_Count;
    int Unknown60;
    int Unknown64;
    int Unknown68;
    int Unknown6C;
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
    virtual State_PatrolLook* FUN_10b99850(Struct_10B98E00* A, const FVector& B, float C, const cString& D, int E, int F, int G);
};

// FUNCTION: 0x10B99850 ?FUN_10b99850@Class_10E4CCD0@@UAEPAVState_PatrolLook@@PAUStruct_10B98E00@@ABVFVector@@MABVcString@@HHH@Z
State_PatrolLook* Class_10E4CCD0::FUN_10b99850(Struct_10B98E00* A, const FVector& B, float C, const cString& D, int E, int F, int G)
{
    int Id = FUN_10bed050();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) State_PatrolLook((int)A, (int)this, B, C, D, E, F, G);
    return 0;
}
