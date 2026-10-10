// Game/UT3Game_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

class Class_10B13B00_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(UObject* Obj);
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
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void FUN_10b13b00(UObject* Obj);

    char Unknown04[0x80];
    int Unknown84;
    char Unknown88[4];
    Class_10B13B00_Item** Unknown8C;
};

// FUNCTION: 0x10B13B00 ?FUN_10b13b00@UT3Game@@UAEXPAVUObject@@@Z
void UT3Game::FUN_10b13b00(UObject* Obj)
{
    if (Obj->IsA(UGameEngine::StaticClass()))
    {
        for (int i = 0; i < Unknown84; i++)
            Unknown8C[i]->Virtual3(Obj);
    }
}
