// Game/SoundSimulator.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/SoundSimulator.h"

class Class_10C41420
{
public:
    void FUN_10c41ab0(int p1);
};

Class_10C41420* GetSoundBufferPool();

// FUNCTION: 0x10C547B0 ?FUN_10c547b0@SoundSimulator@@UAEXH@Z
void SoundSimulator::FUN_10c547b0(int p1)
{
    GetSoundBufferPool()->FUN_10c41ab0(p1);
}
