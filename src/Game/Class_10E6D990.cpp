// Game/Class_10E6D990.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10AA83E0.h"
#include "Game/Class_10AA8400.h"
#include "Game/Class_10AB3800.h"
#include "Game/cTaggedAnimSeq.h"
#include "Game/Class_10AB37C0.h"

void WriteString(void* Stream, int* Value);

void WriteInt(void* Stream, int Value);

class Class_10E6D990
{
public:
    void WriteFields(void* Stream, int, int);

    char Unknown00[0x8];
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    Class_10AB3800 Unknown20;
};

// FUNCTION: 0x10AA8310 ?WriteFields@Class_10E6D990@@QAEXPAXHH@Z
void Class_10E6D990::WriteFields(void* Stream, int, int)
{
    WriteString(Stream, (int*)&Unknown20.FUN_10ab3800());
    WriteString(Stream, &Unknown08);
    WriteInt(Stream, Unknown0C);
    WriteInt(Stream, Unknown10);
    WriteInt(Stream, Unknown14);
    WriteInt(Stream, Unknown18);
    WriteString(Stream, &Unknown1C);
    WriteString(Stream, (int*)((Class_10AB37C0*)&Unknown20)->GetName());
}

// FUNCTION: 0x10AA83E0 ?GetName@Class_10AA83E0@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10AA83E0::GetName()
{
    return Unknown20.FUN_10ab3800();
}

// FUNCTION: 0x10AA8400 ?GetName@Class_10AA8400@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10AA8400::GetName()
{
    return m_TaggedAnimSeq.cTaggedAnimSeq::GetName();
}
