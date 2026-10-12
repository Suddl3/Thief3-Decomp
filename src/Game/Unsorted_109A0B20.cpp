// Game/Unsorted_109A0B20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e57440[];

class Class_10E70A50
{
public:
    Class_10E70A50();

    void** Unknown00;
    char Unknown04[0x28];
};

class Class_10E55E78 : public Class_10E70A50
{
public:
    Class_10E55E78();
};

class Class_10E57440 : public Class_10E55E78
{
public:
    Class_10E57440* Construct();
};

extern void* DAT_10e574c8[];

class Class_10E574C8 : public Class_10E55E78
{
public:
    Class_10E574C8* Construct();
};

extern void* DAT_10e57550[];

class Class_10E57550 : public Class_10E55E78
{
public:
    Class_10E57550* Construct();
};

extern void* DAT_10e575d8[];

class Class_10E575D8 : public Class_10E55E78
{
public:
    Class_10E575D8* Construct();
};

// FUNCTION: 0x109A0B90 ?Construct@Class_10E57440@@QAEPAV1@XZ
Class_10E57440* Class_10E57440::Construct()
{
    this->Class_10E55E78::Class_10E55E78();
    Unknown00 = DAT_10e57440;
    return this;
}

// FUNCTION: 0x109A0C20 ?Construct@Class_10E574C8@@QAEPAV1@XZ
Class_10E574C8* Class_10E574C8::Construct()
{
    this->Class_10E55E78::Class_10E55E78();
    Unknown00 = DAT_10e574c8;
    return this;
}

// FUNCTION: 0x109A0CB0 ?Construct@Class_10E57550@@QAEPAV1@XZ
Class_10E57550* Class_10E57550::Construct()
{
    this->Class_10E55E78::Class_10E55E78();
    Unknown00 = DAT_10e57550;
    return this;
}

// FUNCTION: 0x109A0D40 ?Construct@Class_10E575D8@@QAEPAV1@XZ
Class_10E575D8* Class_10E575D8::Construct()
{
    this->Class_10E55E78::Class_10E55E78();
    Unknown00 = DAT_10e575d8;
    return this;
}
