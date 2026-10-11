// Game/SoundSchema_17.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>
#include <vector>

class Class_10C66A20_Unknown0C
{
public:
    virtual ~Class_10C66A20_Unknown0C();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual const std::string& Virtual7();
};

class SoundSchema
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
    virtual void RemoveByName(const std::string& Name);

    char Unknown04[4];
    std::vector<Class_10C66A20_Unknown0C*> Unknown0C;
};

// FUNCTION: 0x10C66A20 ?RemoveByName@SoundSchema@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
void SoundSchema::RemoveByName(const std::string& Name)
{
    for (unsigned int i = 0; i < Unknown0C.size(); i++)
    {
        if (Unknown0C[i]->Virtual7() == Name)
        {
            delete Unknown0C[i];
            Unknown0C.erase(Unknown0C.begin() + i);
            return;
        }
    }
}
