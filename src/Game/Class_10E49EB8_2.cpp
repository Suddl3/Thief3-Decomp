// Game/Unsorted_10933970_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10E49EB8
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
    virtual void FUN_10933970(void* Item);

    char Unknown04[0x3C];
    std::vector<void*> Unknown40;
};

// FUNCTION: 0x10933970 ?FUN_10933970@Class_10E49EB8@@UAEXPAX@Z
void Class_10E49EB8::FUN_10933970(void* Item)
{
    for (unsigned int i = 0; i < Unknown40.size(); i++)
    {
        if (Unknown40[i] == Item)
        {
            Unknown40.erase(Unknown40.begin() + i);
            return;
        }
    }
}
