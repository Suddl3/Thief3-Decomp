// Game/Class_10E49EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E49EE0;

class Class_10E49EE0_Owner
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
    virtual void Virtual9(Class_10E49EE0* Object);
};

class Class_10E49EE0
{
public:
    virtual int AddRef();
    virtual int Release();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual ~Class_10E49EE0();

    Class_10E49EE0_Owner* m_Owner;
    int m_RefCount;
};

// FUNCTION: 0x109341F0 ?Release@Class_10E49EE0@@UAEHXZ
int Class_10E49EE0::Release()
{
    int Count = --m_RefCount;
    if (Count == 0)
    {
        m_Owner->Virtual9(this);
        delete this;
    }
    return Count;
}
