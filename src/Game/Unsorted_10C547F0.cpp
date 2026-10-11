// Game/Unsorted_10C547F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB5B20.h"
#include "Game/Class_10C54970.h"
#include "Game/Class_10C55800.h"
#include "Game/SoundSimulator.h"
#include "Game/Object_10AB5B20.h"

class Class_10C41420
{
public:
    void FUN_10c41490(int p1);
};

Class_10C41420* FUN_10c47d90();

struct Struct_10C55800
{
};

// FUNCTION: 0x10C547F0 ?FUN_10c547f0@SoundSimulator@@UAEXH@Z
void SoundSimulator::FUN_10c547f0(int p1)
{
    FUN_10c47d90()->FUN_10c41490(p1);
}

// FUNCTION: 0x10C54970 ?FUN_10c54970@Class_10C54970@@QAE?AVClass_10AB5B20@@XZ
Class_10AB5B20 Class_10C54970::FUN_10c54970()
{
    if (Unknown28)
        return Class_10AB5B20(Unknown28);
    return Class_10AB5B20();
}
