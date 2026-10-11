// Game/Class_10E6DA1C_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern const char DAT_10e6c100[];

class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();

    Class_109081E0& FUN_1090a590(const char* In);

    char* Unknown00;
};

class Class_10A810F0
{
public:
    Class_10A810F0() { Unknown00.FUN_1090a590(DAT_10e6c100); }

    Class_109081E0 Unknown00;
};

class Class_10E6C104 : public Class_10A810F0
{
public:
    Class_10E6C104();

    virtual ~Class_10E6C104();
};

class Class_10AB37D0
{
public:
    Class_10AB37D0();
    ~Class_10AB37D0();
};

class Class_10E6DA1C : public Class_10E6C104
{
public:
    Class_10E6DA1C();

    int Unknown08;
    Class_109081E0 Unknown0C;
    Class_10AB37D0 Unknown10;
};

// FUNCTION: 0x10AAB0D0 ??0Class_10E6DA1C@@QAE@XZ
Class_10E6DA1C::Class_10E6DA1C()
{
    Unknown08 = 0;
    Unknown0C.FUN_1090a590(DAT_10e6c100);
}
