// Game/Unsorted_10ACA430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BFBD70.h"

extern void* DAT_10e6fd20[];

Class_10905A90_Member* FUN_10905aa0();

class Class_10E6FD20
{
public:
    Class_10E6FD20();

    void FUN_10aca430(int A, float B, float C);

    void* VTable;
    Class_10BFBD70 Unknown04;
};

// FUNCTION: 0x10ACA4A0 ??0Class_10E6FD20@@QAE@XZ
Class_10E6FD20::Class_10E6FD20() : VTable(DAT_10e6fd20)
{
    FUN_10aca430(7, 0.15f, 0.25f);
    FUN_10aca430(12, 0.15f, 0.0f);
    FUN_10aca430(13, 0.15f, 0.0f);
    FUN_10aca430(6, 0.15f, 0.25f);
}
