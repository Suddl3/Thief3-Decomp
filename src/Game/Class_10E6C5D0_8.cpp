// Game/Class_10E6C5D0_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BF84.h"
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"

extern char DAT_10f0ce58[];

Class_10905A90_Member* GetAllocator();

void WriteString(void* Stream, int* Value);

class Class_10E6C5D0 : public Class_10E6BF84
{
public:
    virtual ~Class_10E6C5D0();
    virtual int Virtual1();
    virtual int FUN_10a8a510(int p1, Class_10E6C5D0* p2);
    virtual cString FUN_10a8a670();
    virtual int FUN_10a8a530(int p1);
    virtual void FUN_10a8a550();
    virtual void FUN_10a8a560();
    virtual int FUN_10a8a570();
    virtual cString FUN_10a8a6b0();
    virtual int FUN_10a8a590();
    virtual void FUN_10a8a6f0(int A, void* Stream);

    Class_10E6C5D0() : m_Next(0) {}

    Class_10E6C5D0* m_Next;
};

// FUNCTION: 0x10A8A6F0 ?FUN_10a8a6f0@Class_10E6C5D0@@UAEXHPAX@Z
void Class_10E6C5D0::FUN_10a8a6f0(int A, void* Stream)
{
    WriteString(Stream, (int*)&cString(DAT_10f0ce58 + m_Next->Virtual1() * 0x40));
    m_Next->FUN_10a8a6f0(A, Stream);
}
