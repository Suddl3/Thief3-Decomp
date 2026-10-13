// Game/cDoorState_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"

extern char DAT_10f05b98[][32];

extern char DAT_10f05c18[];

// A block from Class_10905A90_Member::Virtual2: its length, then the characters.
struct Struct_10B8ED00
{
    int Length;
    char Text[4];
};

class cDoorState
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10b8ed00(const cString& Name);

    int Unknown04;
};

// FUNCTION: 0x10B8ED00 ?FUN_10b8ed00@cDoorState@@UAEHABVcString@@@Z
int cDoorState::FUN_10b8ed00(const cString& Name)
{
    int i = 0;
    const char* Entry = DAT_10f05b98[0];
    do
    {
        char* Copy = 0;
        if (Entry != 0)
        {
            int Length = strlen(Entry);
            if (Length != 0)
            {
                Struct_10B8ED00* Block = (Struct_10B8ED00*)GetAllocator()->Virtual2(Length + 5, 0, 0, 0, 0);
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
        {
            Unknown04 = i;
            return 1;
        }
        i++;
        Entry += 32;
    } while ((int)Entry < (int)DAT_10f05c18);
    return 0;
}
