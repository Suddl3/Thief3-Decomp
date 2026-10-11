// Game/cConCameraController.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Config.h"

extern void* DAT_10e6da90[];

extern const char DAT_10e6dae0[];

extern const char DAT_10e6daf4[];

extern const char DAT_10e6da84[];

class cConCameraController
{
public:
    cConCameraController* Init();

    void** Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    char Unknown10[4];
    bool Unknown14;
    float m_ShoulderMult;
    float m_FaceScalar;
    char Unknown20[0x30];
    int Unknown50;
};

// FUNCTION: 0x10AABDF0 ?Init@cConCameraController@@QAEPAV1@XZ
cConCameraController* cConCameraController::Init()
{
    Unknown00 = DAT_10e6da90;
    Unknown04 = 0;
    Unknown08 = 1;
    Unknown0C = 0x11;
    Unknown14 = true;
    Unknown50 = 0;
    Config::Instance()->GetFloat(DAT_10e6dae0, DAT_10e6daf4, &m_ShoulderMult, 0);
    Config::Instance()->GetFloat(DAT_10e6dae0, DAT_10e6da84, &m_FaceScalar, 0);
    return this;
}
