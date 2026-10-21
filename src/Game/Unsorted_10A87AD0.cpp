// Game/Unsorted_10A87AD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E9BB80.h"
#include "Game/Class_10EBFF38.h"

// The hash table base (0x18 bytes) whose Rehash this unit calls.
class Class_10A85940
{
public:
    Class_10A85940()
        : Unknown00(0), Unknown04(0), Unknown0C(0), Unknown10(false), Unknown14(0)
    {
    }

    void Rehash(int Size);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    void** Unknown14;
};

class Class_10A85A00 : public Class_10A85940
{
public:
    Class_10A85A00()
    {
        Rehash(0x40);
    }

    Class_10EBFF38 Unknown18;
};

class Class_10A87BD0
{
public:
    Class_10A87BD0();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_10A85A00 Unknown0C;
};

// FUNCTION: 0x10A87BD0 ??0Class_10A87BD0@@QAE@XZ
Class_10A87BD0::Class_10A87BD0() : Unknown00(0), Unknown04(0), Unknown08(0)
{
}
