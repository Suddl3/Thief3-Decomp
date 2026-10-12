// Game/Unsorted_10AAEC10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF250.h"
#include "Game/GUID.h"
#include "Game/IDirectInput8A.h"
#include "Game/IDirectInputDevice8A.h"

extern "C" void* memset(void* Dest, int Value, unsigned int Count);

struct DIDEVICEINSTANCEA;

struct DIDEVICEOBJECTINSTANCEA;

struct DIDEVCAPS
{
    unsigned long dwSize;
    unsigned long dwFlags;
    unsigned long dwDevType;
    unsigned long dwAxes;
    unsigned long dwButtons;
    unsigned long dwPOVs;
    unsigned long dwFFSamplePeriod;
    unsigned long dwFFMinTimeResolution;
    unsigned long dwFirmwareRevision;
    unsigned long dwHardwareRevision;
    unsigned long dwFFDriverVersion;
};

class IDirectInputDevice8A;

extern const char* DAT_10f3a250;

extern IDirectInput8A* DAT_10f3a36c;

extern IDirectInputDevice8A* DAT_10f3a368;

extern int DAT_10f3a370;

extern const char DAT_10e47660[];

extern char DAT_10eb810c[];

int __stdcall EnumJoysticksCallback(const DIDEVICEINSTANCEA* Instance, void* Ref);

int __stdcall FUN_10aaf1b0(const DIDEVICEOBJECTINSTANCEA* Object, void* Ref);

// FUNCTION: 0x10AAF250 ?InitJoystick@Class_10AAF250@@QAEXPAPBD@Z
void Class_10AAF250::InitJoystick(const char** Name)
{
    const char* Text = *Name;
    if (!Text)
        Text = DAT_10e47660;
    DAT_10f3a250 = Text;
    DAT_10f3a36c->EnumDevices(4, EnumJoysticksCallback, 0, 1);
    if (DAT_10f3a368)
    {
        if (DAT_10f3a368->SetDataFormat(DAT_10eb810c) >= 0)
        {
            if (DAT_10f3a368->SetCooperativeLevel(DAT_10f3a370, 5) >= 0)
            {
                DIDEVCAPS Caps;
                memset(&Caps, 0, sizeof(Caps));
                Caps.dwSize = sizeof(Caps);
                if (DAT_10f3a368->GetCapabilities(&Caps) >= 0)
                {
                    if (Caps.dwFlags & 2)
                        m_IsPolled = true;
                    if (Caps.dwFlags & 0x100)
                    {
                        m_HasForceFeedback = true;
                        DAT_10f3a368->EnumObjects(FUN_10aaf1b0, 0, 0);
                    }
                }
            }
        }
    }
}
