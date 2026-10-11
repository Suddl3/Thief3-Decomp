// Game/Class_10E6A9F8_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6A9F8 {
public:
    char Unknown00[0x150];
    unsigned char m_Dirty;
    unsigned char Unknown151;
    void MarkDirty();
};

// FUNCTION: 0x10A64D70 ?MarkDirty@Class_10E6A9F8@@QAEXXZ
void Class_10E6A9F8::MarkDirty()
{
    m_Dirty = 1;
    Unknown151 = 0;
}
