// Game/Class_10E49E50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10E49E50
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
    virtual void FUN_10933730(void* Item);

    char Unknown04[0x1C];
    std::vector<void*> Unknown20;
};

// FUNCTION: 0x10933730 ?FUN_10933730@Class_10E49E50@@UAEXPAX@Z
void Class_10E49E50::FUN_10933730(void* Item)
{
    for (unsigned int i = 0; i < Unknown20.size(); i++)
    {
        if (Unknown20[i] == Item)
        {
            Unknown20.erase(Unknown20.begin() + i);
            return;
        }
    }
}
