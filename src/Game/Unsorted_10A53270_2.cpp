// Game/Unsorted_10A53270_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e67fd0[];

struct Struct_10964040
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;

    Struct_10964040() {}

    Struct_10964040(float A, float B, float C, float D)
    {
        Unknown00 = A;
        Unknown04 = B;
        Unknown08 = C;
        Unknown0C = D;
    }
};

// Three ints: the object's fields come in twelves.
struct Struct_10A53270
{
    int Unknown00;
    int Unknown04;
    int Unknown08;

    Struct_10A53270()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
    }
};

class Class_10964040
{
public:
    Class_10964040(const Struct_10964040& A, const Struct_10964040& B, const Struct_10964040& C, const Struct_10964040& D);

    Struct_10964040 Unknown00;
    Struct_10964040 Unknown10;
    Struct_10964040 Unknown20;
    Struct_10964040 Unknown30;
};

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    void** Unknown00;
    Struct_10A53270 Unknown04;
    Struct_10A53270 Unknown10;
    Struct_10A53270 Unknown1C;
    Struct_10A53270 Unknown28;
    Struct_10A53270 Unknown34;
    Struct_10A53270 Unknown40;
    Struct_10A53270 Unknown4C;
    Class_10964040 Unknown58;
    float Unknown98;
    float Unknown9C;
    float UnknownA0;
    float UnknownA4;
    float UnknownA8;
    float UnknownAC;
    char UnknownB0[4];
    int UnknownB4;
    int Count;
    int UnknownBC;
    Class_10E67FD0** Items;
    int UnknownC4;
    int UnknownC8;
    bool UnknownCC;
    bool UnknownCD;
    bool UnknownCE;
    int UnknownD0;
    int UnknownD4;
    int UnknownD8;
    int UnknownDC;
    int UnknownE0;
    int UnknownE4;
    int UnknownE8;
    int UnknownEC;
    int UnknownF0;
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
    int Unknown10C;
    int Unknown110;
    int Unknown114;
};

// FUNCTION: 0x10A53270 ??0Class_10E67FD0@@QAE@XZ
Class_10E67FD0::Class_10E67FD0()
    : Unknown00(DAT_10e67fd0)
    , Unknown04()
    , Unknown10()
    , Unknown1C()
    , Unknown28()
    , Unknown34()
    , Unknown40()
    , Unknown4C()
    , Unknown58(Struct_10964040(1.0f, 0.0f, 0.0f, 0.0f),
                Struct_10964040(0.0f, 1.0f, 0.0f, 0.0f),
                Struct_10964040(0.0f, 0.0f, 1.0f, 0.0f),
                Struct_10964040(0.0f, 0.0f, 0.0f, 1.0f))
    , Unknown98(1.0f)
    , Unknown9C(1.0f)
    , UnknownA0(1.0f)
    , UnknownA4(1.0f)
    , UnknownA8(1.0f)
    , UnknownAC(1.0f)
    , UnknownB4(0)
    , Count(0)
    , UnknownBC(0)
    , Items(0)
    , UnknownC4(0)
    , UnknownC8(0)
    , UnknownCC(false)
    , UnknownCD(false)
    , UnknownCE(true)
    , UnknownD0(0)
    , UnknownD4(0)
    , UnknownD8(0)
    , UnknownDC(0)
    , UnknownE0(0)
    , UnknownE4(0)
    , UnknownE8(0)
    , UnknownEC(0)
    , UnknownF0(0)
    , UnknownF4(0)
    , UnknownF8(0)
    , UnknownFC(0)
    , Unknown100(0)
    , Unknown104(0)
    , Unknown108(0)
    , Unknown10C(0)
    , Unknown110(0)
    , Unknown114(0)
{
}
