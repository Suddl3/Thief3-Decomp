// Game/Unsorted_10941F60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include <string.h>
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's tagged new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern "C" char * _strncpy(char *, const char *, int);

class Class_10941F60
{
public:
    void FUN_10941f60(char* Source);

    unsigned int Unknown00;
    char* Unknown04;
};

// FUNCTION: 0x10941F60 ?FUN_10941f60@Class_10941F60@@QAEXPAD@Z
void Class_10941F60::FUN_10941f60(char* Source)
{
    if (Unknown04)
        delete Unknown04;
    Unknown04 = 0;
    if (Source)
    {
        int Len = strlen(Source);
        if (Len)
        {
            GetAllocator()->Virtual8(0, 0);
            Unknown04 = (char*)operator new(Len + 1, 0, 0, 0, 0, 0);
            GetAllocator()->Virtual9();
            _strncpy(Unknown04, Source, Len);
            Unknown04[Len] = 0;
        }
    }
}
