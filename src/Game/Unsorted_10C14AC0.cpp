// Game/Unsorted_10C14AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// cIntArray as this function uses it: the game's SetCount is inlined here,
// so this copy inlines it too.
class cIntArray
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

// The object Class_10978090::FUN_10978090 returns.
class Class_10978090Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual int Virtual8();
};

class Class_10A7F5A0;

// The object Class_10E6CE28::GetUnknown08 returns.
class Class_10A95860_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

class Class_10A7F5A0
{
public:
    cIntArray FUN_10a7f5a0(int A, int B);
};

// The global the loop calls into.
class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B, void* C, void* D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A);
};

extern Class_10F46DA0* DAT_10f46da0;

// The message object and its base: the base's destructor puts the base's
// vtable back.
class Class_10E50610
{
public:
    virtual ~Class_10E50610() {}
};

class Class_10E6D208 : public Class_10E50610
{
public:
    Class_10E6D208() : Unknown04(0) {}

    int Unknown04;
};

class Class_10BAA6B0_Param;

class Class_10C08940;

// Class_10978090 from include/Game/Class_10978090.h, with the result type
// of FUN_10978090.
class Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();

    Class_10978090Result* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

class Class_10E6CE28 : public Class_10978090
{
public:
    Class_10A95860_Unknown08* GetUnknown08();
};

class Class_10E8C248 : public Class_10E6CE28
{
public:
    virtual void FUN_10c14c70();

    int Unknown0c;
};

// FUNCTION: 0x10C14C70 ?FUN_10c14c70@Class_10E8C248@@UAEXXZ
void Class_10E8C248::FUN_10c14c70()
{
    Class_10978090Result* Result = FUN_10978090();
    Class_10A95860_Unknown08* Owner = GetUnknown08();
    cIntArray Arr = Owner->Virtual4(0)->FUN_10a7f5a0(Result->Virtual8(), 0);
    Class_10E6D208 Msg;
    Msg.Unknown04 = FUN_10978090()->Virtual8();
    for (int i = Arr.Unknown00 - 1; i >= 0; i--)
        DAT_10f46da0->Virtual1(this ? &this->Unknown0c : 0, 0x54, Arr.Unknown08[i], &Msg);
}
