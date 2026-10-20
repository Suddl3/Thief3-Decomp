// Game/Unsorted_10961640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E70A50
{
public:
    virtual void FUN_10adb3a0();

    char Unknown04[0x28];
};

class Class_10B7C000 : public Class_10E70A50
{
public:
    ~Class_10B7C000();

    void FUN_10ad5310();
};

class Class_10E5B578
{
public:
    virtual void Virtual36();
};

class UGameEngine : public Class_10B7C000, public Class_10E5B578
{
public:
    ~UGameEngine();

    virtual void Virtual36();
};

class Class_10E4B040 : public UGameEngine
{
public:
    ~Class_10E4B040();
};

class Class_10961640 : public Class_10E4B040
{
public:
    ~Class_10961640();
};

// FUNCTION: 0x10961640 ??1Class_10961640@@QAE@XZ
Class_10961640::~Class_10961640()
{
    FUN_10ad5310();
}
