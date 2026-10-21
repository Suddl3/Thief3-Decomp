// Game/Unsorted_10BD07B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E90D70.h"
#include "Game/Class_10E9313C.h"
#include "Game/FArchive.h"

struct Struct_10BC4C10;

// Ion Storm's tagged new: the placement arguments are (Tag, A, B, C, D).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Class_10E8BE68 copied from include/Game/Class_10E8BE68.h, with the slots and
// fields this function needs: the header's field list stops at Unknown0C and
// does not have the four objects or the three flags used here.
class Class_10E8BE68 : public Class_10E90D70
{
public:
    virtual void Serialize(FArchive& Ar);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool CanExit();
    virtual void FUN_10bc4200();
    virtual void FUN_10bc4c30();
    virtual void Update();
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
    virtual void FUN_10bce6e0(int p1);
    virtual void FUN_10bcc220();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void FUN_10bc4c10(Struct_10BC4C10* p1, int p2);
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
    virtual void FUN_10bce700(int A, int B);
    virtual void Virtual49();
    virtual int FUN_10bc45c0();
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
    virtual char FUN_10bc5bc0();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void FUN_10bd07b0(FArchive& Ar);
    virtual float Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();

    Class_10E9313C* Unknown04;
    Class_10E9313C* Unknown08[4];
    bool Unknown54;
    bool Unknown55;
    bool Unknown56;
};

// FUNCTION: 0x10BD07B0 ?FUN_10bd07b0@Class_10E8BE68@@UAEXAAVFArchive@@@Z
void Class_10E8BE68::FUN_10bd07b0(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);

    int Count = 0;
    if (Ar.Unknown14)
    {
        Ar.Serialize(&Count, 4);
    }
    else
    {
        if (Unknown08[0] != 0)
            Count = 1;
        if (Unknown08[1] != 0)
            Count++;
        if (Unknown08[2] != 0)
            Count++;
        if (Unknown08[3] != 0)
            Count++;
        Ar.Serialize(&Count, 4);
    }

    for (int i = 0; i < Count; i++)
    {
        if (Ar.Unknown14)
            Unknown08[i] = new(0, 0, 0, 0, 0) Class_10E9313C();
        Unknown08[i]->Serialize(Ar);
    }

    bool Flag = Unknown04 != 0;
    Ar.Serialize(&Flag, 1);
    if (Flag)
    {
        int Index = 0;
        if (Ar.Unknown14)
        {
            Ar.Serialize(&Index, 4);
            Unknown04 = Unknown08[Index];
        }
        else
        {
            if (Unknown08[0] != Unknown04)
                Index = 0;
            if (Unknown08[1] != Unknown04)
                Index = 1;
            if (Unknown08[2] != Unknown04)
                Index = 2;
            if (Unknown08[3] != Unknown04)
                Index = 3;
            Ar.Serialize(&Index, 4);
        }
    }

    Ar.Serialize(&Unknown54, 1);
    Ar.Serialize(&Unknown55, 1);
    Ar.Serialize(&Unknown56, 1);
}
