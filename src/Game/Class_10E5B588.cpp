// Game/Class_10E5B588.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e5b588[];

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    void** Unknown00;
};

class Class_10E5B588 : public Class_10E67FD0
{
public:
    Class_10E5B588* Construct();

    char Unknown04[0x120];
    int Unknown124;
};

// FUNCTION: 0x109E4970 ?Construct@Class_10E5B588@@QAEPAV1@XZ
Class_10E5B588* Class_10E5B588::Construct()
{
    this->Class_10E67FD0::Class_10E67FD0();
    Unknown00 = DAT_10e5b588;
    Unknown124 = 0;
    return this;
}
