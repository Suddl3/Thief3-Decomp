// Game/UT3Game_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

class Class_10B15450_Item
{
public:
    virtual void Virtual0();
};

class Class_10B152C0
{
public:
    void FUN_10b15300(int Value);
};

class UT3Game
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
    virtual void FUN_10b15450(UObject* Obj);

    void FUN_10b137c0();

    char Unknown04[0x2C];
    UObject* Unknown30;
    char Unknown34[8];
    int Unknown3C;
    char Unknown40[4];
    Class_10B15450_Item** Unknown44;
};

// FUNCTION: 0x10B15450 ?FUN_10b15450@UT3Game@@UAEXPAVUObject@@@Z
void UT3Game::FUN_10b15450(UObject* Obj)
{
    FUN_10b137c0();
    if (Obj->IsA(UGameEngine::StaticClass()))
        ((Class_10B152C0*)this)->FUN_10b15300((int)Obj);
    Unknown30 = Obj;
    for (int i = 0; i < Unknown3C; i++)
        Unknown44[i]->Virtual0();
}
