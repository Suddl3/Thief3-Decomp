// Game/Class_10E895D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Game/Class_10E89384: the base class; its empty inline destructor stores the base vtable.
class Class_10E89384
{
public:
    virtual ~Class_10E89384() {}
};

class Struct_10B8B790_Field38 {};

class Class_10CADAF0
{
public:
    void FUN_10cadaf0(Struct_10B8B790_Field38* A);
};

class Class_10B8B790_Field08
{
public:
    char Unknown00[0x10];
    Class_10CADAF0* Unknown10;
};

class Class_10B8B790_Field10
{
public:
    ~Class_10B8B790_Field10();
};

class Class_10E895D0 : public Class_10E89384
{
public:
    virtual ~Class_10E895D0();

    int Unknown04;
    Class_10B8B790_Field08* Unknown08;
    int Unknown0C;
    Class_10B8B790_Field10* Unknown10;
    char Unknown14[0x24];
    Struct_10B8B790_Field38* Unknown38;
};

// FUNCTION: 0x10B8B790 ??1Class_10E895D0@@UAE@XZ
Class_10E895D0::~Class_10E895D0()
{
    if (Unknown10)
    {
        delete Unknown10;
        Unknown10 = 0;
    }
    if (Unknown38)
    {
        if (Unknown08)
            Unknown08->Unknown10->FUN_10cadaf0(Unknown38);
        delete Unknown38;
        Unknown38 = 0;
    }
}

// FUNCTION: 0x10B8BF60 ??_GClass_10E895D0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B8B790's definition in this unit.
