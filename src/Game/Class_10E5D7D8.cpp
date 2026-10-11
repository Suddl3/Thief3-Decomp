// Game/Class_10E5D7D8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7D8.h"
#include "Game/Class_10EB766C.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Its second base's table (0x10E70820) is folded with Class_10E8C22C's.
class Class_10E6CB94 : public Class_10E6DC88
{
public:
    Class_10E6CB94()
        : Class_10E6DC88(0x39)
    {
    }

    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10A92680 ?FUN_10a92680@Class_10E5D7D8@@UAEPAVClass_10E6CB94@@XZ
Class_10E6CB94* Class_10E5D7D8::FUN_10a92680()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CB94* Result = new(0, 0, 0, 0, 0) Class_10E6CB94;
    FUN_10905aa0()->Virtual9();
    return Result;
}
