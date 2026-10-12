// Game/cD3DDynamicVertexBuffer.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10934B10_Unknown14;

class Class_10934B10_Unknown04
{
public:
    int FUN_10934bd0(int A, int B, Class_10934B10_Unknown14** C, unsigned int* D);
};

class Class_10934B10_Unknown14
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual int __stdcall Virtual11(unsigned int A, unsigned int B, void** C, unsigned int D);
};

class cD3DDynamicVertexBuffer
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int CreateBuffer(int A, int B, void** Out);

    Class_10934B10_Unknown04* m_Pool;
    char Unknown08[0xc];
    Class_10934B10_Unknown14* m_Buffer;
    unsigned int m_Offset;
    int m_Size;
    unsigned int m_Stride;
    unsigned int m_Count;
};

// FUNCTION: 0x10934B10 ?CreateBuffer@cD3DDynamicVertexBuffer@@UAEHHHPAPAX@Z
int cD3DDynamicVertexBuffer::CreateBuffer(int A, int B, void** Out)
{
    if (Out == 0)
        return 0x80070057;
    else
    {
        *Out = 0;
        if (A != 0)
            return 0x80070057;
        if (B == 0)
            return 0x80070057;
        if (m_Size != 0)
            return 0x80040720;
        int Hr = m_Pool->FUN_10934bd0(m_Stride * B, m_Stride, &m_Buffer, &m_Offset);
        if (Hr >= 0)
        {
            Hr = m_Buffer->Virtual11(m_Offset, m_Stride * B, Out, m_Offset != 0 ? 0x1000 : 0x2000);
            if (Hr >= 0)
            {
                m_Size = m_Stride * B;
                m_Count = m_Offset / m_Stride;
            }
        }
        return Hr;
    }
}
