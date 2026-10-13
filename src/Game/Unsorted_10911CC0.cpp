// Game/Unsorted_10911CC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

class Class_10911D20
{
public:
    Class_10911D20(const char* A, const char* B, bool C);

    cString Unknown00;
    cString Unknown04;
    bool Unknown08;
};

// FUNCTION: 0x10911D20 ??0Class_10911D20@@QAE@PBD0_N@Z
Class_10911D20::Class_10911D20(const char* A, const char* B, bool C) : Unknown00(B), Unknown04(A), Unknown08(C)
{
    int I = 0;
    while (true)
    {
        char* Text = Unknown00.Unknown00;
        int Length = Text == 0 ? 0 : ((int*)Text)[-1];
        if (I >= Length || Text[I] == 0)
            break;
        if (Text[I] == '\n')
        {
            Text[I] = '\r';
            I++;
        }
        I++;
    }
}
