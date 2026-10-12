// Game/Unsorted_10919CB0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/cTextRenderer.h"
#include "Game/Class_1091A8F0.h"
#include "Game/Class_1091AA10.h"
#include "Game/Struct_1091A610.h"
#include "Game/Struct_1091A610Header.h"

class Class_10941C40;

// FUNCTION: 0x1091A640 ?DrawText@cTextRenderer@@QAE_NPAVClass_10941C40@@PBUStruct_1091A610@@PAM2KMMK@Z
bool cTextRenderer::DrawText(Class_10941C40* A, const Struct_1091A610* Text, float* X, float* Y,
                                  unsigned long Color, float ScaleX, float ScaleY, unsigned long Flags)
{
    int Length = !Text->Unknown00 ? 0 : ((Struct_1091A610Header*)Text->Unknown00 - 1)->Unknown00;
    const char* Chars = Text->Unknown00 ? Text->Unknown00 : DAT_10e47660;
    return DrawChars(A, Chars, Length, X, Y, Color, ScaleX, ScaleY, Flags);
}

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
