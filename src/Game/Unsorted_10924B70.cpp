// Game/Unsorted_10924B70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void** DAT_10f3199c;

class Class_1094D9A0
{
public:
    ~Class_1094D9A0();

    char Unknown00[0x20];
};

class Class_1094D700
{
public:
    ~Class_1094D700();

    char Unknown00[0x18];
};

class Class_10924B70_Base
{
public:
    ~Class_10924B70_Base()
    {
        DAT_10f3199c = 0;
    }

    char Unknown00[0x30];
};

class Class_10924B70 : public Class_10924B70_Base
{
public:
    ~Class_10924B70();

    void FUN_10924a90();

    Class_1094D700 Unknown30;
    Class_1094D9A0 Unknown48[3];
};

// FUNCTION: 0x10924B70 ??1Class_10924B70@@QAE@XZ
Class_10924B70::~Class_10924B70()
{
    FUN_10924a90();
}
