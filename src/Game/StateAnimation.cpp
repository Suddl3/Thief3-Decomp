// Game/StateAnimation.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAF8A0.h"
#include "Game/Struct_10C37D30.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Block, const int& Tag, int A, int B, int C, int D);

class Class_10E8BE68;

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

class MC_PlayAnimation
{
public:
    MC_PlayAnimation(int LinkType, const Class_10BAF8A0& Context, Class_10E8BE68* Owner,
                     int Animation, bool Loop, int Option, float Rate, float Blend,
                     int Flag, Struct_10C37D30 Extra);
    char Unknown00[0x68];
};

class Class_10E8BE68
{
public:
    void FUN_10bce0d0(int Kind);
};

// FUNCTION: 0x10BCE0D0 ?FUN_10bce0d0@Class_10E8BE68@@QAEXH@Z
void Class_10E8BE68::FUN_10bce0d0(int Kind)
{
    int Animation = Kind == 1 ? 0x11 : 0x27;
    Class_10BF7F90* Behavior = ((Class_10BC4160*)this)->FUN_10bc4160();
    GetAllocator()->Virtual8(0, 0);
    MC_PlayAnimation* Command = new (0, 0, 0, 0, 0) MC_PlayAnimation(
        ((Class_10BC4BF0*)this)->GetTargetLinkType(), Behavior->FUN_10bf7e00(),
        this, Animation, true, 1, 0.25f, 1.0f, 1, Struct_10C37D30());
    GetAllocator()->Virtual9();
    ((Class_10bf7f90*)Behavior)->FUN_10bf7f90((int)Command, 1);
}
