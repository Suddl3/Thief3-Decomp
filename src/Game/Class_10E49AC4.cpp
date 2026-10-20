// Game/Class_10E49AC4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Options.h"

class Class_10E49AC4 : public Options
{
public:
    void Init();
};

// FUNCTION: 0x10AB6E50 ?Init@Class_10E49AC4@@QAEXXZ
void Class_10E49AC4::Init()
{
    for (int i = 0; i < 21; i++)
        Values[i] = SetDefaults(i);
    unsigned int Flags = Load();
    Unknown59 = (Flags >> 2) & 1;
    Unknown5A = (Flags >> 3) & 1;
    Unknown58 = Flags == 1 || Unknown59 != 0;
}
