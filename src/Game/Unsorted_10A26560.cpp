// Game/Unsorted_10A26560.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10A250D0.h"

extern const char DAT_10e47660[];

extern const char DAT_10e65d38[];

// cString: copy of include/Game/cString.h with FUN_1095b160, which returns a string by value.
class cString : public Class_1090A780
{
public:
    cString() {}
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    cString FUN_1095b160(char Sep);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

// Class_1090B040: copy of include/Game/Class_1090B040.h with FUN_10915c70 added.
class Class_1092AC20_Unknown30;

class Class_1090B040
{
public:
    cString FUN_1090b040(int A);
    cString FUN_10915c70(int Count);
    cString FUN_10950d60();

    cString Unknown00;
    char Pad04[0x14];
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    Class_1092AC20_Unknown30* Unknown30;
    char Pad34[0x8];
    unsigned char Unknown3C;
    char Pad3D[0x3];
};

extern Class_10A250D0 DAT_10f0006c;

extern "C" char* strstr(const char* S, const char* T);

extern "C" char* _strlwr(char* S);

void FUN_10a246e0(cString* S);

// FUNCTION: 0x10A27920 ?FUN_10a27920@@YAXPAVcString@@PAVClass_1090B040@@@Z
void FUN_10a27920(cString* Key, Class_1090B040* Def)
{
    if (!Def->Unknown00.Unknown00)
        return;

    char* Found = strstr(Def->Unknown00.Unknown00, DAT_10e65d38);
    if (!Found)
        return;

    int Offset = (int)(Found - Def->Unknown00.Unknown00);
    if (Offset == -1)
        return;

    cString Head = Def->FUN_1090b040(Offset);

    int Length = !Def->Unknown00.Unknown00 ? 0 : ((int*)Def->Unknown00.Unknown00)[-1];
    Def->Unknown00.operator=(Def->FUN_10915c70(Length - Offset));

    Key->operator=(Key->FUN_1095b160('>'));

    FUN_10a246e0(&Head);

    if (Key->Unknown00)
        _strlwr(Key->Unknown00);

    DAT_10f0006c.Set(*Key, Head);
}
