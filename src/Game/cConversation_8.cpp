// Game/cConversation_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

extern const char DAT_10e47660[];

bool FUN_1090f010(const int* A, const int* B);

// The result of Unknown24's getter: a count and an array of strings.
class Class_10A824D0_Virtual24
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    const char** Unknown0C;
};

class Class_10A824D0_Unknown24
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
    virtual Class_10A824D0_Virtual24* Virtual24(int A);
};

class cConversation
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool FUN_10a824d0(const char** Name);

    char Unknown04[0x20];
    Class_10A824D0_Unknown24* Unknown24;
    char Unknown28[0x18];
    char Unknown40;
    char Unknown41[0x1B];
    int Unknown5C;
    char Unknown60[4];
    int* Unknown64;
    int Unknown68;
    char Unknown6C[4];
    int* Unknown70;
};

// FUNCTION: 0x10A824D0 ?FUN_10a824d0@cConversation@@UAE_NPAPBD@Z
bool cConversation::FUN_10a824d0(const char** Name)
{
    if (Unknown40 & 0x80)
        return true;
    for (int i = 0; i < Unknown5C; i++)
    {
        if (FUN_1090f010(&Unknown64[i], (const int*)Name))
            return true;
    }
    for (int j = 0; j < Unknown68; j++)
    {
        Class_10A824D0_Virtual24* Strings = Unknown24->Virtual24(Unknown70[j]);
        for (int k = 0; k < Strings->Unknown04; k++)
        {
            const char* Want = *Name ? *Name : DAT_10e47660;
            const char* Have = Strings->Unknown0C[k] ? Strings->Unknown0C[k] : DAT_10e47660;
            if (strcmp(Have, Want) == 0)
                return true;
        }
    }
    return false;
}
