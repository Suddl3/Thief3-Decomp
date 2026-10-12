// Game/Class_10E9AF04.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e9af04[];

class MC_Follow
{
public:
    MC_Follow(int A, int B, int C, int D, int E, int F, int G, int H);

    void** Unknown00;
};

class Class_10E9AF04 : public MC_Follow
{
public:
    Class_10E9AF04* Init(int A, int B, int C, int D, int E, int F);
};

// FUNCTION: 0x10C382F0 ?Init@Class_10E9AF04@@QAEPAV1@HHHHHH@Z
Class_10E9AF04* Class_10E9AF04::Init(int A, int B, int C, int D, int E, int F)
{
    this->MC_Follow::MC_Follow(A, B, C, D, 0, 0, 0, E);
    Unknown00 = DAT_10e9af04;
    return this;
}
