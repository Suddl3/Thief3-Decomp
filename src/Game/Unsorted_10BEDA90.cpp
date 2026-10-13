// Game/Unsorted_10BEDA90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E90D70.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cStructArray.h"

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10BF7F90;

class Class_10BAF8A0
{
public:
    Class_10BAF8A0(Class_10BF7F90* Owner);
    ~Class_10BAF8A0()
    {
        Unknown28.Empty();
    }

    void Empty();

    char Unknown00[0x28];
    cStructArray Unknown28;
};

class Class_10BF7F90
{
public:
    void FUN_10bf7e00(Class_10BAF8A0& Out);
    void FUN_10bf7f90(int A, int B);
};

inline Class_10BAF8A0::Class_10BAF8A0(Class_10BF7F90* Owner)
{
    Owner->FUN_10bf7e00(*this);
}

class MC_FollowAbsolute
{
public:
    MC_FollowAbsolute(int A);

    char Unknown00[0x9c];
};

class Class_10E97370 : public Class_10E90D70
{
public:
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
    virtual void FUN_10bee170(int A);

    Class_10BF7F90* FUN_10bc4160();
    int GetTargetLinkType(Class_10BAF8A0& Out, Class_10E97370* Owner, int A, int B, int C, int D, float E);

    char Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
};

// FUNCTION: 0x10BEE170 ?FUN_10bee170@Class_10E97370@@UAEXH@Z
void Class_10E97370::FUN_10bee170(int A)
{
    if (Unknown44)
    {
        Class_10BF7F90* Info = FUN_10bc4160();
        if (Info)
        {
            int Key = Unknown44;
            Class_10BAF8A0 Buf(Info);
            GetAllocator()->Virtual8(0, 0);
            MC_FollowAbsolute* Obj = new(0, 0, 0, 0, 0) MC_FollowAbsolute(GetTargetLinkType(Buf, this, Key, Unknown48, Unknown4C, Unknown50, 0.5f));
            GetAllocator()->Virtual9();
            Info->FUN_10bf7f90((int)Obj, 1);
        }
    }
}
