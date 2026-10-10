// Game/Unsorted_10951540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Class_109516C0_Entry
{
    int Unknown00;
};

class Class_109516C0
{
public:
    Class_109516C0_Entry* FUN_109516c0(int Index);

    char Unknown00[0x40];
    int Unknown40;
    int Unknown44;
    Class_109516C0_Entry** Unknown48;
    Class_109516C0_Entry Unknown4C;
};

struct Struct_10951A40
{
    char Unknown00[0x40];
};

class Class_10951A40
{
public:
    void FUN_10951a40(const Struct_10951A40* In);
    void FUN_109516e0();

    char Unknown00[0x4C];
    Struct_10951A40 Unknown4C;
};

class Class_109514C0
{
public:
    virtual ~Class_109514C0();
    void FUN_109514c0();
};

class Class_10953590;

class Class_10939570
{
public:
    void FUN_1093bce0(Class_10953590* Param);
};

extern Class_10939570* DAT_10f323fc;

class Class_10951900
{
public:
    void FUN_10951660();

    char Unknown00[4];
    int Unknown04;
    char Unknown08[0x10];
    int Unknown18;
    char Unknown1C[4];
    Class_10953590* Unknown20;
    Class_109514C0* Unknown24;
    int Unknown28;
};

// FUNCTION: 0x10951660 ?FUN_10951660@Class_10951900@@QAEXXZ
void Class_10951900::FUN_10951660()
{
    if (Unknown28 == 1 && Unknown18 == 0x3f800000)
        Unknown04 &= ~0x400;
    Unknown28 = 0;
    if (Unknown24)
    {
        Unknown24->FUN_109514c0();
        delete Unknown24;
        Unknown24 = 0;
    }
    if (Unknown20)
    {
        DAT_10f323fc->FUN_1093bce0(Unknown20);
        Unknown20 = 0;
    }
}

// FUNCTION: 0x109516C0 ?FUN_109516c0@Class_109516C0@@QAEPAUClass_109516C0_Entry@@H@Z
Class_109516C0_Entry* Class_109516C0::FUN_109516c0(int Index)
{
    if (Unknown40 > Index)
    {
        Class_109516C0_Entry* Entry = Unknown48[Index];
        if (Entry)
            return Entry;
    }
    return &Unknown4C;
}

// FUNCTION: 0x10951A40 ?FUN_10951a40@Class_10951A40@@QAEXPBUStruct_10951A40@@@Z
void Class_10951A40::FUN_10951a40(const Struct_10951A40* In)
{
    Unknown4C = *In;
    FUN_109516e0();
}
