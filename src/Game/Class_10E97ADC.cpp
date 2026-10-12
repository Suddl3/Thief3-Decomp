// Game/Class_10E97ADC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

// Copied from include/Game/Class_10E97ADC.h with the virtual destructor added
// and the three cIntArray members the destructor tears down.
class Class_10E97ADC
{
public:
    Class_10E97ADC* Init();
    virtual ~Class_10E97ADC();

    cIntArray Unknown04;
    cIntArray m_PathPoints;
    cIntArray Unknown1C;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
};

// FUNCTION: 0x10BFF760 ??1Class_10E97ADC@@UAE@XZ
Class_10E97ADC::~Class_10E97ADC()
{
}

// FUNCTION: 0x10BFF8A0 ??_GClass_10E97ADC@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10BFF760's definition in this unit.
