// Game/Unsorted_10AA84E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10AB37D0.h"

void WriteInt(void* A, int B);

void WriteString(void* A, int* B);

class Class_10E6C290
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void WriteToStream(void* A, int, int);

    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    int* Unknown10;
    int Unknown14;
};

extern const char DAT_10e6c100[];

class Class_10E6C104
{
public:
    Class_10E6C104();
    ~Class_10E6C104();
    virtual void Virtual0();

    int Unknown04;
};

class Class_10E6D990 : public Class_10E6C104
{
public:
    Class_10E6D990();
    virtual void Virtual0();

    Class_109081E0 Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    Class_109081E0 Unknown1C;
    Class_10AB37D0 Unknown20;
};

// FUNCTION: 0x10AA84E0 ??0Class_10E6D990@@QAE@XZ
Class_10E6D990::Class_10E6D990()
    : Class_10E6C104(), Unknown08(DAT_10e6c100), Unknown0C(0), Unknown10(0), Unknown14(0), Unknown18(0),
      Unknown1C(DAT_10e6c100)
{
    Unknown20.FUN_10ab37d0();
}

// FUNCTION: 0x10AA90B0 ?WriteToStream@Class_10E6C290@@UAEXPAXHH@Z
void Class_10E6C290::WriteToStream(void* A, int, int)
{
    WriteInt(A, Unknown08);
    for (int i = 0; i < Unknown08; i++)
        WriteString(A, &Unknown10[i]);
    WriteInt(A, Unknown14);
}
