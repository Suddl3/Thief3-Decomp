// Game/Class_10E9AE24.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e9ae24[];

class Class_10E9ADE8
{
public:
    Class_10E9ADE8(int A, int B, int C, int D, int E, int F, int G, int H);

    void** Unknown00;
    char Unknown04[0x90];
};

class Class_10E9AE24 : public Class_10E9ADE8
{
public:
    Class_10E9AE24* Initialize(int A, int B, int C, int D, int E, int F, int G, int H);

    int m_OffsetX;
    int m_OffsetY;
};

// FUNCTION: 0x10C37700 ?Initialize@Class_10E9AE24@@QAEPAV1@HHHHHHHH@Z
Class_10E9AE24* Class_10E9AE24::Initialize(int A, int B, int C, int D, int E, int F, int G, int H)
{
    this->Class_10E9ADE8::Class_10E9ADE8(A, B, C, D, 0, 0, G, H);
    m_OffsetX = E;
    Unknown00 = DAT_10e9ae24;
    m_OffsetY = F;
    return this;
}
