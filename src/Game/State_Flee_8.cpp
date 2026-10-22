// Game/State_Flee_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cStructArray.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10BC3F90.h"
#include "Game/Class_10BC4160.h"
#include "Game/Class_10BC4BF0.h"

class Class_10BF7F90;

class Class_10BAF8A0
{
public:
    Class_10BAF8A0(Class_10BF7F90* Owner);
    ~Class_10BAF8A0() { Unknown28.Empty(); }
    void Empty();
    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[8];
    bool Unknown1C;
    char Unknown1D[0xB];
    cStructArray Unknown28;
};

class Class_10E95170;

class cString;

class FArchive;

class Class_10E9AF6C;

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Block, const int& Tag, int A, int B, int C, int D);

// Local complete ABI view: all eleven slots and 0x4C-byte MoveCommand base.
class MoveCommand
{
public:
    virtual bool IsFinished();
    virtual cString GetClassName();
    virtual ~MoveCommand();
    virtual bool IsCurrent(int A);
    virtual void Update();
    virtual int GetStateFromFlags();
    virtual void Virtual6();
    virtual void Virtual7(int A, int B);
    virtual void Virtual8(int A, int B);
    virtual int Virtual9();
    virtual void Serialize(FArchive& Ar);

    MoveCommand(int LinkType, const Class_10BAF8A0& Context, Class_10E95170* Owner);
    int Unknown04;
    Class_10BAF8A0 Unknown08;
    int Unknown3C;
    Class_10E95170* Unknown40;
    bool m_Active;
    bool m_Finished;
    char Unknown46[2];
    Class_10E9AF6C* Unknown48;
};

class MC_MoveToPoint : public MoveCommand
{
public:
    virtual bool IsFinished();
    virtual cString GetClassName();
    virtual ~MC_MoveToPoint();
    virtual void Update();
    virtual int Virtual9();
    virtual void Serialize(FArchive& Ar);

    MC_MoveToPoint(int LinkType, const Class_10BAF8A0& Context,
        Class_10E95170* Owner, const Struct_10BC3F90& Point,
        int E, int F, int G, int H);
    Struct_10BC3F90 m_Point;
};

class Class_10BF7F90
{
public:
    Class_10BAF8A0 FUN_10bf7e00();
    void FUN_10bf7f90(int A, int B);
};

class Class_10BEA3B0 { public: bool FUN_10bea3b0(); };

class Class_10BEB6C0 { public: void FUN_10beb6c0(int A); };

struct Struct_10BEBC70_Goal
{
    char Unknown00[8];
    Struct_10BC3F90 Unknown08;
};

class State_Flee
{
public:
    void FUN_10bebc70();
    char Unknown00[0x60];
    Struct_10BEBC70_Goal* Unknown60;
    bool Unknown64;
    bool Unknown65;
    char Unknown66[0x1A];
    float Unknown80;
};

double GetTimeSeconds();

typedef char ContextSizeCheck[sizeof(Class_10BAF8A0) == 0x34 ? 1 : -1];

typedef char MoveSizeCheck[sizeof(MC_MoveToPoint) == 0x58 ? 1 : -1];

// FUNCTION: 0x10BEBC70 ?FUN_10bebc70@State_Flee@@QAEXXZ
void State_Flee::FUN_10bebc70()
{
    if (!Unknown65)
    {
        Class_10BAF8A0 Context = ((Class_10BF7F90*)((Class_10BC4160*)this)->FUN_10bc4160())->FUN_10bf7e00();
        Context.Unknown10 = 1;
        Context.Unknown1C = false;
        bool Found = ((Class_10BEA3B0*)this)->FUN_10bea3b0();
        if (!Found && !Unknown65)
        {
            ((Class_10BEB6C0*)this)->FUN_10beb6c0(0);
            Found = ((Class_10BEA3B0*)this)->FUN_10bea3b0();
        }
        if (Found)
        {
            GetAllocator()->Virtual8(0, 0);
            MC_MoveToPoint* Command = new (0, 0, 0, 0, 0) MC_MoveToPoint(
                ((Class_10BC4BF0*)this)->GetTargetLinkType(), Context,
                (Class_10E95170*)this, Unknown60->Unknown08, 0, 1, 0x24, 0);
            GetAllocator()->Virtual9();
            ((Class_10BF7F90*)((Class_10BC4160*)this)->FUN_10bc4160())->FUN_10bf7f90((int)Command, 1);
            Unknown64 = true;
            Unknown80 = (float)GetTimeSeconds();
        }
        else
            Unknown65 = true;
    }
}
