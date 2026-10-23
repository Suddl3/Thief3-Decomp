// Game/ReturningState.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cStructArray.h"
#include "Game/Struct_10BA91E0.h"
#include "Game/Struct_10BDF0A0.h"
#include "Game/Struct_10BC3F90.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10AA82E0.h"
#include "Game/Class_10BDF0A0.h"
#include "Game/Class_10BC3F90.h"
#include "Game/Class_10C7D570.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Block, const int& Tag, int A, int B, int C, int D);

double GetTimeSeconds();

float Distance(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

class Class_10BF7F90;

class Class_10E95170;

// Class_10BAF8A0.h copied with the tolerance field at native+0x14 typed.
class Class_10BAF8A0
{
public:
    Class_10BAF8A0(Class_10BF7F90* Owner);
    ~Class_10BAF8A0() { Unknown28.Empty(); }
    void Empty();
    char Unknown00[0x14];
    float Unknown14;
    char Unknown18[0x10];
    cStructArray Unknown28;
};

class Class_10BF7F90
{
public:
    Class_10BAF8A0 FUN_10bf7e00();
};

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int Command, int Flag);
};

class Class_10BC4160
{
public:
    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BC4BF0
{
public:
    int GetTargetLinkType();
};

class Class_10C36700
{
public:
    Class_10C36700(int LinkType, const Class_10BAF8A0& Context, Class_10E95170* Owner,
                  const Struct_10BDF0A0& Orientation, int A, float B, int C, float D);
    char Unknown00[0x78];
};

class Class_10C2EA30
{
public:
    Class_10C2EA30(int LinkType, const Class_10BAF8A0& Context, Class_10E95170* Owner,
                  const Struct_10BC3F90& Position, int A, int B, int C, int D);
    char Unknown00[0x58];
};

class Class_10BDFEF0_Owner
{
public:
    Struct_10BA91E0 GetHomePosition() const { return HomePosition; }
    char Unknown00[0x22C];
    Struct_10BA91E0 HomePosition;
};

class Class_10BDFEF0_Actor
{
public:
    char Unknown00[0x2C];
    Struct_10BA91E0 Position;
};

class Class_10E95170
{
public:
    virtual void Virtual0();
    void FUN_10bdfef0();
    Class_10BDFEF0_Owner* Unknown04;
    char Unknown08[0x38];
    int m_State;
    float m_Deadline;
};

// FUNCTION: 0x10BDFEF0 ?FUN_10bdfef0@Class_10E95170@@QAEXXZ
void Class_10E95170::FUN_10bdfef0()
{
    Class_10BF7F90* Behavior = ((Class_10BC4160*)this)->FUN_10bc4160();
    if (!Behavior || ((Class_10AA82D0*)Behavior)->GetLinkedObject())
        return;
    switch (m_State)
    {
    case 0:
        {
            bool Near = Distance(&((Class_10BDFEF0_Actor*)((Class_10C7D570*)((Class_10AA82E0*)Behavior)->FUN_10aa82e0())->FUN_10c7d570())->Position,
                                 &Unknown04->GetHomePosition()) < Behavior->FUN_10bf7e00().Unknown14;
            if (Near)
            {
                m_State = 2;
                GetAllocator()->Virtual8(0, 0);
                ((Class_10bf7f90*)Behavior)->FUN_10bf7f90((int)new (0, 0, 0, 0, 0) Class_10C36700(
                    ((Class_10BC4BF0*)this)->GetTargetLinkType(), Behavior->FUN_10bf7e00(), this,
                    ((Class_10BDF0A0*)Unknown04)->FUN_10bdf0a0(), 0, 1.0f, 0, 0.2f), 1);
                GetAllocator()->Virtual9();
            }
            else
            {
                m_State = 1;
                ((Class_10bf7f90*)Behavior)->FUN_10bf7f90(0, 1);
                GetAllocator()->Virtual8(0, 0);
                ((Class_10bf7f90*)Behavior)->FUN_10bf7f90((int)new (0, 0, 0, 0, 0) Class_10C2EA30(
                    ((Class_10BC4BF0*)this)->GetTargetLinkType(), Behavior->FUN_10bf7e00(), this,
                    ((Class_10BC3F90*)Unknown04)->FUN_10bc3f90(), 0, 1, 0x11, 0), 1);
                GetAllocator()->Virtual9();
            }
        }
        break;
    case 1:
        if (GetTimeSeconds() - m_Deadline < 1.0)
            return;
        m_State = 2;
        GetAllocator()->Virtual8(0, 0);
        ((Class_10bf7f90*)Behavior)->FUN_10bf7f90((int)new (0, 0, 0, 0, 0) Class_10C36700(
            ((Class_10BC4BF0*)this)->GetTargetLinkType(), Behavior->FUN_10bf7e00(), this,
            ((Class_10BDF0A0*)Unknown04)->FUN_10bdf0a0(), 0, 1.0f, 0, 0.2f), 1);
        GetAllocator()->Virtual9();
        break;
    case 2:
        m_State = 3;
        break;
    }
}
