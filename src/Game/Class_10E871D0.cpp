// Game/Class_10E871D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E871C8.h"
#include "Game/Window.h"

Class_10E871C8* FUN_10b70460();

class Class_10E871D0 : public Window
{
public:
    void FUN_10b70ac0(int A);
    void Update(int A);
};

// FUNCTION: 0x10B70F20 ?Update@Class_10E871D0@@QAEXH@Z
void Class_10E871D0::Update(int A)
{
    FUN_10a53560(A);
    if (FUN_10b70460()->Unknown102F4 > 0)
    {
        FUN_10b70ac0(A);
        FUN_10b70460()->FUN_10b70db0(A);
    }
}
