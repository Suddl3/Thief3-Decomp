// Game/XBInputInterface.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Config.h"

class IDirectInput8A;

extern int DAT_10f3a374;

extern IDirectInput8A* DAT_10f3a36c;

extern char DAT_10eb840c[];

extern const char DAT_10e6dc68[];

extern const char DAT_10e6dc48[];

extern float DAT_10e49684;

extern "C" int __stdcall DirectInput8Create(int Instance, unsigned int Version, void* Iid, IDirectInput8A** Out, void* Outer);

class XBInputInterface
{
public:
    bool GetNormalizedAxis(int A, float* Out);
    unsigned char FUN_10aae350(int A);
    void InitDirectInput();

    char Unknown00[0x808];
    float m_DeadZonePercent;
    float m_DeadZoneScale;
};

// FUNCTION: 0x10AAEB00 ?InitDirectInput@XBInputInterface@@QAEXXZ
void XBInputInterface::InitDirectInput()
{
    int Result = DirectInput8Create(DAT_10f3a374, 0x800, DAT_10eb840c, &DAT_10f3a36c, 0);
    if (Result < 0)
        DAT_10f3a36c = 0;
    if (Config::Instance()->GetFloat(DAT_10e6dc48, DAT_10e6dc68, &m_DeadZonePercent, 0))
        m_DeadZoneScale = DAT_10e49684 / (DAT_10e49684 - m_DeadZonePercent);
}

// FUNCTION: 0x10AAEB70 ?GetNormalizedAxis@XBInputInterface@@QAE_NHPAM@Z
bool XBInputInterface::GetNormalizedAxis(int A, float* Out)
{
    if ((A >= 200 && A <= 215) || (A >= 240 && A <= 243))
    {
        *Out = FUN_10aae350(A) * 0.003921569f;
        return true;
    }
    *Out = 0.0f;
    return false;
}
