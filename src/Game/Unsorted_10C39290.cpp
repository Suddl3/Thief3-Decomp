// Game/Unsorted_10C39290.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C39290 {
public:
    char Unknown00[0x94];
    int Unknown94;
    char Unknown98[0x18];
    int UnknownB0;

    bool FUN_10c39290();
};

// FUNCTION: 0x10C39290 ?FUN_10c39290@Class_10C39290@@QAE_NXZ
bool Class_10C39290::FUN_10c39290()
{
    if (Unknown94 < 1)
        return true;
    bool ok = UnknownB0 >= Unknown94;
    return ok;
}
