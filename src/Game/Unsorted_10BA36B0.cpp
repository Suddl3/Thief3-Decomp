// Game/Unsorted_10BA36B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C320.h"
#include "Game/Class_10E8C35C.h"
#include "Game/Class_10E8C64C.h"
#include "Game/Class_10E8C650.h"
#include "Game/Class_10E8C65C.h"
#include "Game/Class_10E8C664.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c2a4[];

extern void* DAT_10e8c2a0[];

class Class_10BA3740 : public Class_10E6DC88
{
public:
    virtual int Virtual0(int A, int B, int C, int* D);

    Class_10BA3740() : Class_10E6DC88(0x25)
    {
        *(void**)this = DAT_10e8c2a4;
        *(void**)((char*)this + 0xC) = DAT_10e8c2a0;
    }
};

extern void* DAT_10e8c2c4[];

extern void* DAT_10e8c2c0[];

class Class_10BA37D0 : public Class_10E6DC88
{
public:
    virtual int Virtual0(int A, int B, int C, int* D);

    Class_10BA37D0() : Class_10E6DC88(0x26)
    {
        *(void**)this = DAT_10e8c2c4;
        *(void**)((char*)this + 0xC) = DAT_10e8c2c0;
    }
};

// FUNCTION: 0x10BA3740 ?Create@Class_10E8C64C@@UAEPAVClass_10BA3740@@XZ
Class_10BA3740* Class_10E8C64C::Create()
{
    return new(0, 0, 0, 0, 0) Class_10BA3740;
}

// FUNCTION: 0x10BA37D0 ?Create@Class_10E8C650@@UAEPAVClass_10BA37D0@@XZ
Class_10BA37D0* Class_10E8C650::Create()
{
    return new(0, 0, 0, 0, 0) Class_10BA37D0;
}

// FUNCTION: 0x10BA39A0 ?Create@Class_10E8C65C@@UAEPAVClass_10E8C320@@XZ
Class_10E8C320* Class_10E8C65C::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8C320;
}

// FUNCTION: 0x10BA3AC0 ?Create@Class_10E8C664@@UAEPAVClass_10E8C35C@@XZ
Class_10E8C35C* Class_10E8C664::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8C35C;
}
