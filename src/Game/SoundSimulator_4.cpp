// Game/SoundSimulator_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C55090.h"

class Class_10C56E40;

struct Struct_10C549A0;

struct Struct_10C549A0_Entry;

class Class_10C556D0_Unknown08
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
    virtual void Virtual12(void* Arg);
};

class Class_10C556D0_Unknown1C
{
public:
    char Unknown00[8];
    Class_10C556D0_Unknown08* Unknown08;
};

class SoundSimulator
{
public:
    virtual void Virtual0(Class_10C56E40 A);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void UnregisterFromSounds();
    virtual void FUN_10c549a0(Struct_10C549A0* A);
    virtual void FUN_10c547b0(int p1);
    virtual void FUN_10c547d0();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10c547f0(int p1);
    virtual void FUN_10c547e0();

    char Unknown04[0x1C];
    Class_10C55090* m_Registrations;
    int m_RegistrationCount;
    char Unknown28[0x24];
    int m_EntryCount;
    char Unknown50[4];
    Struct_10C549A0_Entry* m_Entries;
};

// FUNCTION: 0x10C556D0 ?UnregisterFromSounds@SoundSimulator@@UAEXXZ
void SoundSimulator::UnregisterFromSounds()
{
    Class_10C55090* Node = m_Registrations->Unknown00;
    while (Node != m_Registrations)
    {
        Node->Unknown1C->Unknown08->Virtual12(&Unknown04);
        Node->Unknown1C->Unknown08->Virtual10();
        Class_10C55090* Next = Node->Unknown00;
        if (Node != m_Registrations)
        {
            Node->Unknown04->Unknown00 = Next;
            Node->Unknown00->Unknown04 = Node->Unknown04;
            Node->FUN_10c55090();
            delete Node;
            m_RegistrationCount--;
        }
        Node = Next;
    }
}
