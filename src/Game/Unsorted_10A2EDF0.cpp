// Game/Unsorted_10A2EDF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6BB18
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a2edf0(Class_10E6BB18* Other);

    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A2EDF0 ?FUN_10a2edf0@Class_10E6BB18@@UAEHPAV1@@Z
int Class_10E6BB18::FUN_10a2edf0(Class_10E6BB18* Other)
{
    int Mine = Unknown08;
    int Theirs = Other->Unknown08;
    bool Ok = (Mine == Theirs || Mine == 0 || Theirs == 0) &&
              (Unknown04 == 0 || Other->Unknown04 == 0 || Unknown04 == Other->Unknown04);
    if (Ok)
        return 1;
    return 0;
}
