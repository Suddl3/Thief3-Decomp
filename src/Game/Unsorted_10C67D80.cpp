// Game/Unsorted_10C67D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10C03360
{
public:
    Class_10C03360() : Unknown04(0), Unknown08(0), Unknown0C(0) {}
    ~Class_10C03360()
    {
        if (Unknown04)
            delete Unknown04;
    }
    void FUN_10c03360(int* Key);

    int Unknown00;
    int* Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10E9CFE0
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
    virtual void Virtual8(int A, Class_10C03360* Obj, int B, int C);
    virtual void FUN_10c67eb0(int A, int B, int C);

    int Unknown04;
    std::vector<int> Unknown08;
    char Unknown18[0x7C];
    int Unknown94;
};

// FUNCTION: 0x10C67EB0 ?FUN_10c67eb0@Class_10E9CFE0@@UAEXHHH@Z
void Class_10E9CFE0::FUN_10c67eb0(int A, int B, int C)
{
    if (Unknown08.size() > 0)
    {
        Class_10C03360 Obj;
        if (Unknown94 >= 0 && Unknown08.size() > 1)
        {
            int Key = Unknown94;
            Obj.FUN_10c03360(&Key);
        }
        Virtual8(A, &Obj, B, C);
    }
}
