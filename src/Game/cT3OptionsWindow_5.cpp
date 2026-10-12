// Game/cT3OptionsWindow_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Options.h"

Options* GetOptions();

class Class_10B73810
{
public:
    void ApplyValues();
};

class Class_10B739C0_Unknown1A4
{
public:
    int Unknown00;
};

class cT3OptionsWindow : public Class_10B73810
{
public:
    void ResetToDefaults();

    char Unknown00[0x19C];
    int m_OptionCount;
    char Unknown1A0[0x4];
    Class_10B739C0_Unknown1A4** m_Options;
};

// FUNCTION: 0x10B73890 ?ResetToDefaults@cT3OptionsWindow@@QAEXXZ
void cT3OptionsWindow::ResetToDefaults()
{
    for (int i = 0; i < m_OptionCount; i++)
        GetOptions()->Set(m_Options[i]->Unknown00, GetOptions()->SetDefaults(m_Options[i]->Unknown00));
    ApplyValues();
    GetOptions()->FUN_10ab6420();
}
