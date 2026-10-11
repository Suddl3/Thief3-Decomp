// Game/Unsorted_10C3F2B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C3F110.h"
#include "Game/Class_10C62A40.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C3F290 : public Class_10C3F110
{
public:
    Class_10C3F290();

    char Unknown30[0x18];
};

class Class_10C80360_Unknown10;

class Class_10C80360_Unknown14;

class Class_10C80360_Unknown18;

class Class_10C80360_Unknown1C;

// Copied from include/Game/Class_10C80360.h with FUN_10c5f060 added.
class Class_10C80360 : public Class_10C62A40
{
public:
    unsigned char FUN_10c80360();
    void FUN_10c5dc60(float A);
    void FUN_10c5e810();
    void FUN_10c5daf0();
    void FUN_10c5f060();

    char Pad01[0xc];
    bool Unknown0D;
    char Unknown0E[2];
    Class_10C80360_Unknown10* Unknown10;
    Class_10C80360_Unknown14* Unknown14;
    Class_10C80360_Unknown18* Unknown18;
    Class_10C80360_Unknown1C* Unknown1C;
};

Class_10C80360* FUN_10c5f280();

void ForceExit();

extern Class_10C3F290* DAT_10ff70a8;

extern bool DAT_10ff70ac;

// FUNCTION: 0x10C3FB10 ?FUN_10c3fb10@@YAPAVClass_10C3F110@@XZ
Class_10C3F110* FUN_10c3fb10()
{
    if (!DAT_10ff70a8)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        DAT_10ff70a8 = new(0, 0, 0, 0, 0) Class_10C3F290;
        if (DAT_10ff70ac)
            ForceExit();
        FUN_10c5f280()->FUN_10c5f060();
        FUN_10905aa0()->Virtual9();
    }
    return DAT_10ff70a8;
}
