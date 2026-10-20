// Game/Class_10E9B168_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109BBBA0.h"
#include "Game/Class_10E9AFD0.h"
#include "Game/Class_10E9B088.h"

class Class_10E9B168;

class Class_10E9B168 : public Class_10E9AFD0, public Class_10E9B088
{
public:
    virtual ~Class_10E9B168();
    virtual bool FUN_10c3d590(Class_10E9B168* A);
};

// FUNCTION: 0x10C3DCC0 ??1Class_10E9B168@@UAE@XZ
Class_10E9B168::~Class_10E9B168()
{
    if (m_Handle >= 0)
    {
        ((Class_109BBBA0*)m_Manager)->FUN_109bbba0(m_Handle);
        m_Handle = -1;
    }
    Class_10E9AFD0::Unknown18 = false;
}

// FUNCTION: 0x10C3E230 ??_GClass_10E9B168@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C3DCC0's definition in this unit.
