// Game/Unsorted_10B3FDC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e7efa0[];

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    void** Unknown00;
};

class Class_10E7EFA0 : public Class_10E67FD0
{
public:
    Class_10E7EFA0* Construct();
};

extern void* DAT_10e7f158[];

class Class_10E7F158 : public Class_10E67FD0
{
public:
    Class_10E7F158* Construct();
};

// FUNCTION: 0x10B3FDC0 ?Construct@Class_10E7EFA0@@QAEPAV1@XZ
Class_10E7EFA0* Class_10E7EFA0::Construct()
{
    this->Class_10E67FD0::Class_10E67FD0();
    Unknown00 = DAT_10e7efa0;
    return this;
}

// FUNCTION: 0x10B3FDE0 ?Construct@Class_10E7F158@@QAEPAV1@XZ
Class_10E7F158* Class_10E7F158::Construct()
{
    this->Class_10E67FD0::Class_10E67FD0();
    Unknown00 = DAT_10e7f158;
    return this;
}
