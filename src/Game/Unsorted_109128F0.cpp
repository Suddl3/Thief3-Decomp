// Game/Unsorted_109128F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdlib.h>
#include <string.h>
#include "Game/Class_10905A90_Member.h"

extern "C" void* memset(void*, int, unsigned);

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x109128F0 ?SetUpperBaseName@@YAPAHPAHPBD@Z
int* SetUpperBaseName(int* A, const char* B)
{
    char Dir[256];
    char Ext[256];
    char Name[256];
    char Drive[4];
    memset(Drive, 0, sizeof(Drive));
    _splitpath(B, Drive, Dir, Name, Ext);
    for (int i = 0; i < (int)strlen(Name); i++)
    {
        char c = Name[i];
        if (c >= 'a' && c <= 'z')
            Name[i] = c - 0x20;
    }
    *A = 0;
    int Length = (int)strlen(Name);
    if (Length != 0)
    {
        int* Block = (int*)GetAllocator()->Virtual2(Length + 5, 0, 0, 0, 0);
        *A = (int)(Block + 1);
        *Block = Length;
        char* Dst = (char*)*A;
        const char* Src = Name;
        char c;
        do
        {
            c = *Src++;
            *Dst++ = c;
        } while (c != 0);
    }
    return A;
}
