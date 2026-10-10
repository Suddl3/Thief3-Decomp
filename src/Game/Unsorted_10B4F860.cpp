// Game/Unsorted_10B4F860.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10B53A00
{
    char Unknown00[0x450];
    int Unknown450;
};

class Class_10AC92F0
{
public:
    void FUN_10ac92f0();
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x13C];
    Class_10AC92F0* Unknown13C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

extern float DAT_10f05068;

void FUN_10abc090(float p1);

class Class_10E81668
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10b4fa70(Struct_10B53A00* A);

    void FUN_10b3b260(Struct_10B53A00* P);

    char Unknown04[0xC];
    int Unknown10;
};

// FUNCTION: 0x10B4FA70 ?FUN_10b4fa70@Class_10E81668@@UAEXPAUStruct_10B53A00@@@Z
void Class_10E81668::FUN_10b4fa70(Struct_10B53A00* A)
{
    int Flags = A->Unknown450;
    if ((Flags & 2) && Unknown10 == 0 && !(Flags & 1))
        FUN_10b3b260(A);
    DAT_10f3a3d8->Unknown13C->FUN_10ac92f0();
    FUN_10abc090(DAT_10f05068);
}
