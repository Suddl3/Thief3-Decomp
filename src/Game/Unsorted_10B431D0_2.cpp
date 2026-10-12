// Game/Unsorted_10B431D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10D4ACC0.h"

struct FILETIME
{
    unsigned long dwLowDateTime;
    unsigned long dwHighDateTime;
};

extern "C" __declspec(dllimport) long __stdcall CompareFileTime(const FILETIME* A, const FILETIME* B);

class Class_10D4AE40
{
public:
    ~Class_10D4AE40();
    FILETIME* FUN_10d4ab90(FILETIME* Out);

    int Unknown00;
    int Unknown04;
    int Unknown08;
};

Class_10D4ACC0 FUN_10d4acc0();

// FUNCTION: 0x10B431D0 ?CompareFileTimes@@YAHPAH0@Z
int CompareFileTimes(int* A, int* B)
{
    FILETIME W1;
    FILETIME W2;
    Class_10D4ACC0 Mgr = FUN_10d4acc0();
    int First = *A;
    int Second = *B;
    Class_10D4AE40 Y = Mgr.FUN_10d4b650(First);
    Class_10D4AE40 Z = Mgr.FUN_10d4b650(Second);
    long R = CompareFileTime(Y.FUN_10d4ab90(&W1), Z.FUN_10d4ab90(&W2));
    return -R;
}
