// Game/cConversationManager_18.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"

extern const char DAT_10e47660[];

class Class_10A14300_Unknown10
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
    virtual cString* Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30(int A);
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34(int A);
};

class cConversationManager
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
    virtual int FUN_10a14300(int A, const char** Name);

    char Unknown04[0x4];
    int Unknown08;
    char Unknown0C[0x4];
    Class_10A14300_Unknown10** Unknown10;
};

// FUNCTION: 0x10A14300 ?FUN_10a14300@cConversationManager@@UAEHHPAPBD@Z
int cConversationManager::FUN_10a14300(int A, const char** Name)
{
    for (int i = 0; i < Unknown08; i++)
    {
        cString* Record = Unknown10[i]->Virtual15();
        const char* Have = DAT_10e47660;
        if (Record->Unknown00)
            Have = Record->Unknown00;
        const char* Want = *Name ? *Name : DAT_10e47660;
        if (strcmp(Want, Have) == 0)
        {
            Unknown10[i]->Virtual34(A);
            Unknown10[i]->Virtual30(A);
        }
    }
    return 1;
}
