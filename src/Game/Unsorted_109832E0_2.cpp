// Game/Unsorted_109832E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E70A50
{
public:
    Class_10E70A50();

    void** Unknown00;
    char Unknown04[0x28];
};

extern void* DAT_10e53a48[];

class AZoneProperties : public Class_10E70A50
{
public:
    AZoneProperties* Construct();

    char Unknown2C[0x84];
    int UnknownB0;
    int UnknownB4;
    int UnknownB8;
};

// FUNCTION: 0x1098DD00 ?Construct@AZoneProperties@@QAEPAV1@XZ
AZoneProperties* AZoneProperties::Construct()
{
    this->Class_10E70A50::Class_10E70A50();
    UnknownB0 = 0;
    UnknownB4 = 0;
    UnknownB8 = 0;
    Unknown00 = DAT_10e53a48;
    return this;
}
