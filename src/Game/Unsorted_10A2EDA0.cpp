// Game/Unsorted_10A2EDA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E507E0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a2eda0(Class_10E507E0* Other);

    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A2EDA0 ?FUN_10a2eda0@Class_10E507E0@@UAEHPAV1@@Z
int Class_10E507E0::FUN_10a2eda0(Class_10E507E0* Other)
{
    if ((Unknown04 == 0 || Other->Unknown04 == 0 || Unknown04 == Other->Unknown04)
        && ((Unknown0C == 0 && Other->Unknown0C == 0 && (Unknown08 == 0 || Other->Unknown08 == 0))
            || Unknown08 == Other->Unknown08))
        return 1;
    return 0;
}
