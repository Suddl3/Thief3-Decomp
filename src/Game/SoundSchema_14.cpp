// Game/SoundSchema_14.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class SoundSchema {
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
    virtual int GetMetaSoundCount();

    char Unknown04[4];
    std::vector<void*> m_MetaSounds;
};

// FUNCTION: 0x10C666E0 ?GetMetaSoundCount@SoundSchema@@UAEHXZ
int SoundSchema::GetMetaSoundCount()
{
    return m_MetaSounds.size();
}
