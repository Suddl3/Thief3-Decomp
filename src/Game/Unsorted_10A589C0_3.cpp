// Game/Unsorted_10A589C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10970890.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A57980.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

// The 0x8c-byte object FUN_10a589e0 creates; its constructor is FUN_10a248c0.
class Class_10A248C0
{
public:
    Class_10A248C0();

    char Unknown00[0x58];
    char Unknown58;
    char Unknown59[0x33];
};

// FUNCTION: 0x10A589E0 ?FUN_10a589e0@Class_10A57980@@QAEXH@Z
void Class_10A57980::FUN_10a589e0(int A)
{
    FUN_10a51710(A);
    Class_1098E330* Owner = *Unknown128;
    if (Owner != 0)
    {
        int Count = Unknown154;
        if (Count > A)
        {
            int Id = Unknown15C[A];
            if (Id != -1)
            {
                Class_10970890* Ctrl = Owner->FUN_10991eb0();
                if (Ctrl != 0)
                    Ctrl->FUN_109724c0(Owner, Id);
            }
        }
        if (Unknown188 == 0)
        {
            GetAllocator()->Virtual8(0, 0);
            Unknown188 = new(0, 0, 0, 0, 0) Class_10A248C0();
            GetAllocator()->Virtual9();
            Unknown188->Unknown58 = Unknown1B8;
            Virtual118(A);
        }
    }
}
