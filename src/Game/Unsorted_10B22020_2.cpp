// Game/Unsorted_10B22020_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"

class Class_10A4B960
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

Class_10905A90_Member* GetAllocator();

void FUN_10a4b960(Class_10A4B960** A, cString* B);

extern const char DAT_10e7a74c[];

extern const char DAT_10e7a738[];

class Class_10B22020
{
public:
    void FUN_10b22020(int A);
    void FUN_1098e3d0(int A, void* B);

    char Unknown00[0x38];
    FRotator Unknown38;
    char Unknown44[0x3C0];
    int Unknown404;
    char Unknown408[8];
    float Unknown410;
    char Unknown414[0x4C];
    int Unknown460;
    char Unknown464[0x58];
    int Unknown4BC;
    char Unknown4C0[0x8E];
    bool Unknown54E;
    char Pad54F[0x1];
};

// FUNCTION: 0x10B22020 ?FUN_10b22020@Class_10B22020@@QAEXH@Z
void Class_10B22020::FUN_10b22020(int A)
{
    FUN_1098e3d0(0x800847, &A);
    Class_10A4B960* Out;
    cString Name(A ? DAT_10e7a74c : DAT_10e7a738);
    FUN_10a4b960(&Out, &Name);
    if (Out)
        Out->Virtual2();
}
