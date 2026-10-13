// Game/Class_10E92000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E92000.h"
#include "Game/Class_10BC4160.h"

extern void* DAT_10e92000[];

class Object_10BCBA90
{
public:
    virtual void Virtual0();
};

// An inlined call that folds away for a null object but leaves the constructor its EH frame.
inline void Notify(Object_10BCBA90* Obj)
{
    if (Obj)
        Obj->Virtual0();
}

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int p1, int p2);
};

// FUNCTION: 0x10BCBA90 ??0Class_10E92000@@QAE@HHH@Z
Class_10E92000::Class_10E92000(int A, int B, int C)
    : Class_10E90D70(A, B), Unknown40(0), Unknown44(0x11), Unknown48(0x11), Unknown4C(0x11), Unknown50(0),
      Unknown54(C), Unknown58(0)
{
    *(void***)this = DAT_10e92000;
    Notify(0);
}

// FUNCTION: 0x10BCBB00 ?FUN_10bcbb00@Class_10E92000@@UAEXH@Z
void Class_10E92000::FUN_10bcbb00(int p1)
{
    Class_10bf7f90* Target = (Class_10bf7f90*)((Class_10BC4160*)this)->FUN_10bc4160();
    Target->FUN_10bf7f90(0, 1);
}
