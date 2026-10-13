// Game/SoundSchema_19.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>
#include "Game/cString.h"

class Class_10C67A90_Unknown70
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(cString& Out);
};

class SoundSchema
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void FUN_10c67a90(const std::string& Name);

    char Unknown04[0x18];
    std::string Unknown1C;
    char Unknown38[0x38];
    Class_10C67A90_Unknown70* Unknown70;
};

// FUNCTION: 0x10C67A90 ?FUN_10c67a90@SoundSchema@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
void SoundSchema::FUN_10c67a90(const std::string& Name)
{
    Unknown1C = Name;
    if (Unknown70)
    {
        cString Key(Unknown1C.c_str());
        Unknown70->Virtual2(Key);
    }
}
