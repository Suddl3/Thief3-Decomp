// Game/Class_10E82688_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Window.h"
#include "Game/Class_10A54FE0.h"
#include "Game/Class_10A55050.h"
#include "Game/Class_10A64F70.h"
#include "Game/Class_10AA8300.h"

class Class_10E82688 : public Window
{
public:
    virtual void Tick(int A);
    void Close();
    void ResetFrame();

    char Unknown118[0x4];
    Class_10A55050* Unknown11C;
    float m_FrameTime;
    float m_Elapsed;
    int m_FrameCount;
    int m_Frame;
    int Unknown130;
    Class_10A64F70 Unknown134;
};

// FUNCTION: 0x10B5A620 ?Tick@Class_10E82688@@UAEXH@Z
void Class_10E82688::Tick(int A)
{
    Window::FUN_10a53560(A);
    if (Unknown11C)
    {
        Unknown134.FUN_10a64f70(A);
        int Value = ((Class_10AA8300*)&Unknown134)->FUN_10aa8300();
        if (Unknown130 != Value)
            Unknown11C->FUN_10a55050((unsigned char)Value);
        m_Elapsed = *(float*)&A + m_Elapsed;
        if (m_Elapsed > m_FrameTime)
        {
            if (m_Frame == m_FrameCount - 1)
            {
                Close();
                return;
            }
            int Next = (m_Frame + 1) % m_FrameCount;
            m_Frame = Next;
            ((Class_10A54FE0*)Unknown11C)->FUN_10a54fe0(Next);
            ResetFrame();
        }
    }
}
