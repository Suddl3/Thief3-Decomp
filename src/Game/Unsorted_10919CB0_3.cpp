// Game/Unsorted_10919CB0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/cTextRenderer.h"
#include "Game/Class_1091A8F0.h"
#include "Game/Class_1091AA10.h"
#include "Game/Struct_1091A610.h"
#include "Game/Struct_1091A610Header.h"

// FUNCTION: 0x1091A8F0 ?Free@Class_1091A8F0@@QAEXXZ
void Class_1091A8F0::Free()
{
    if (Unknown08)
    {
        int* Obj = Unknown08 - 1;
        GetAllocator()->Virtual5(Obj);
        Unknown08 = 0;
    }
}

// FUNCTION: 0x1091AA10 ?GetFontName@Class_1091AA10@@QAE?AVcString@@H@Z
cString Class_1091AA10::GetFontName(int A)
{
    if (A != 0)
        return cString("MediumFont16");
    return cString("font6");
}
