// Game/cCountLabel_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/cCountLabel.h"

// FUNCTION: 0x10B2F6C0 ?SetName@cCountLabel@@QAEXABVcString@@@Z
void cCountLabel::SetName(const cString& Name)
{
    if (m_Label)
    {
        m_Name = Name;
        RefreshLabel();
    }
}
