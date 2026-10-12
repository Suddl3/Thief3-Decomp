// Game/Class_10E66310.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E66310
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Matches(Class_10E66310* Other);

    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A2EE80 ?Matches@Class_10E66310@@UAEHPAV1@@Z
int Class_10E66310::Matches(Class_10E66310* Other)
{
    if (Unknown08 == Other->Unknown08 && (Unknown04 == 0 || Other->Unknown04 == 0 || Unknown04 == Other->Unknown04))
        return 1;
    return 0;
}
