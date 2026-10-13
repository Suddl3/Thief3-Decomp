// Game/Unsorted_10941EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10941EB0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's tagged new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern "C" char * _strncpy(char *, const char *, int);

// FUNCTION: 0x10941EB0 ?SetString@Class_10941EB0@@QAEXPAD@Z
void Class_10941EB0::SetString(char* Source)
{
    if (Unknown00)
        delete Unknown00;
    Unknown00 = 0;
    if (Source)
    {
        int Len = strlen(Source);
        if (Len != 0)
        {
            GetAllocator()->Virtual8(0, 0);
            Unknown00 = (char*)operator new(Len + 1, 0, 0, 0, 0, 0);
            GetAllocator()->Virtual9();
            _strncpy(Unknown00, Source, Len);
            Unknown00[Len] = 0;
        }
    }
}
