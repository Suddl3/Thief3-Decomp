// Game/Unsorted_1097D590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    virtual void Virtual0() = 0;
};

class Class_10E4B040 : public Class_10B7C000, public Class_10E5B578
{
public:
    ~Class_10E4B040();
};

class Class_1097D530
{
public:
    ~Class_1097D530()
    {
        if (Unknown0C)
            ::operator delete(Unknown0C);
        Unknown0C = 0;
        Unknown10 = 0;
        FUN_1097cc10();
    }

    void FUN_1097cc10();

    char Unknown00[0xC];
    void* Unknown0C;
    int Unknown10;
};

class Class_10E4EE90 : public Class_10E4B040
{
public:
    ~Class_10E4EE90();

    virtual void FUN_10adb3a0();
    virtual void Virtual0();

    char Unknown30[0xC8];
    Class_1097D530 UnknownF8;
};

// FUNCTION: 0x1097D750 ??1Class_10E4EE90@@QAE@XZ
Class_10E4EE90::~Class_10E4EE90()
{
    FUN_10ad5310();
}
