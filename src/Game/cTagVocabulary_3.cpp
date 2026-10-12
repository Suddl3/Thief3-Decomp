// Game/cTagVocabulary_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string>
#include "Game/cTagVocabulary.h"

// FUNCTION: 0x10C635A0 ?SetString@cTagVocabulary@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
void cTagVocabulary::SetString(const std::string& A)
{
    m_Text = A;
}
