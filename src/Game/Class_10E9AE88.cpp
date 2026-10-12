// Game/MC_StayNear.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e9ae88[];

class MC_Follow
{
public:
    MC_Follow(int A, int B, int C, int D, int E, int F, int G, int H);

    void** Unknown00;
};

class MC_StayNear : public MC_Follow
{
public:
    MC_StayNear* Construct(int A, int B, int C, int D, int E, int F, int G);
};

// FUNCTION: 0x10C37E90 ?Construct@MC_StayNear@@QAEPAV1@HHHHHHH@Z
MC_StayNear* MC_StayNear::Construct(int A, int B, int C, int D, int E, int F, int G)
{
    this->MC_Follow::MC_Follow(A, B, C, D, 0, E, F, G);
    Unknown00 = DAT_10e9ae88;
    return this;
}
