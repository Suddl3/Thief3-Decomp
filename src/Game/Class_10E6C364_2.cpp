// Game/Class_10E6C364_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A84610_Unknown10.h"

void WriteInt(void* Stream, int Value);

class Class_10E6C364
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void WriteToStream(void* Stream, int A, int B);

    int Unknown04;
    int m_Count;
    char Unknown0C[4];
    Class_10A84610_Unknown10** m_Entries;
};

// FUNCTION: 0x10A845A0 ?WriteToStream@Class_10E6C364@@UAEXPAXHH@Z
void Class_10E6C364::WriteToStream(void* Stream, int A, int B)
{
    WriteInt(Stream, Unknown04);
    WriteInt(Stream, m_Count);
    for (int i = 0; i < m_Count; i++)
    {
        WriteInt(Stream, m_Entries[i]->Virtual1());
        m_Entries[i]->Virtual2(Stream, A, B);
    }
}
