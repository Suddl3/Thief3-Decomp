// Game/Unsorted_10A7A990_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FCoords.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10990D10.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10905A90_Member.h"

// Copied whole from include/Game/Class_10C08940.h with FUN_10ad18b0 added.
class Class_10C08940
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3(int A, int B);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual int Virtual8(int A);
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
    virtual int Virtual24();

    int FUN_10c08940();
    int FUN_10ad18b0();

    char Pad04[0x4];
    int Unknown08;
    char Unknown0C[4];
    int Unknown10;
    char Unknown14[0xC];
    bool Unknown20;
    char Pad21[0xb];
    FVector Unknown2C;
};

// Copied whole from include/Game/Class_10D9FEE0.h with FUN_10da0ab0 added.
class Class_10D9FEE0 : public Class_10AA82D0
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
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10da03a0(int A);
    virtual void Virtual12();
    virtual void Virtual13(int A);
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void FUN_10d9fdb0();

    void FUN_10d9fee0(int A, int B);
    void FUN_10da01b0(const FVector& A);
    void FUN_10da0710(const FVector& A);
    FVector FUN_10da00f0();
    bool FUN_10d9feb0();
    void FUN_10da07c0(const FVector& V);
    void FUN_10da0000(bool A);
    unsigned FUN_10da0400();
    void FUN_10da0ab0(const FCoords& A);

    char Pad04[0x4];
    int Unknown08;
};

// The result of FUN_10977fa0 that the function calls virtuals on and reads fields of.
class Class_10A7AAC0_Result
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
    virtual FCoords Virtual44();

    void FUN_109909c0(int A);

    char Pad04[0x98];
    int Unknown9C;
    char Pad0A0[0x4];
    int Unknown0A4;
    char Pad0A8[0x8];
    Class_10D9FEE0* Unknown0B0;
};

int FUN_10977fa0(int A);

// Copied whole from include/Game/Class_10E6BD90.h with the function at slot 21.
class Class_10E6BD90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10a7a370(int p1);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Virtual7(int p1);
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10a7a390(int A, int B);
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17(int A, int B);
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void FUN_10a7aac0(int A, int B, Class_10AAB5C0*& ObjRef);
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void FUN_10a7a920(class UObject* Obj, int Unknown04, int Unknown08);
};

class UClass;

class Class_10BFBD70;

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    Class_10AAB5C0** Unknown08;
};

class Class_10E77578
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, Class_10BFBD70& Found);
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

Class_10E77578* FUN_10b0b2b0();

// FUNCTION: 0x10A7AAC0 ?FUN_10a7aac0@Class_10E6BD90@@UAEXHHAAPAVClass_10AAB5C0@@@Z
void Class_10E6BD90::FUN_10a7aac0(int A, int B, Class_10AAB5C0*& ObjRef)
{
    Class_10AAB5C0* Obj = ObjRef;
    Class_10C08940* First = Obj->FUN_10978090();
    Class_10C08940* Second = (Class_10C08940*)Obj->FUN_10aab5c0();
    ((Class_10AA82D0*)Obj)->FUN_10aa82d0();
    if (!First->FUN_10ad18b0() && !Second->FUN_10ad18b0())
    {
        Class_10990D10* Ptr1 = (Class_10990D10*)FUN_10977fa0((int)First);
        Class_10A7AAC0_Result* Ptr2 = (Class_10A7AAC0_Result*)FUN_10977fa0((int)Second);
        if (((Class_10AAF570*)Obj)->FUN_10aaf570() == 0x281b9d0)
            Ptr2->Unknown0A4 = 0;
        if (Ptr2->Unknown9C == (int)Ptr1)
            Ptr2->FUN_109909c0(0);
        Class_10D9FEE0* Child = Ptr2->Unknown0B0;
        if (Child)
            Child->FUN_10da0ab0(Ptr2->Virtual44());
        ((Class_10990D10*)Ptr2)->FUN_10990d10();
        Ptr1->FUN_10990d10();
    }
}

// FUNCTION: 0x10A7D2A0 ?FUN_10a7d2a0@@YGXHPAVClass_10BFBD70@@@Z
void __stdcall FUN_10a7d2a0(int A, Class_10BFBD70* Out)
{
    if (((Class_10C08940*)A)->FUN_10ad18b0() == 0)
    {
        Class_10BFBD70 Found;
        FUN_10b0b2b0()->Virtual4(A, 0, 0x281B9D0, Found);
        for (int i = 0; i < Found.Unknown00; i++)
        {
            Class_10AAB5C0* Item = Found.Unknown08[i];
            if (((Class_10C08940*)Item->FUN_10aab5c0())->FUN_10ad18b0() == 0)
            {
                int Count = Out->Unknown00;
                Out->FUN_10bfbd70(Count + 1);
                Out->Unknown08[Count] = Item;
            }
        }
    }
}
