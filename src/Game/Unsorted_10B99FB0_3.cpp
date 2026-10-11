// Game/Unsorted_10B99FB0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10E94578.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10bdb470();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10BC4BF0_Member;

// The header's Class_10E94100 (include/Game/Class_10E94100.h) has no (int, int) constructor
// (the new in this function calls ??0Class_10E94100@@QAE@HH@Z), so the class is copied whole
// with the constructor added. Its size is 0x54: the new in this function allocates 0x54, and
// the base Class_10E94578 is 0x24 bytes, so the derived part is 0x30 bytes.
class Class_10E94100 : public Class_10E94578
{
public:
    Class_10E94100(int A, int B);

    virtual void FUN_10bdb410(int A, int B, int C, int D, int E);
    virtual void Virtual24();
    virtual void FUN_10bde860();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
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
    virtual void Virtual47();
    virtual void Virtual25();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual bool Virtual51();
    virtual void Virtual29_();
    virtual void Virtual30_();
    virtual void Virtual31_();
    virtual void Virtual32_();
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
    virtual void Virtual47_();
    virtual void Virtual48();
    virtual void Virtual49_();
    virtual void Virtual50_();
    virtual void Virtual51_();
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
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67(int* A);

    void FUN_10bc4e30(int A);
    void FUN_10bdb390();
    int FUN_10bc68a0(int A);
    void FUN_10bc4360(int A);
    void FUN_10bdc860(int A);
    void FUN_10bde730();
    // The accessor at 0x10BC4BF0, which the compiler inlines here.
    int FUN_10bc4bf0();

    Class_10BC4BF0_Member* Unknown04;
    char Unknown28[0x2C];
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
    virtual void Virtual52();
    virtual Class_10E94100* FUN_10b9a070(Struct_10B98E00* A);
};

// FUNCTION: 0x10B9A070 ?FUN_10b9a070@Class_10E4CCD0@@UAEPAVClass_10E94100@@PAUStruct_10B98E00@@@Z
Class_10E94100* Class_10E4CCD0::FUN_10b9a070(Struct_10B98E00* A)
{
    int Id = FUN_10bdb470();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->FUN_10bbdb40() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10E94100((int)A, (int)this);
    return 0;
}
