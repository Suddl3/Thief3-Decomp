// Game/Class_10E6B5C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The placement delete that pairs with Ion Storm's new.
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E6B610
{
public:
    Class_10E6B610() { Unknown28 = 0; Unknown24 = 10.0f; }

    virtual ~Class_10E6B610();

    int Unknown04[8];
    float Unknown24;
    int Unknown28;
};

class Class_10E6B5C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, Class_10E6B610* B, int C, int D);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Class_10E6B610* Virtual11(int A);
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void FUN_10a69240(int Key, int Value, int Reset);
};

// FUNCTION: 0x10A69240 ?FUN_10a69240@Class_10E6B5C0@@UAEXHHH@Z
void Class_10E6B5C0::FUN_10a69240(int Key, int Value, int Reset)
{
    Class_10E6B610* Found = Virtual11(Key);
    if (!Found)
    {
        Found = new(0, 0, 0, 0, 0) Class_10E6B610;
        Virtual5(Key, Found, 1, 0);
    }
    else if (Reset)
    {
        Found->Unknown28 = 0;
    }
    Found->Unknown24 = 10.0f;
    for (int i = 0; i < Found->Unknown28; i++)
    {
        if (Found->Unknown04[i] == Value)
            return;
    }
    if (Found->Unknown28 < 8)
    {
        Found->Unknown04[Found->Unknown28] = Value;
        Found->Unknown28++;
    }
}
