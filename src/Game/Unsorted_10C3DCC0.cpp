// Game/Unsorted_10C3DCC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109BBBA0
{
public:
    void FUN_109bbba0(int A);
};

class Class_10E9B168;

class Class_10E9AFD0
{
public:
    virtual ~Class_10E9AFD0() {}
    virtual bool FUN_10c3d590(Class_10E9B168* A) = 0;
    char Unknown04[0x14];
    bool Unknown18;
    char Unknown19[0x17];
};

class Class_10E9B088
{
public:
    virtual ~Class_10E9B088();
    char Unknown04[0x20];
};

class Class_10E9B168 : public Class_10E9AFD0, public Class_10E9B088
{
public:
    virtual ~Class_10E9B168();
    virtual bool FUN_10c3d590(Class_10E9B168* A);
    int Unknown54;
    char Unknown58[0xc];
    Class_109BBBA0* Unknown64;
};

// FUNCTION: 0x10C3DCC0 ??1Class_10E9B168@@UAE@XZ
Class_10E9B168::~Class_10E9B168()
{
    if (Unknown54 >= 0)
    {
        Unknown64->FUN_109bbba0(Unknown54);
        Unknown54 = -1;
    }
    Unknown18 = false;
}

// FUNCTION: 0x10C3E230 ??_GClass_10E9B168@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C3DCC0's definition in this unit.
