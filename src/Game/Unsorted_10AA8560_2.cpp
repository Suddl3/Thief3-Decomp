// Game/Unsorted_10AA8560_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10AB37F0.h"
#include "Game/Class_10AB3C20.h"

Class_10905A90_Member* GetAllocator();

void ReadInt(void* Reader, int* Out);

void ReadString(void* Reader, int* Out);

extern const char DAT_10e47660[];

class Class_10E6D990
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10aa8740(void* Reader, int Version, int Unused);

    char Unknown04[4];
    cString Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    cString Unknown1C;
    Class_10AB37F0 Unknown20;
};

// FUNCTION: 0x10AA8740 ?FUN_10aa8740@Class_10E6D990@@UAEXPAXHH@Z
void Class_10E6D990::FUN_10aa8740(void* Reader, int Version, int Unused)
{
    cString TextA;
    cString TextB;

    ReadString(Reader, (int*)&TextA);
    ReadString(Reader, (int*)&Unknown08);

    if (Version > 0x11)
    {
        int Value10;
        ReadInt(Reader, &Unknown0C);
        ReadInt(Reader, &Value10);
        Unknown10 = Value10;
    }

    if (Version > 0x13)
    {
        int Value14;
        ReadInt(Reader, &Value14);
        Unknown14 = Value14;
        ReadInt(Reader, &Unknown18);
        ReadString(Reader, (int*)&Unknown1C);
    }
    else
    {
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = cString(DAT_10e47660);
    }

    if (Version > 0x1a)
    {
        ReadString(Reader, (int*)&TextB);
    }

    Unknown20.FUN_10ab37f0(TextA);
    ((Class_10AB3C20*)&Unknown20)->SetValue(TextB);
}
