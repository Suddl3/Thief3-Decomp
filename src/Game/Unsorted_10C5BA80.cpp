// Game/Unsorted_10C5BA80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109081E0
{
public:
    Class_109081E0(const Class_109081E0& Other);
    ~Class_109081E0();

    char* Unknown00;
};

struct Struct_10C5BA20
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10C5BA80
{
public:
    Class_10C5BA80(const Class_10C5BA80& Other);

    Class_109081E0 Unknown00;
    Class_109081E0 Unknown04;
    bool Unknown08;
    Struct_10C5BA20 Unknown0C;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10C5BA80 ??0Class_10C5BA80@@QAE@ABV0@@Z
Class_10C5BA80::Class_10C5BA80(const Class_10C5BA80& Other)
    : Unknown00(Other.Unknown00), Unknown04(Other.Unknown04), Unknown08(Other.Unknown08),
      Unknown0C(Other.Unknown0C), Unknown18(Other.Unknown18), Unknown1C(Other.Unknown1C),
      Unknown20(Other.Unknown20), Unknown24(Other.Unknown24)
{
}
