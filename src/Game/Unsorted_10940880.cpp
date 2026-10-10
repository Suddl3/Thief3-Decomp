// Game/Unsorted_10940880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();

    char* Unknown00;
};

class Class_10E4A538
{
public:
    virtual void FUN_109412f0();

    ~Class_10E4A538();

    void FUN_10940c50();

    int Unknown04;
    Class_109081E0 Unknown08[47];
    char UnknownC4[0xBC];
    Class_109081E0 Unknown180[47];
};

// FUNCTION: 0x10941030 ??1Class_10E4A538@@QAE@XZ
Class_10E4A538::~Class_10E4A538()
{
    FUN_10940c50();
}
