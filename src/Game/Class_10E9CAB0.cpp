// Game/Unsorted_10C61E70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& FUN_1090a590(const char* In);

    char* Unknown00;
};

class Class_10E9CAB0
{
public:
    Class_10E9CAB0(int Arg, const char* In);

    virtual ~Class_10E9CAB0();

    int Unknown04;
    Class_109081E0 Unknown08;
    Class_109081E0 Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10C62220 ??0Class_10E9CAB0@@QAE@HPBD@Z
Class_10E9CAB0::Class_10E9CAB0(int Arg, const char* In)
{
    Unknown04 = Arg;
    Unknown08.FUN_1090a590(In);
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
}
