// Game/cResSound_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C662F0.h"
#include "Game/Class_10DB58F0.h"

class cResSound;

Class_10DB58F0* FUN_10db58f0();

Class_10C662F0* GetSchemaMetaFile();

class cResSound
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
    virtual void FUN_10c61000();
    virtual void Virtual16();
    virtual bool Virtual17();
};

// FUNCTION: 0x10C61000 ?FUN_10c61000@cResSound@@UAEXXZ
void cResSound::FUN_10c61000()
{
    if (Virtual17())
        FUN_10db58f0()->Virtual13(this);
    else
        GetSchemaMetaFile()->AddRef(this);
}
