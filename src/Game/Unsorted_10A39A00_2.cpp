// Game/Unsorted_10A39A00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

struct Struct_10A37860
{
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[0x20];
    float Unknown30;
};

class Object_10A37860
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Struct_10A37860* Virtual4();
};

class Object_10A37820
{
public:
    virtual void Virtual0();
    virtual Object_10A37860* Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool Virtual4();
};

class Class_10E666A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10a39a00();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual Object_10A37820* Virtual12();
};

// FUNCTION: 0x10A39A00 ?FUN_10a39a00@Class_10E666A0@@UAE_NXZ
bool Class_10E666A0::FUN_10a39a00()
{
    Object_10A37820* First = Virtual12();
    if (First)
    {
        Object_10A37860* Second = First->Virtual1();
        if (Second)
        {
            Struct_10A37860* Third = Second->Virtual4();
            if (Third)
            {
                if (Third->Unknown30 == DAT_10eafbdc && Third->Unknown0C == 3)
                    return true;
                return false;
            }
        }
    }
    return true;
}
