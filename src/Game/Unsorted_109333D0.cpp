// Game/Unsorted_109333D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10933420
{
public:
    std::vector<void*>::iterator FUN_10933420(std::vector<void*>::iterator Where);

    char Unknown00[4];
    std::vector<void*> Unknown04;
};

class Class_10E49DFC
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
    virtual void FUN_109333d0(void* Item);

    char Unknown04[0x38];
    Class_10933420 Unknown3C;
};

// FUNCTION: 0x109333D0 ?FUN_109333d0@Class_10E49DFC@@UAEXPAX@Z
void Class_10E49DFC::FUN_109333d0(void* Item)
{
    Class_10933420& List = Unknown3C;
    for (unsigned int i = 0; i < List.Unknown04.size(); i++)
    {
        if (Unknown3C.Unknown04[i] == Item)
        {
            List.FUN_10933420(Unknown3C.Unknown04.begin() + i);
            return;
        }
    }
}
