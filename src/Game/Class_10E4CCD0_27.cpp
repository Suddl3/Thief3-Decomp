// Game/Class_10E4CCD0_27.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Class_10BBDB40.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void* FUN_10be1a60();

// The header's Class_10E95780 (include/Game/Class_10E95780.h) has no (int, int) constructor
// (its Init is the constructor at 0x10BE1820), and its base and Pad50 make the object
// 0x8c bytes; the new in this function allocates 0x50, so the copy keeps the fields from 0x00 to 0x50.
class Class_10E95780_Unknown04;

class Class_10E95780
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
    virtual bool FUN_10be1b30(int A);
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void FUN_10be1970();
    virtual void Virtual22();
    virtual void FUN_10be1b00(int A, int B, int C, int D, int E);
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void FUN_10be2de0(unsigned char p1);
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void FUN_10be2780(int A);
    virtual void FUN_10be1ad0();
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
    virtual void FUN_10be18e0(int A);

    Class_10E95780(int A, int B);
    ~Class_10E95780();

    Class_10E95780* Init(int A, int B);
    void FUN_10be1a70();
    bool FUN_10be2380(void* Object, int A);
    void FUN_10be2a70();

    Class_10E95780_Unknown04* Unknown04;
    char Pad08[0x38];
    int Unknown40;
    int Unknown44;
    bool Unknown48;
    bool Unknown49;
    char Unknown4A[2];
    int Unknown4C;
};

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
    virtual Class_10E95780* FUN_10b99230(Struct_10B98E00* A);
};

// FUNCTION: 0x10B99230 ?FUN_10b99230@Class_10E4CCD0@@UAEPAVClass_10E95780@@PAUStruct_10B98E00@@@Z
Class_10E95780* Class_10E4CCD0::FUN_10b99230(Struct_10B98E00* A)
{
    void* Id = FUN_10be1a60();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->GetFloat() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10E95780((int)A, (int)this);
    return 0;
}
