// Game/cCheatHandler.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// FUNCTION: 0x10B40A00 ?Construct@cCheatHandler@@QAEPAV1@XZ
cCheatHandler* cCheatHandler::Construct()
{
    this->Class_10E81A60::Class_10E81A60();
    Unknown00 = DAT_10e80418;
    return this;
}
