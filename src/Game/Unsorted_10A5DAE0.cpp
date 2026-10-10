// Game/Unsorted_10A5DAE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Window.h"

class Class_10E698F0 : public Window
{
public:
    virtual FVector PlacedPosition();

    char Unknown118[0xA0];
    bool Unknown1B8;
    bool Unknown1B9;
    FVector Unknown1BC;
};

// FUNCTION: 0x10A5DAE0 ?PlacedPosition@Class_10E698F0@@UAE?AVFVector@@XZ
FVector Class_10E698F0::PlacedPosition()
{
    FVector Position = Window::PlacedPosition();
    return Position + Unknown1BC;
}
