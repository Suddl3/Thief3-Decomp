// Game/Unsorted_10BAEB60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090A780.h"
#include "Game/Class_10BAFBF0.h"
#include "Game/Class_10E8DBA4.h"
#include "Game/Struct_10BAFBF0.h"
#include "Game/cString.h"

extern const char DAT_10e8d954[];

extern const char DAT_10e8d95c[];

// FUNCTION: 0x10BAEB60 ?GetTextName@@YA?AVcString@@XZ
cString GetTextName()
{
    return cString(DAT_10e8d954);
}

// FUNCTION: 0x10BAEB80 ?GetVertexName@@YA?AVcString@@XZ
cString GetVertexName()
{
    return cString(DAT_10e8d95c);
}

// FUNCTION: 0x10BAFBF0 ??0Class_10E8DBA4@@QAE@ABUStruct_10BAFBF0@@ABHABVClass_1090A780@@@Z
Class_10E8DBA4::Class_10E8DBA4(const Struct_10BAFBF0& A, const int& B, const Class_1090A780& C)
    : Unknown08(A), Unknown14(B), m_Name(C)
{
}
