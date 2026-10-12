// Game/Unsorted_10A561C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

class Class_10E68938_Unknown128
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47(int A);
};

class cRadioWindow
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void FUN_10a56430(int A);

    char Unknown04[0xCA];
    bool Unknown0CE;
    char Unknown0CF[0x51];
    int m_ChildCount;
    int Unknown124;
    Class_10E68938_Unknown128** m_Children;
};

class Class_10E69080
{
public:
    virtual void Virtual0();
    ~Class_10E69080();

    char Unknown04[0x114];
};

class Class_10E7EDB8
{
public:
    virtual void FUN_10a51530(int A, void* B, int C, int D);
};

class cOptionToggle : public Class_10E69080, public Class_10E7EDB8
{
public:
    ~cOptionToggle();

    char Unknown11C[0xBC];
    cIntArray Unknown1D8;
};

// FUNCTION: 0x10A561E0 ??1cOptionToggle@@QAE@XZ
cOptionToggle::~cOptionToggle()
{
}

// FUNCTION: 0x10A56430 ?FUN_10a56430@cRadioWindow@@UAEXH@Z
void cRadioWindow::FUN_10a56430(int A)
{
    Unknown0CE = false;
    for (int i = 0; i < m_ChildCount; i++)
    {
        Class_10E68938_Unknown128* Child = m_Children[i];
        if (Child)
            Child->Virtual47(A);
    }
}
