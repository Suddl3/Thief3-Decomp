// Game/LoadingScreen.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

extern float DAT_10effbe0;

extern float DAT_10effbe4;

extern float DAT_10effbd8;

extern float DAT_10effbdc;

extern float DAT_10f35af0;

extern float DAT_10f35af4;

extern float DAT_10f35ae8;

extern float DAT_10f35aec;

extern float DAT_10f35b00;

extern float DAT_10f35b04;

extern float DAT_10f35af8;

extern float DAT_10f35afc;

extern bool DAT_10f35b41;

extern bool DAT_10f35b42;

extern const char DAT_10e5b0f4[];

  // "LoadingScreen"
extern const char DAT_10e5b104[];

  // "ProgressWidth"
extern const char DAT_10e5b0e4[];

  // "ProgressHeight"
extern const char DAT_10e5b0d4[];

  // "ProgressPosX"
extern const char DAT_10e5b0c4[];

  // "ProgressPosY"
extern const char DAT_10e5b0b8[];

  // "LogoWidth"
extern const char DAT_10e5b0ac[];

  // "LogoHeight"
extern const char DAT_10e5b0a0[];

  // "LogoPosX"
extern const char DAT_10e5b094[];

  // "LogoPoxY"
extern const char DAT_10e5b084[];

  // "LoadingWidth"
extern const char DAT_10e5b074[];

  // "LoadingHeight"
extern const char DAT_10e5b068[];

  // "LoadingPosX"
extern const char DAT_10e5b05c[];

  // "LoadingPosY"
extern const char DAT_10e5b04c[];

  // "UseMipmapping"
extern const char DAT_10e5b034[];

  // "D3DDrv.D3DRenderDevice"
extern const char DAT_10e5b024[];

  // "UseTrilinear"

class LoadingScreen
{
public:
    static void LoadLayout();
};

// FUNCTION: 0x109DFBA0 ?LoadLayout@LoadingScreen@@SAXXZ
void LoadingScreen::LoadLayout()
{
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b104, &DAT_10effbe0, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b0e4, &DAT_10effbe4, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b0d4, &DAT_10effbd8, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b0c4, &DAT_10effbdc, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b0b8, &DAT_10f35af0, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b0ac, &DAT_10f35af4, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b0a0, &DAT_10f35ae8, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b094, &DAT_10f35aec, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b084, &DAT_10f35b00, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b074, &DAT_10f35b04, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b068, &DAT_10f35af8, 0);
    Config::Instance()->GetFloat(DAT_10e5b0f4, DAT_10e5b05c, &DAT_10f35afc, 0);
    Config::Instance()->GetBool(DAT_10e5b034, DAT_10e5b04c, &DAT_10f35b41, 0);
    Config::Instance()->GetBool(DAT_10e5b034, DAT_10e5b024, &DAT_10f35b42, 0);
}
