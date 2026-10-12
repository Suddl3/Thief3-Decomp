// Game/Class_10E82688_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E67FD0
{
public:
    Class_10E67FD0();
    virtual ~Class_10E67FD0();
};

class Class_10A64CD0
{
public:
    Class_10A64CD0* Reset();
};

class Class_10E82688 : public Class_10E67FD0
{
public:
    Class_10E82688();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x2C];
    int Unknown118;
    int Unknown11C;
    int m_FrameTime;
    int m_Elapsed;
    int m_FrameCount;
    int m_Frame;
    int Unknown130;
    Class_10A64CD0 Unknown134;
    char Unknown135[0x23];
    int Unknown158;
    char Unknown15C;
    char Unknown15D;
    char Unknown15E;
};

// FUNCTION: 0x10B5A470 ??0Class_10E82688@@QAE@XZ
Class_10E82688::Class_10E82688()
{
    Unknown118 = 0;
    Unknown11C = 0;
    m_Elapsed = 0;
    m_FrameCount = 0;
    m_Frame = 0;
    Unknown134.Reset();
    Unknown158 = 0;
    Unknown15C = 0;
    Unknown15D = 0;
    Unknown15E = 0;
    Unknown0E8 = 0x16;
}
