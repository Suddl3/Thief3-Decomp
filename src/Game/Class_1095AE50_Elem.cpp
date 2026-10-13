// Game/Class_1095AE50_Elem.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1095AE50_Elem.h"

// Ion Storm's tagged new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern "C" char * _strncpy(char *, const char *, int);

// FUNCTION: 0x1095A510 ?FUN_1095a510@Class_1095AE50_Elem@@QAEXPAD@Z
void Class_1095AE50_Elem::FUN_1095a510(char* Source)
{
    if (Unknown0C)
        delete Unknown0C;
    Unknown0C = 0;
    if (Source)
    {
        int Len = strlen(Source);
        GetAllocator()->Virtual8(0, 0);
        Unknown0C = (char*)operator new(Len + 1, 0, 0, 0, 0, 0);
        GetAllocator()->Virtual9();
        _strncpy(Unknown0C, Source, Len);
        Unknown0C[Len] = 0;
    }
}
