// Game/Class_10E6C290_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A81D20.h"

void ReadInt(void* Reader, int* Out);

void ReadString(void* Reader, int* Out);

class Class_10E6C290
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10aa9160(void* Reader, int A, int B);

    int Unknown04;
    Class_10A81D20 Unknown08;
    int Unknown14;
};

// FUNCTION: 0x10AA9160 ?FUN_10aa9160@Class_10E6C290@@UAEXPAXHH@Z
void Class_10E6C290::FUN_10aa9160(void* Reader, int A, int B)
{
    int Key;
    ReadInt(Reader, &Key);
    Unknown08.FUN_10a80e90(Key);
    for (int i = 0; i < Unknown08.Unknown00; i++)
        ReadString(Reader, &((int*)Unknown08.Unknown08)[i]);
    int Flags;
    ReadInt(Reader, &Flags);
    Unknown14 = Flags;
    if (A < 0x17)
        Unknown14 = Flags & 0xf;
}
