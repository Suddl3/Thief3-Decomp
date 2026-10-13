// Game/Class_10E809B8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092D420.h"
#include "Game/Class_10B155D0.h"

void* GetWindowManager();

extern Class_1092D420* DAT_10f31b88;

class Class_10E5B2C0
{
public:
    virtual bool FUN_10a52e70(int A, int B, int C);
};

class Class_10B42B30_Unknown120
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
};

class Class_10E809B8 : public Class_10E5B2C0
{
public:
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
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual bool FUN_10b42b30(int A, int B, int C);

    char Unknown04[0x11C];
    Class_10B42B30_Unknown120* Unknown120;
    char Unknown124[0xC];
    bool Unknown130;
};

// FUNCTION: 0x10B42B30 ?FUN_10b42b30@Class_10E809B8@@UAE_NHHH@Z
bool Class_10E809B8::FUN_10b42b30(int A, int B, int C)
{
    if (B == 1 && static_cast<Class_10B155D0*>(GetWindowManager())->FUN_10b155d0(A, 1))
    {
        if (Unknown130)
            DAT_10f31b88->FUN_1092d350(-1, -1);
        Unknown120->Virtual3();
        if (Unknown130)
            DAT_10f31b88->FUN_1092d350(-1, -1);
        return true;
    }
    return Class_10E5B2C0::FUN_10a52e70(A, B, C);
}
