// Game/Unsorted_10924A00_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10924A90
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10924B70
{
public:
    void Release();
    void FUN_109243f0();

    bool Unknown00;
    Object_10924A90* m_Device;
    Object_10924A90* m_RenderTarget;
    Object_10924A90* m_DepthStencil;
    int Unknown10;
    char Unknown14[0x94];
    int UnknownA8;
};

// FUNCTION: 0x10924A90 ?Release@Class_10924B70@@QAEXXZ
void Class_10924B70::Release()
{
    FUN_109243f0();
    if (m_RenderTarget)
    {
        m_RenderTarget->Virtual2();
        m_RenderTarget = 0;
    }
    if (m_DepthStencil)
    {
        m_DepthStencil->Virtual2();
        m_DepthStencil = 0;
    }
    if (m_Device)
    {
        m_Device->Virtual2();
        m_Device = 0;
    }
    Unknown10 = 0;
    Unknown00 = false;
    UnknownA8 = -1;
}
