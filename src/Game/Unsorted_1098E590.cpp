// Game/Unsorted_1098E590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10993EC0.h"
#include "Game/Class_10E70A50.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

class ASpecialOptions : public Class_10993EC0
{
public:
    ASpecialOptions();
};

// FUNCTION: 0x1098E590 ?ConstructASpecialOptions@@YAXPAX@Z
void ConstructASpecialOptions(void* Memory)
{
    new ((EInternal*)Memory) ASpecialOptions();
}
