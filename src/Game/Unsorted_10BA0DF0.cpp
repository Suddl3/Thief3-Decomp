// Game/Unsorted_10BA0DF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B9E410
{
public:
    void FUN_10b9d8d0();
};

class Class_10BC9D40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

class Class_10B9CAC0 : public Class_10B9E410
{
public:
    Class_10BC9D40* FUN_10b9cac0();
};

class Class_10BAA8A0
{
public:
    Class_10B9CAC0* FUN_10baa750();
};

// FUNCTION: 0x10BA0E70 ?FUN_10ba0e70@@YGXPAVClass_10BAA8A0@@@Z
void __stdcall FUN_10ba0e70(Class_10BAA8A0* A)
{
    if (A)
    {
        Class_10B9CAC0* P = A->FUN_10baa750();
        if (P)
        {
            Class_10BC9D40* Q = P->FUN_10b9cac0();
            if (Q)
            {
                int R = Q->Virtual3();
                if (R == 5 || R == 0x23)
                    P->FUN_10b9d8d0();
            }
        }
    }
}
