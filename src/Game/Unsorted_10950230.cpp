// Game/Unsorted_10950230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10950230.h"

extern "C" __declspec(dllimport) int __stdcall _BinkWait(void* Bink);

extern "C" __declspec(dllimport) void __stdcall _BinkDoFrame(void* Bink);

extern "C" __declspec(dllimport) int __stdcall _BinkCopyToBuffer(void* Bink, void* Dest, int Pitch, unsigned int Height, unsigned int X, unsigned int Y, unsigned int Flags);

extern "C" __declspec(dllimport) void __stdcall _BinkNextFrame(void* Bink);

struct RECT;

struct D3DLOCKED_RECT
{
    int Pitch;
    void* pBits;
};

class IDirect3DTexture8
{
public:
    virtual long __stdcall Virtual0();
    virtual long __stdcall Virtual1();
    virtual long __stdcall Virtual2();
    virtual long __stdcall Virtual3();
    virtual long __stdcall Virtual4();
    virtual long __stdcall Virtual5();
    virtual long __stdcall Virtual6();
    virtual long __stdcall Virtual7();
    virtual long __stdcall Virtual8();
    virtual long __stdcall Virtual9();
    virtual long __stdcall Virtual10();
    virtual long __stdcall Virtual11();
    virtual long __stdcall Virtual12();
    virtual long __stdcall Virtual13();
    virtual long __stdcall Virtual14();
    virtual long __stdcall Virtual15();
    virtual long __stdcall LockRect(unsigned int Level, D3DLOCKED_RECT* pLockedRect, const RECT* pRect, unsigned long Flags);
    virtual long __stdcall UnlockRect(unsigned int Level);
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
            if (Unknown00->Unknown04->LockRect(0, &Locked, 0, 0x2000) >= 0)
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
