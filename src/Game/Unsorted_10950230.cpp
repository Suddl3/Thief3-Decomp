// Game/Unsorted_10950230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10950230.h"
#include "Game/IDirect3DTexture8.h"

extern "C" __declspec(dllimport) int __stdcall _BinkWait(void* Bink);

extern "C" __declspec(dllimport) void __stdcall _BinkDoFrame(void* Bink);

extern "C" __declspec(dllimport) int __stdcall _BinkCopyToBuffer(void* Bink, void* Dest, int Pitch, unsigned int Height, unsigned int X, unsigned int Y, unsigned int Flags);

extern "C" __declspec(dllimport) void __stdcall _BinkNextFrame(void* Bink);

struct D3DLOCKED_RECT
{
    int Pitch;
    void* pBits;
};

class Class_10950230_Unknown00_Unknown00
{
public:
    char Unknown00[0x8];
    unsigned int Unknown08;
    unsigned int Unknown0C;
};

class Class_10950230_Unknown00
{
public:
    Class_10950230_Unknown00_Unknown00* Unknown00;
    IDirect3DTexture8* Unknown04;
    char Unknown08[0x4];
    unsigned int Unknown0C;
};

// FUNCTION: 0x10950230 ?DecodeFrame@Class_10950230@@QAE_NXZ
bool Class_10950230::DecodeFrame()
{
    if (Unknown00->Unknown04 && Unknown00->Unknown00 && !Unknown04)
    {
        if (_BinkWait(Unknown00->Unknown00) == 0)
        {
            _BinkDoFrame(Unknown00->Unknown00);
            D3DLOCKED_RECT Locked;
            if (Unknown00->Unknown04->LockRect(0, (Struct_10952740*)&Locked, 0, 0x2000) >= 0)
            {
                int Result = _BinkCopyToBuffer(Unknown00->Unknown00, Locked.pBits, Locked.Pitch, Unknown00->Unknown0C, 0, 0, 5);
                Unknown00->Unknown04->UnlockRect(0);
                if (!Unknown05 && Unknown00->Unknown00->Unknown0C == Unknown00->Unknown00->Unknown08)
                {
                    Unknown04 = true;
                    return Result == 0;
                }
                _BinkNextFrame(Unknown00->Unknown00);
                return Result == 0;
            }
        }
    }
    return false;
}
