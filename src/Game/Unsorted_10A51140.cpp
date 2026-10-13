// Game/Unsorted_10A51140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7EDB8.h"
#include "Game/WindowManager.h"
#include "Game/Class_1092E930.h"
#include "Game/Class_10905A90_Member.h"

extern WindowManager* GWindowManager;

class Class_10E67BD8
{
public:
    void RemoveWindow(int Index);

    char Unknown00[0x11C];
    void* Unknown11C;
    char Unknown120[8];
    void** m_Windows;
};

// FUNCTION: 0x10A514E0 ?RemoveWindow@Class_10E67BD8@@QAEXH@Z
void Class_10E67BD8::RemoveWindow(int Index)
{
    if (m_Windows[Index])
    {
        if (Unknown11C == m_Windows[Index])
            Unknown11C = 0;
        GWindowManager->FUN_109e3d60(m_Windows[Index]);
        m_Windows[Index] = 0;
    }
}

// FUNCTION: 0x10A51530 ?FUN_10a51530@Class_10E7EDB8@@UAEXHPAXHH@Z
void Class_10E7EDB8::FUN_10a51530(int A, void* B, int C, int D)
{
    if (A == 0x26)
    {
        for (int i = 0; i < Unknown08; i++)
        {
            if (Unknown10[i] && Unknown10[i] == B)
            {
                if (Unknown04 == Unknown10[i])
                    Unknown04 = 0;
                Unknown10[i] = 0;
            }
        }
    }
}
