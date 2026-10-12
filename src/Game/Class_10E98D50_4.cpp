// Game/Class_10E98D50_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C1AF00
{
    char Unknown00[0x2C];
    int Unknown2C;
    int Unknown30;
    char Unknown34[0x28];
    float Unknown5C;
};

class Class_10E98D50
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int IsEquivalent(Class_10E98D50* Other);

    char Unknown04[0x44];
    Struct_10C1AF00* m_Info;
};

// FUNCTION: 0x10C1AF00 ?IsEquivalent@Class_10E98D50@@UAEHPAV1@@Z
int Class_10E98D50::IsEquivalent(Class_10E98D50* Other)
{
    if (m_Info->Unknown2C == Other->m_Info->Unknown2C && m_Info->Unknown30 == Other->m_Info->Unknown30 &&
        m_Info->Unknown5C == Other->m_Info->Unknown5C)
        return 1;
    return 0;
}
