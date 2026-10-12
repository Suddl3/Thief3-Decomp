// Game/cConGoalCompleteEvent_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern const char DAT_10e6c100[];

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();

    cString& FUN_1090a590(const char* In);

    char* Unknown00;
};

class Class_10A810F0
{
public:
    Class_10A810F0() { Unknown00.FUN_1090a590(DAT_10e6c100); }

    cString Unknown00;
};

class cConEvent : public Class_10A810F0
{
public:
    cConEvent();

    virtual ~cConEvent();
};

class Class_10AB37D0
{
public:
    Class_10AB37D0();
    ~Class_10AB37D0();
};

class cConGoalCompleteEvent : public cConEvent
{
public:
    cConGoalCompleteEvent();

    int Unknown08;
    cString Unknown0C;
    Class_10AB37D0 Unknown10;
};

// FUNCTION: 0x10AAB0D0 ??0cConGoalCompleteEvent@@QAE@XZ
cConGoalCompleteEvent::cConGoalCompleteEvent()
{
    Unknown08 = 0;
    Unknown0C.FUN_1090a590(DAT_10e6c100);
}
