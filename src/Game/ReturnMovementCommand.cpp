// Game/ReturnMovementCommand.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAF8A0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10BC3F90.h"

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

// This target only constructs the 0x114-byte object. Its native constructor
// installs its known vptr and owns its nested movement/context resources.
class Class_10E9AF6C
{
public:
    Class_10E9AF6C(int TargetLink, const Struct_10BC3F90& Point,
        int State, const Class_10BAF8A0& Context, int E, int F, int G, int H);
    void** VTable;
    char Unknown04[0x110];
};

// FUNCTION: 0x10C2EA30 ??0MC_MoveToPoint@@QAE@HABVClass_10BAF8A0@@PAVClass_10E95170@@ABUStruct_10BC3F90@@HHHH@Z
MC_MoveToPoint::MC_MoveToPoint(int LinkType, const Class_10BAF8A0& Context,
    Class_10E95170* Owner, const Struct_10BC3F90& Point,
    int E, int F, int G, int H)
    : MoveCommand(LinkType, Context, Owner), m_Point(Point)
{
    GetAllocator()->Virtual8(0, 0);
    Unknown48 = new (0, 0, 0, 0, 0) Class_10E9AF6C(
        LinkType, m_Point, GetStateFromFlags(), Context, E, F, G, H);
    GetAllocator()->Virtual9();
}
