// Game/Class_10A57910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10A57910.h"

// FUNCTION: 0x10A51200 ?SetInOverlay@Class_10A57910@@QAEX_N@Z
void Class_10A57910::SetInOverlay(bool A)
{
    if (Unknown128(Virtual71()) != 0)
    {
        AActor* Obj = Unknown128(Virtual71());
        Obj->bShouldNotTick = !A;
        if (Unknown128(Virtual71())->IsA(AEmitter::StaticClass()))
        {
            AEmitter* Emitter = (AEmitter*)Unknown128(Virtual71());
            if (Emitter != 0)
            {
                if (A)
                {
                    Emitter->InOverlay = 1;
                }
                else
                {
                    Emitter->InOverlay = 0;
                }
            }
            ((APawn*)Unknown128(Virtual71()))->FUN_10a6ea30(0x40800056, 1);
        }
    }
}
