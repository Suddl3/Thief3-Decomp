// Game/Class_10E89A8C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e89a8c[];

class Class_10E89A8C
{
public:
    Class_10E89A8C* Init(int p1);

    void* Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10B92BF0 ?Init@Class_10E89A8C@@QAEPAV1@H@Z
Class_10E89A8C* Class_10E89A8C::Init(int p1)
{
    Unknown00 = DAT_10e89a8c;
    Unknown04 = p1;
    return this;
}
