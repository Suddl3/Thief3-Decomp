// Game/Class_10E92460.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E92460.h"

extern void* DAT_10e92460[];

class Object_10BCC080
{
public:
    virtual void Virtual0();
};

// An inlined call that folds away for a null object but leaves the constructor its EH frame.
inline void Notify(Object_10BCC080* Obj)
{
    if (Obj)
        Obj->Virtual0();
}

// FUNCTION: 0x10BCC080 ??0Class_10E92460@@QAE@HHE@Z
Class_10E92460::Class_10E92460(int A, int B, unsigned char C)
    : Class_10E90D70(A, B)
{
    Unknown40 = 0;
    Unknown54 = 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown44 = 0x51;
    Unknown48 = 0x5b;
    Unknown4C = 0x53;
    *(void***)this = DAT_10e92460;
    Unknown5D = C;
    Unknown50 = 1.0f;
    Notify(0);
}
