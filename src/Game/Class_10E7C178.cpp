// Game/Class_10E7C178.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);
    ~Class_1090A780();

    int* Unknown00;
};

class cString : public Class_1090A780
{
public:
    cString(const char* In);
};

extern const char DAT_10e795b0[];

class Class_10E7C178
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual cString GetClassName();

    cString m_ClassName;
};

// FUNCTION: 0x10B34A30 ?GetClassName@Class_10E7C178@@UAE?AVcString@@XZ
cString Class_10E7C178::GetClassName()
{
    if (m_ClassName.Unknown00 && m_ClassName.Unknown00[-1] > 0)
        return m_ClassName;
    return cString(DAT_10e795b0);
}
