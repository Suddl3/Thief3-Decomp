// Game/Class_10E4AE8C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E4AE8C
{
public:
    int IsBitSet(int Bit);

    char Unknown00[0x298];
    unsigned m_Flags;
};

// FUNCTION: 0x10957000 ?IsBitSet@Class_10E4AE8C@@QAEHH@Z
int Class_10E4AE8C::IsBitSet(int Bit)
{
    return (m_Flags & (1 << Bit)) != 0;
}
