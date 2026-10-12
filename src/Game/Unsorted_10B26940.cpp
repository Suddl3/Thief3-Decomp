// Game/Unsorted_10B26940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10B26D00.h"
#include "Game/Class_10B27090.h"
#include "Game/Class_10B27220.h"
#include "Game/Struct_10F0328C.h"

extern Struct_10F0328C DAT_10f0328c[];

extern float DAT_10eafbdc;

extern void* DAT_10e7aae8[];

class Class_10E7AAE8
{
public:
    Class_10E7AAE8() : Unknown00(DAT_10e7aae8), Unknown08(0), Unknown0C(0), Unknown10(0) {}
    ~Class_10E7AAE8();

    void* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10B26CB0 ?FUN_10b26cb0@@YAPAVClass_10E7AAE8@@XZ
Class_10E7AAE8* FUN_10b26cb0()
{
    static Class_10E7AAE8 Instance;
    return &Instance;
}

// FUNCTION: 0x10B26D00 ?FUN_10b26d00@Class_10B26D00@@QAE_NHHH@Z
bool Class_10B26D00::FUN_10b26d00(int A, int B, int C)
{
    if (Unknown30)
    {
        for (int i = 0; i < 4; i++)
        {
            if (Unknown08[i])
                break;
        }
        return true;
    }
    return false;
}

// FUNCTION: 0x10B27090 ?FUN_10b27090@Class_10B27090@@QAEXHABVcString@@H@Z
void Class_10B27090::FUN_10b27090(int Index, const cString& Name, int Value)
{
    Unknown08[Index] = true;
    Unknown14[Index] = Name;
    Unknown20[Index] = Value;
    FUN_10b26e00();
}

// FUNCTION: 0x10B27220 ?RequestStop@Class_10B27220@@QAEXH@Z
void Class_10B27220::RequestStop(int Index)
{
    if (DAT_10f0328c[Index].Unknown00 > DAT_10eafbdc)
        m_StopPending = true;
    else
        Stop();
}
