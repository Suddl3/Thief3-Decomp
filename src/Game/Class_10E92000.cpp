// Game/Class_10E92000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E92000.h"

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

// FUNCTION: 0x10BCBA90 ??0Class_10E92000@@QAE@HHH@Z
Class_10E92000::Class_10E92000(int A, int B, int C)
    : Class_10E90D70(A, B), Unknown40(0), Unknown44(0x11), Unknown48(0x11), Unknown4C(0x11), Unknown50(0),
      Unknown54(C), Unknown58(0)
{
    *(void***)this = DAT_10e92000;
    Notify(0);
}
