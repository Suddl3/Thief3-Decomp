// Game/Unsorted_10A7EF10_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10E6BFBC.h"

class ULinkDataObject
{
    DECLARE_CLASS(ULinkDataObject, UObject, 0x1, Core)
};

bool FUN_1094c430(const Class_109081E0& A, const Class_109081E0& B) throw();

extern const char DAT_10e5da48[];

// FUNCTION: 0x10A7EF10 ??$Cast@VULinkDataObject@@@@YAPAVULinkDataObject@@PAVUObject@@@Z
template ULinkDataObject* Cast<ULinkDataObject>(UObject* Src);

// FUNCTION: 0x10A7F420 ?FUN_10a7f420@Class_10E6BFBC@@UAEHXZ
int Class_10E6BFBC::FUN_10a7f420()
{
    return FUN_1094c430(Unknown08, Class_109081E0(DAT_10e5da48));
}
