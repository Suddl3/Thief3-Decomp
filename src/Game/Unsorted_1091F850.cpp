// Game/Unsorted_1091F850.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A0C5F0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's tagged new and its placement delete.
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern "C" void* memset(void* Block, int Value, unsigned int Size);

extern int DAT_10f31958;

extern int DAT_10f3195c;

extern int DAT_10f31960;

extern int DAT_10f31974;

extern int DAT_10f31980;

extern int DAT_10f31968;

// The object Unknown0C points at: three counts at 0x0C, 0x18 and 0x24.
class Class_1091F850_Unknown0C
{
public:
    char Pad00[0xC];
    int Unknown0C;
    char Pad10[0x8];
    int Unknown18;
    char Pad1C[0x8];
    int Unknown24;
};

class Class_10E4AA80;

struct Struct_109236B0;

// Copied from include/Game/Class_10920A90.h, with the pointer at 0x0C and the
// counter at 0x48 added.
class Class_10920A90
{
public:
    void VisitTree(Struct_109236B0* A, int B, int C);
    void FUN_10920fa0(Struct_109236B0* A, int B, int C);
    void FUN_00000000(int Child, int B, int C);
    void RemoveItem(Class_10E4AA80* Item);
    void FUN_10923f30(Class_10E4AA80* Obj);
    void FUN_10923490(Class_10E4AA80* Item);
    void FUN_1091f850();

    char Unknown00[0xC];
    Class_1091F850_Unknown0C* Unknown0C;
    char Unknown10[0x2C];
    Class_10A0C5F0 m_Items;
    int Unknown48;
};

// FUNCTION: 0x1091F850 ?FUN_1091f850@Class_10920A90@@QAEXXZ
// Each of the three buffers is allocated once, with the tagged new, and the two
// sized ones are zeroed; the three globals are reset and the counter bumped.
void Class_10920A90::FUN_1091f850()
{
    if (Unknown0C)
    {
        if (!DAT_10f31958 && Unknown0C->Unknown24)
        {
            GetAllocator()->Virtual8(0, 0);
            int Tag = 0;
            DAT_10f31958 = (int)new (Tag, 0, 0, 0, 0) int[Unknown0C->Unknown24];
            GetAllocator()->Virtual9();
            memset((void*)DAT_10f31958, 0, Unknown0C->Unknown24 * 4);
        }
        if (!DAT_10f3195c && Unknown0C->Unknown18)
        {
            GetAllocator()->Virtual8(0, 0);
            int Tag = 0;
            DAT_10f3195c = (int)new (Tag, 0, 0, 0, 0) int[Unknown0C->Unknown18];
            GetAllocator()->Virtual9();
            memset((void*)DAT_10f3195c, 0, Unknown0C->Unknown18 * 4);
        }
        if (!DAT_10f31960 && Unknown0C->Unknown0C)
        {
            GetAllocator()->Virtual8(0, 0);
            int Tag = 0;
            DAT_10f31960 = (int)new (Tag, 0, 0, 0, 0) int[Unknown0C->Unknown0C];
            GetAllocator()->Virtual9();
        }
        DAT_10f31974 = 0;
        DAT_10f31980 = 0;
        DAT_10f31968 = 0;
    }
    Unknown48++;
}
