// Game/Unsorted_10B24DD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"

// Class_10AA9D90 from include/Game/Class_10AA9D90.h, without the fields it
// cannot have: this class's own fields start right after the vtable pointer.
class Class_10AA9D90
{
public:
    int FUN_10aa9d90();
};

// Class_10B255F0 from include/Game/Class_10B255F0.h, with the fields this
// function serializes laid out at their offsets.
class Class_10B255F0 : public Class_10AA9D90
{
public:
    virtual int Virtual0();

    Class_10B255F0();

    void FUN_10b24dd0(FArchive& Ar);
    void* FUN_10b24f70();
    int GetEntryValue();
    int GetSelectedValue();
    int FUN_10b25030();
    int GetEntryCount();
    int FUN_10dc1760();
    void FUN_10b25700(int p1);
    void FUN_10b25dc0(int p1);
    int GetItemCount();
    void FUN_10b261e0();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    bool Unknown1C;
    char Pad1D[0x3];
    float Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    union
    {
        int m_ItemIndex;
        int Unknown34;
    };
    int Unknown38;
    bool Unknown3C;
    char Pad3D[0x3];
    union
    {
        int m_UseListA;
        float Unknown40;
    };
    int Unknown44;
    int Unknown48;
    UObject* Unknown4C;
    bool Unknown50;
    bool Unknown51;
    bool Unknown52;
    char Pad53[0x1];
};

// FUNCTION: 0x10B24DD0 ?FUN_10b24dd0@Class_10B255F0@@QAEXAAVFArchive@@@Z
void Class_10B255F0::FUN_10b24dd0(FArchive& Ar)
{
    Ar.Serialize(&Unknown04, 4);
    Ar.Serialize(&Unknown08, 4);
    Ar.Serialize(&Unknown0C, 4);
    Ar.Serialize(&Unknown10, 4);
    Ar.Serialize(&Unknown14, 4);
    Ar.Serialize(&Unknown18, 4);
    Ar.Serialize(&Unknown1C, 1);
    Ar.Serialize(&Unknown20, 4);
    Ar.Serialize(&Unknown24, 4);
    Ar.Serialize(&Unknown28, 4);
    Ar.Serialize(&Unknown2C, 4);
    Ar.Serialize(&Unknown30, 4);
    Ar.Serialize(&Unknown34, 4);
    Ar.Serialize(&Unknown38, 4);
    Ar.Serialize(&Unknown3C, 1);
    Ar.Serialize(&Unknown40, 4);
    Ar.Serialize(&Unknown44, 4);
    Ar.Serialize(&Unknown48, 4);
    Ar.Virtual6(&Unknown4C);
    Ar.Serialize(&Unknown50, 1);
    Ar.Serialize(&Unknown51, 1);
    if (Ar.Unknown14 != 0)
        Unknown52 = true;
}
