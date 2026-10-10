// Game/Unsorted_10B92C50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10990D10
{
public:
    void FUN_10991fc0(int A);
};

class Class_10DA0420
{
public:
    virtual void Virtual0();

    ~Class_10DA0420();
};

class Class_10E89AA0 : public Class_10DA0420
{
public:
    ~Class_10E89AA0();

    Class_10990D10* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10B92C50 ??1Class_10E89AA0@@QAE@XZ
Class_10E89AA0::~Class_10E89AA0()
{
    if (Unknown04 && Unknown08 != 3)
        Unknown04->FUN_10991fc0(0);
}
