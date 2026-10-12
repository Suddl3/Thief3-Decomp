// Game/MC_FollowAbsolute.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e9ae24[];

class MC_Follow
{
public:
    MC_Follow(int A, int B, int C, int D, int E, int F, int G, int H);

    void** Unknown00;
    char Unknown04[0x90];
};

class MC_FollowAbsolute : public MC_Follow
{
public:
    MC_FollowAbsolute* Initialize(int A, int B, int C, int D, int E, int F, int G, int H);

    int m_OffsetX;
    int m_OffsetY;
};

// FUNCTION: 0x10C37700 ?Initialize@MC_FollowAbsolute@@QAEPAV1@HHHHHHHH@Z
MC_FollowAbsolute* MC_FollowAbsolute::Initialize(int A, int B, int C, int D, int E, int F, int G, int H)
{
    this->MC_Follow::MC_Follow(A, B, C, D, 0, 0, G, H);
    m_OffsetX = E;
    Unknown00 = DAT_10e9ae24;
    m_OffsetY = F;
    return this;
}
