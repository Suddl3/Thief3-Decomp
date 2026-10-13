// Game/Unsorted_10B82390.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA9DC0.h"
#include "Game/Class_10B82650.h"

class Class_10B82650_Obj
{
public:
    char Unknown00[4];
    int Unknown04;
};

class Class_10B82650_Slot
{
public:
    Class_10B82650_Obj** FUN_109a5540(Class_10AA9DC0** A, int B);
};

class Class_10B82650_Holder
{
public:
    char Unknown00[0x10];
    Class_10B82650_Obj* Unknown10;
};

class Class_10B82650_Local
{
public:
    void FUN_109a54e0();

    char Unknown00[0x6c];
};

class Class_10B82650_Arg
{
public:
    char Unknown00[0xc];
    int Unknown0C;
    char Unknown10[4];
};

void FUN_10da8ce0(Class_10B82650_Arg* A, void* B, int C, void* D, void* E, void* F);

// FUNCTION: 0x10B82650 ?FUN_10b82650@Class_10B82650@@QAEXPAVClass_10AA9DC0@@0PAVClass_10B82650_Arg@@@Z
void Class_10B82650::FUN_10b82650(Class_10AA9DC0* A, Class_10AA9DC0* B, Class_10B82650_Arg* C)
{
    if (Unknown08)
    {
        Class_10B82650_Slot* Slot = static_cast<Class_10B82650_Slot*>(B->FUN_10aa9dc0());
        Class_10AA9DC0* Key;
        Class_10B82650_Obj** Ref = Slot->FUN_109a5540(&Key, 0);
        int Value = 0;
        if (*Ref)
            Value = (*Ref)->Unknown04;
        Class_10B82650_Local Buf;
        Buf.FUN_109a54e0();
        char* ObjB = (char*)B->FUN_10aa9dc0();
        char* ObjA = (char*)A->FUN_10aa9dc0();
        FUN_10da8ce0(C, (char*)C + 0x10, C->Unknown0C, ObjA + 0xc, ObjB + 0xc, &Buf);
        Unknown08(Unknown38->Unknown10->Unknown04, Value, &Buf);
    }
}
