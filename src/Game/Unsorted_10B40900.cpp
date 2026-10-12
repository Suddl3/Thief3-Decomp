// Game/Unsorted_10B40900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e80418[];

class Class_10E81A60
{
public:
    Class_10E81A60();

    void** Unknown00;
};

class cCheatHandler : public Class_10E81A60
{
public:
    cCheatHandler* Construct();
};

extern void* DAT_10e805d8[];

class Class_10E805D8 : public Class_10E81A60
{
public:
    Class_10E805D8* Construct();
};

// FUNCTION: 0x10B40A00 ?Construct@cCheatHandler@@QAEPAV1@XZ
cCheatHandler* cCheatHandler::Construct()
{
    this->Class_10E81A60::Class_10E81A60();
    Unknown00 = DAT_10e80418;
    return this;
}

// FUNCTION: 0x10B40A20 ?Construct@Class_10E805D8@@QAEPAV1@XZ
Class_10E805D8* Class_10E805D8::Construct()
{
    this->Class_10E81A60::Class_10E81A60();
    Unknown00 = DAT_10e805d8;
    return this;
}
