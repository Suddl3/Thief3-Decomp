// Game/cTextRenderer.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cTextRenderer.h"
#include "Game/Class_1091A4F0.h"
#include "Game/Class_1091B3F0.h"
#include "Game/Struct_1091A610.h"
#include "Game/Struct_1091A610Header.h"
#include "Game/cString.h"
#include "Game/Class_1091A590.h"
#include "Game/Class_1091A8F0.h"
#include "Game/Class_1091AA10.h"

class Class_10941C40;

// FUNCTION: 0x1091A610 ?MeasureText@cTextRenderer@@QAEMPBUStruct_1091A610@@H@Z
float cTextRenderer::MeasureText(const Struct_1091A610* A, int B)
{
    int Length = !A->Unknown00 ? 0 : ((Struct_1091A610Header*)A->Unknown00 - 1)->Unknown00;
    const char* Text = A->Unknown00 ? A->Unknown00 : DAT_10e47660;
    return MeasureChars(Text, Length, B);
}

// FUNCTION: 0x1091A640 ?DrawText@cTextRenderer@@QAE_NPAVClass_10941C40@@PBUStruct_1091A610@@PAM2KMMK@Z
bool cTextRenderer::DrawText(Class_10941C40* A, const Struct_1091A610* Text, float* X, float* Y,
                                  unsigned long Color, float ScaleX, float ScaleY, unsigned long Flags)
{
    int Length = !Text->Unknown00 ? 0 : ((Struct_1091A610Header*)Text->Unknown00 - 1)->Unknown00;
    const char* Chars = Text->Unknown00 ? Text->Unknown00 : DAT_10e47660;
    return DrawChars(A, Chars, Length, X, Y, Color, ScaleX, ScaleY, Flags);
}
