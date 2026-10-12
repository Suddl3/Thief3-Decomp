// Game/Unsorted_10B270D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/cIntArray.h"
#include "Game/Class_10B27090.h"
#include "Game/Class_10B17210.h"

extern const char DAT_10e47660[];

void* FUN_10b154c0();

class Class_10B270D0_Unknown30
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
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56(int A);
};

class Class_10B27220
{
public:
    void RequestStop(int Index);
    void Stop();
    void Update(float A);

    char Unknown00[8];
    char* m_Active;
    char Unknown0C[8];
    cString* Unknown14;
    char Unknown18[8];
    int* Unknown20;
    char Unknown24[0xC];
    Class_10B270D0_Unknown30* Unknown30;
    float m_Elapsed;
    bool m_StopPending;
    char Pad39[0x3];
};

// FUNCTION: 0x10B270D0 ?Stop@Class_10B27220@@QAEXXZ
void Class_10B27220::Stop()
{
    int Index = 0;
    for (int i = 0; i < 4; i++)
    {
        if (m_Active[i] != 0)
        {
            Index = i;
            break;
        }
    }
    if (Unknown30)
    {
        Unknown30->Virtual56(0);
        cIntArray Items;
        ((Class_10B17210*)FUN_10b154c0())->FUN_10b17210(Items);
        Unknown30 = 0;
    }
    m_Active[Index] = 0;
    Unknown14[Index] = cString(DAT_10e47660);
    Unknown20[Index] = 0;
    m_StopPending = false;
    ((Class_10B27090*)this)->FUN_10b26e00();
}
