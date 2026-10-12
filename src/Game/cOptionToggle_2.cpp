// Game/cOptionToggle_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A58FE0.h"

class cTextWindow : public Class_10A58FE0
{
public:
    virtual bool HandleKey(int A, int B, bool C);
};

class cOptionToggle : public cTextWindow
{
public:
    virtual void FUN_10a56060(int A, int B, bool C);

    char Unknown04[0x1CC];
    int m_Selection;
    bool m_ThirdStateEnabled;
};

// FUNCTION: 0x10A56060 ?FUN_10a56060@cOptionToggle@@UAEXHH_N@Z
void cOptionToggle::FUN_10a56060(int A, int B, bool C)
{
    if (C && A == 0x1d)
    {
        int Value = m_Selection;
        int Mode;
        if (m_ThirdStateEnabled)
        {
            Mode = Value + 1;
            if (Mode == 3)
                Mode = 0;
        }
        else
        {
            Mode = Value == 0;
        }
        SetSelection(Mode);
    }
    cTextWindow::HandleKey(A, B, C);
}
