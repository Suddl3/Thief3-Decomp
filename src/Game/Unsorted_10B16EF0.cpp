// Game/Unsorted_10B16EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_10BFBD70.h"
#include "Game/WindowManager.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10B45AD0.h"

class Class_10B45AD0;

class Class_10B16930
{
public:
    Class_10BFBD70 FUN_109e6d80(int A);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void FUN_10b16860(int A);
    void FUN_10b16ef0(bool A);

    char Pad00[0x1];
};

// FUNCTION: 0x10B16EF0 ?FUN_10b16ef0@Class_10B16930@@QAEX_N@Z
void Class_10B16930::FUN_10b16ef0(bool A)
{
    Class_10B45AD0* Window;
    {
        Class_109081E0 Name("FMVWindow");
        Window = (Class_10B45AD0*)((WindowManager*)this)->FUN_109e5960(Name);
    }
    if (Window)
    {
        if (Window->Virtual39() == 0x78)
        {
            if (A)
            {
                ((Class_109E6D60*)this)->Virtual4((int)Window);
                return;
            }
            ((WindowManager*)this)->FUN_109e6b20(1);
        }
    }
}
