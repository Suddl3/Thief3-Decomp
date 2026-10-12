// Game/cMemoryStream.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C64AA0.h"
#include "Game/Class_10E4E098.h"

extern void* DAT_10e9cd90[];

class cMemoryStream : public Class_10E4E098
{
public:
    cMemoryStream* Init(int A, int B);

    int m_Buffer;
    int m_Size;
    int m_Position;
};

// FUNCTION: 0x10C63F70 ?Init@cMemoryStream@@QAEPAV1@HH@Z
cMemoryStream* cMemoryStream::Init(int A, int B)
{
    this->Class_10E4E098::Class_10E4E098();
    Unknown00 = DAT_10e9cd90;
    m_Buffer = A;
    m_Size = B;
    m_Position = 0;
    Unknown14 = Unknown1C = 1;
    return this;
}

// FUNCTION: 0x10C64AA0 ?Split@Class_10C64AA0@@QAEXIPAI0@Z
void Class_10C64AA0::Split(unsigned Value, unsigned* Hi, unsigned* Lo)
{
    *Hi = Value >> 29;
    *Lo = Value & 0x1fffffff;
}
