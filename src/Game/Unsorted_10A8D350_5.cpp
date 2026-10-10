// Game/Unsorted_10A8D350_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

void FUN_10d3ddc0(void* Reader, int* Out);

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10E6C7B4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_109081E0* Text);
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual bool FUN_10a8d3c0(int A, void* Reader);
};

// FUNCTION: 0x10A8D3C0 ?FUN_10a8d3c0@Class_10E6C7B4@@UAE_NHPAX@Z
bool Class_10E6C7B4::FUN_10a8d3c0(int A, void* Reader)
{
    Class_109081E0 Text;
    FUN_10d3ddc0(Reader, (int*)&Text);
    Virtual4(&Text);
    return true;
}
