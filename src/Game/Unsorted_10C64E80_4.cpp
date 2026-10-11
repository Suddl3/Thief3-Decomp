// Game/Unsorted_10C64E80_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* FUN_10905aa0();

// The 0x98-byte object FUN_10c68070 builds.
class Class_10C68070
{
public:
    Class_10C68070();
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int A);

    char Pad04[0x94];
};

// One of the eight 0x38-byte entries at Class_10C662F0+0x1C.
class Class_10C662F0_Unknown1C
{
public:
    bool FUN_10d57ac0(int A);
    void FUN_10d580e0(int A);

    char Pad00[0x38];
};

class Class_10E9CB00;

struct Struct_10C64E10;

// Class_10C662F0 from include/Game/Class_10C662F0.h, with FUN_10c65bf0 and the entry array added.
class Class_10C662F0
{
public:
    bool FUN_10c662f0(int A, int B, int C);
    void FUN_10c64e10(Class_10E9CB00* A);
    void FUN_10c64ff0(Class_10E9CB00* A);
    void FUN_10c65bf0(int A, Class_10C68070* B);

    char Unknown00[0x1C];
    Class_10C662F0_Unknown1C Unknown1C[8];
};

// FUNCTION: 0x10C662F0 ?FUN_10c662f0@Class_10C662F0@@QAE_NHHH@Z
bool Class_10C662F0::FUN_10c662f0(int A, int B, int C)
{
    unsigned int Index = (unsigned int)B >> 29;
    if (Unknown1C[Index].FUN_10d57ac0(A))
    {
        FUN_10905aa0()->Virtual8(0, 0);
        *(Class_10C68070**)C = new(0, 0, 0, 0, 0) Class_10C68070();
        FUN_10905aa0()->Virtual9();
        (*(Class_10C68070**)C)->Virtual6(B);
        FUN_10c65bf0(B, *(Class_10C68070**)C);
        Unknown1C[Index].FUN_10d580e0(A);
        return true;
    }
    return false;
}
