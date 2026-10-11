// Game/Class_10E6A9F8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6A9F8
{
public:
    void MarkDirty();
    void FUN_10a56ae0(int p1);

    char Unknown00[0x180];
    int Unknown180;
};

// FUNCTION: 0x10A56AE0 ?FUN_10a56ae0@Class_10E6A9F8@@QAEXH@Z
void Class_10E6A9F8::FUN_10a56ae0(int p1)
{
    if (Unknown180 != p1)
    {
        Unknown180 = p1;
        MarkDirty();
    }
}
