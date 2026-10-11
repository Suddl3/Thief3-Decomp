// Game/Unsorted_10B6E0F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10ABED70
{
public:
    void FUN_10abe520(int p1, int p2);
    void FUN_10abed70();
    void FUN_10abed20(int A, bool B);

    char Unknown00[8];
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10B6E0F0_14C
{
public:
    void FUN_10ab8050(bool A);

    char Unknown00[4];
    int Unknown04;
};

class Class_10F3A3D8
{
public:
    char Unknown000[0x14C];
    Class_10B6E0F0_14C* Unknown14C;
    Class_10ABED70* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10B6E0F0
{
public:
    void FUN_10b6e0f0();

    char Unknown000[0x2F4];
    bool Unknown2F4;
    char Unknown2F5[7];
    int Unknown2FC;
};

// FUNCTION: 0x10B6E0F0 ?FUN_10b6e0f0@Class_10B6E0F0@@QAEXXZ
void Class_10B6E0F0::FUN_10b6e0f0()
{
    int Obj;
    switch (Unknown2FC)
    {
    case 0:
        Obj = DAT_10f3a3d8->Unknown150->Unknown08;
        break;
    case 1:
        Obj = DAT_10f3a3d8->Unknown150->Unknown10;
        break;
    default:
        return;
    }
    if (Obj == 0)
        return;
    int Value;
    switch (Unknown2FC)
    {
    case 0:
        Value = DAT_10f3a3d8->Unknown150->Unknown08;
        break;
    case 1:
        Value = DAT_10f3a3d8->Unknown150->Unknown10;
        break;
    default:
        Value = 0;
        break;
    }
    DAT_10f3a3d8->Unknown14C->Unknown04 = Value;
    DAT_10f3a3d8->Unknown14C->FUN_10ab8050(Unknown2F4);
    switch (Unknown2FC)
    {
    case 0:
        DAT_10f3a3d8->Unknown150->FUN_10abed20(1, Unknown2F4);
        break;
    case 1:
        DAT_10f3a3d8->Unknown150->FUN_10abed70();
        break;
    }
}
