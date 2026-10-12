// Game/Unsorted_10A7EF10_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/cTriggerLinkParam.h"

class ULinkDataObject
{
    DECLARE_CLASS(ULinkDataObject, UObject, 0x1, Core)
};

bool FUN_1094c430(const cString& A, const cString& B) throw();

extern const char DAT_10e5da48[];

// FUNCTION: 0x10A7EF10 ??$Cast@VULinkDataObject@@@@YAPAVULinkDataObject@@PAVUObject@@@Z
template ULinkDataObject* Cast<ULinkDataObject>(UObject* Src);

// FUNCTION: 0x10A7F420 ?IsDefaultFlavor@cTriggerLinkParam@@UAEHXZ
int cTriggerLinkParam::IsDefaultFlavor()
{
    return FUN_1094c430(m_Flavor, cString(DAT_10e5da48));
}
