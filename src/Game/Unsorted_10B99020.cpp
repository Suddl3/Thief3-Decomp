// Game/Unsorted_10B99020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void* FUN_10be4c10();

extern float DAT_10eafbdc;

class Class_109081E0;

class Object_10BE58C0;

// The base chain as the accepted unit Class_10E96810_9.cpp declares it: the vtable alone, 4 bytes.
// The header's Class_10E960D8 chain is 0x7C bytes, which would make the allocation 0x80, not 0x70.
class Class_10BC4160
{
public:
    virtual void Virtual0();
};

class Class_10E95F40 : public Class_10BC4160
{
};

// Copied from include/Game/Class_10E96810.h with the constructor added; the padding up to Unknown6C
// follows the 4-byte base.
class Class_10E96810 : public Class_10E95F40
{
public:
    Class_10E96810(int A, int B);

    virtual void FUN_10be4a20();
    virtual void FUN_10be69a0(Object_10BE58C0* Ar);
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
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual char FUN_10be4a60();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual bool FUN_10be4c20();
    virtual void Virtual75();
    virtual bool FUN_10be41b0();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual82();
    virtual bool FUN_10be4d70();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual87();
    virtual int FUN_10be4ad0();
    virtual int FUN_10be4b00();
    virtual int FUN_10be4b30();
    virtual int FUN_10be4b50();

    Class_109081E0 FUN_10be8840();

    char Pad04[0x68];
    bool Unknown6C;
    char Pad6D[0x3];
};

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10E95288;

class Class_10E95898;

class Class_10E4CCD0
{
public:
    virtual void Virtual0();
    virtual Class_10E95288* FUN_10b98e00(Struct_10B98E00* A);
    virtual void Virtual2();
    virtual Class_10E95898* FUN_10b98f60(Struct_10B98E00* A, int B, bool C);
    virtual Class_10E96810* FUN_10b99020(Struct_10B98E00* A);
};

// FUNCTION: 0x10B99020 ?FUN_10b99020@Class_10E4CCD0@@UAEPAVClass_10E96810@@PAUStruct_10B98E00@@@Z
Class_10E96810* Class_10E4CCD0::FUN_10b99020(Struct_10B98E00* A)
{
    void* Id = FUN_10be4c10();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->FUN_10bbdb40() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E96810((int)A, (int)this);
    return 0;
}
