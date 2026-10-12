// Game/Unsorted_10C64E80_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C68070.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

// One of the eight 0x38-byte entries at Class_10C662F0+0x1C.
class Class_10C662F0_Unknown1C
{
public:
    bool FUN_10d57ac0(int A);
    void FUN_10d580e0(int A);

    char Pad00[0x38];
};

class cResSound;

struct Struct_10C64E10;

// Class_10C662F0 from include/Game/Class_10C662F0.h, with FUN_10c65bf0 and the entry array added.
class Class_10C662F0
{
public:
    bool TryCreate(int A, int B, int C);
    void AddRef(cResSound* A);
    void Release(cResSound* A);
    void FUN_10c65bf0(int A, Class_10C68070* B);

    char Unknown00[0x1C];
    Class_10C662F0_Unknown1C Unknown1C[8];
};

// FUNCTION: 0x10C662F0 ?TryCreate@Class_10C662F0@@QAE_NHHH@Z
bool Class_10C662F0::TryCreate(int A, int B, int C)
{
    unsigned int Index = (unsigned int)B >> 29;
    if (Unknown1C[Index].FUN_10d57ac0(A))
    {
        GetAllocator()->Virtual8(0, 0);
        *(Class_10C68070**)C = new(0, 0, 0, 0, 0) Class_10C68070();
        GetAllocator()->Virtual9();
        (*(Class_10C68070**)C)->Virtual6(B);
        FUN_10c65bf0(B, *(Class_10C68070**)C);
        Unknown1C[Index].FUN_10d580e0(A);
        return true;
    }
    return false;
}
