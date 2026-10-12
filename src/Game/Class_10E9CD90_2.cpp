// Game/Class_10E9CD90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" void* memcpy(void* Dest, const void* Src, unsigned Count);

class Class_10E9CD90
{
public:
    virtual void Virtual0();
    virtual void Read(void* Dest, unsigned Count);

    char Unknown04[0x30];
    char* m_Buffer;
    int m_Size;
    int m_Position;
};

// FUNCTION: 0x10C63FD0 ?Read@Class_10E9CD90@@UAEXPAXI@Z
void Class_10E9CD90::Read(void* Dest, unsigned Count)
{
    memcpy(Dest, m_Buffer + m_Position, Count);
    m_Position += Count;
}
