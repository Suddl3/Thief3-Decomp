// Game/cLocomotionCommand_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C3D2C0_Unknown3C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual bool Virtual21();
};

class Class_109BBBA0;

// Game/cLocomotionCommand.h copied whole, with this method at slot 1, the results
// of slots 5, 6 and 25 the code reads, the two ints at 0x0C and 0x10 the header
// leaves as padding, and the object at 0x3C.
class cLocomotionCommand
{
public:
    virtual void Virtual0();
    virtual bool FUN_10c3d2c0(cLocomotionCommand* Other);
    virtual void Virtual2();
    virtual void FUN_10c3e010(int A);
    virtual void Virtual4();
    virtual int Virtual5();
    virtual int Virtual6();
    virtual void Virtual7();
    virtual void Start();
    virtual void Stop();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual bool FUN_10c3dfc0();
    virtual void FUN_10c3dfd0(int Value);
    virtual void Virtual27();
    virtual void FUN_10c3dff0(unsigned char Value);

    void FUN_10c3d600(int A);

    char Unknown04[0x8];
    int Unknown0C;
    int Unknown10;
    char Unknown14[0x4];
    bool m_Active;
    char Pad19[0x1b];
    int Unknown34;
    unsigned char Unknown38;
    unsigned char Unknown39;
    char Pad3A[0x2];
    Class_10C3D2C0_Unknown3C Unknown3C;
    char Pad40[0x8];
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    char Unknown54[0xC];
    int m_Handle;
    char Unknown64[0xC];
    Class_109BBBA0* Unknown70;
};

// FUNCTION: 0x10C3D2C0 ?FUN_10c3d2c0@cLocomotionCommand@@UAE_NPAV1@@Z
bool cLocomotionCommand::FUN_10c3d2c0(cLocomotionCommand* Other)
{
    if (Unknown3C.Virtual21() == 1)
        return false;
    if (Other->Virtual5() != Unknown0C)
        return false;
    if (Unknown10)
    {
        if (Other->Virtual6())
        {
            if (Other->Virtual6() != Unknown10)
                return false;
        }
    }
    if (Other->Unknown3C.Virtual21() == 1)
        return false;
    bool OtherValue = Other->FUN_10c3dfc0();
    return FUN_10c3dfc0() == OtherValue;
}
