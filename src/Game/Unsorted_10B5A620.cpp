// Game/Unsorted_10B5A620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Window.h"
#include "Game/Class_10A54FE0.h"
#include "Game/Class_10A55050.h"
#include "Game/Class_10A64F70.h"
#include "Game/Class_10AA8300.h"

class Class_10E82688 : public Window
{
public:
    virtual void FUN_10b5a620(int A);
    void FUN_10b5a3d0();
    void FUN_10b5a390();

    char Unknown118[0x4];
    Class_10A55050* Unknown11C;
    float Unknown120;
    float Unknown124;
    int Unknown128;
    int Unknown12C;
    int Unknown130;
    Class_10A64F70 Unknown134;
};

// FUNCTION: 0x10B5A620 ?FUN_10b5a620@Class_10E82688@@UAEXH@Z
void Class_10E82688::FUN_10b5a620(int A)
{
    Window::FUN_10a53560(A);
    if (Unknown11C)
    {
        Unknown134.FUN_10a64f70(A);
        int Value = ((Class_10AA8300*)&Unknown134)->FUN_10aa8300();
        if (Unknown130 != Value)
            Unknown11C->FUN_10a55050((unsigned char)Value);
        Unknown124 = *(float*)&A + Unknown124;
        if (Unknown124 > Unknown120)
        {
            if (Unknown12C == Unknown128 - 1)
            {
                FUN_10b5a3d0();
                return;
            }
            int Next = (Unknown12C + 1) % Unknown128;
            Unknown12C = Next;
            ((Class_10A54FE0*)Unknown11C)->FUN_10a54fe0(Next);
            FUN_10b5a390();
        }
    }
}
