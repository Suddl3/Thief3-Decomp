// Game/Unsorted_10C3F2B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"

extern const char* DAT_10f06a9c[];

extern int DAT_10ff711c;

// A block from Class_10905A90_Member::Virtual2: its length, then the characters.
struct Struct_10C3F6E0
{
    int Length;
    char Text[4];
};

// FUNCTION: 0x10C3F6E0 ?FUN_10c3f6e0@@YAXABVcString@@@Z
void FUN_10c3f6e0(const cString& Name)
{
    int Best = 0;
    for (int i = 0; i < 6; i++)
    {
        const char* Entry = DAT_10f06a9c[i];
        char* Copy = 0;
        if (Entry != 0)
        {
            int Length = strlen(Entry);
            if (Length != 0)
            {
                Struct_10C3F6E0* Block = (Struct_10C3F6E0*)GetAllocator()->Virtual2(Length + 5, 0, 0, 0, 0);
                Copy = Block->Text;
                Block->Length = Length;
                strcpy(Copy, Entry);
            }
        }
        const char* Other;
        if (Copy == 0)
            Other = DAT_10e47660;
        else
            Other = Copy;
        bool Equal = strcmp(*Name, Other) == 0;
        if (Copy != 0)
            GetAllocator()->Virtual5(Copy - 4);
        if (Equal)
            Best = i;
    }
    DAT_10ff711c = Best;
}
