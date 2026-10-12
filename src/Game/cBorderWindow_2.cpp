// Game/cBorderWindow_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0x114];
};

class cBorderWindow : public Class_10E67FD0
{
public:
    cBorderWindow();

    virtual ~cBorderWindow();

    int Unknown118;
    bool Unknown11C;
    int Unknown120;
    char Unknown124[0xC];
    int Unknown130;
    int Unknown134;
    int Unknown138;
    int Unknown13C;
    FArray Unknown140;
    int Unknown14C;
};

// FUNCTION: 0x10A66270 ??_GcBorderWindow@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A66580's definition in this unit.

// FUNCTION: 0x10A66580 ??0cBorderWindow@@QAE@XZ
cBorderWindow::cBorderWindow()
    : Unknown118(0), Unknown11C(false), Unknown120(0), Unknown130(0), Unknown134(0), Unknown138(0),
      Unknown13C(0), Unknown14C(0)
{
}
