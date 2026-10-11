// Game/Class_10E6DA64.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"

extern const char DAT_10e47660[];

Class_10905A90_Member* GetAllocator();

class Class_10AAB970_Unknown24
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual const char** Virtual25(char** A);
};

class Class_10AAB970_Unknown0C
{
public:
    char Unknown00[0x24];
    Class_10AAB970_Unknown24* Unknown24;
};

class Class_10E6DA64
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Class_10AAB970_Unknown0C* FUN_10aab970(const char** Name, int A);

    Class_10E6DA64* FUN_10aab8b0();

    int Unknown04;
    int Unknown08;
    Class_10AAB970_Unknown0C** Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10AAB970 ?FUN_10aab970@Class_10E6DA64@@UAEPAVClass_10AAB970_Unknown0C@@PAPBDH@Z
Class_10AAB970_Unknown0C* Class_10E6DA64::FUN_10aab970(const char** Name, int A)
{
    char* Key;
    for (int i = 0; i < Unknown04; i++)
    {
        const char** Slot = Unknown0C[i]->Unknown24->Virtual25(&Key);
        const char* Want = DAT_10e47660;
        if (*Slot)
            Want = *Slot;
        const char* Have = *Name ? *Name : DAT_10e47660;
        bool Equal = strcmp(Have, Want) == 0;
        if (Key)
        {
            char* Block = Key - 4;
            GetAllocator()->Virtual5(Block);
            Key = 0;
        }
        if (Equal)
            return Unknown0C[i];
    }
    return 0;
}
