// Game/Unsorted_10937520_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10937730.h"
#include "Game/cD3DStateCache.h"

class IDirect3DDevice8
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
    virtual int __stdcall Virtual56(int Token);
};

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x10937730 ?FUN_10937730@Class_10937730@@QAEXXZ
void Class_10937730::FUN_10937730()
{
    Reset();
    // The object sits on a cD3DStateCache, whose textures are cleared here.
    ((cD3DStateCache*)(void*)this)->ClearTextures();
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown6B4 = 7;
    for (int i = 0; i < 3; i++)
    {
        if (GDirect3DDevice8 && Unknown00[i])
            GDirect3DDevice8->Virtual56(Unknown00[i]);
        Unknown00[i] = 0;
    }
}
