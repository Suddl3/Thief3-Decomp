// Game/Unsorted_10A9AC90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's memory manager (0x10905AA0): the allocation happens inside a
// scope of it (slots 8 and 9).
class Class_10905A90_Member
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
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUN_10a9aad0 is the constructor: it stores the vtable and returns this.
class Class_10E6D11C
{
public:
    Class_10E6D11C* FUN_10a9aad0();

    void* Unknown00;
};

class Class_10E5D87C
{
public:
    virtual Class_10E6D11C* FUN_10a9ac90();
};

// FUN_10a9aaf0 is the constructor: it stores the vtable and returns this.
class Class_10E6D128
{
public:
    Class_10E6D128* FUN_10a9aaf0();

    void* Unknown00;
};

class Class_10E5D898
{
public:
    virtual Class_10E6D128* FUN_10a9ace0();
};

// FUN_10a9ab10 is the constructor: it stores the vtable and returns this.
class Class_10E6D134
{
public:
    Class_10E6D134* FUN_10a9ab10();

    void* Unknown00;
};

class Class_10E5D89C
{
public:
    virtual Class_10E6D134* FUN_10a9ad30();
};

// FUN_10a9ab30 is the constructor: it stores the vtable and returns this.
class Class_10E6D140
{
public:
    Class_10E6D140* FUN_10a9ab30();

    void* Unknown00;
};

class Class_10E5D8A0
{
public:
    virtual Class_10E6D140* FUN_10a9ad80();
};

// FUN_10a9ab50 is the constructor: it stores the vtable and returns this.
class Class_10E6D14C
{
public:
    Class_10E6D14C* FUN_10a9ab50();

    void* Unknown00;
};

class Class_10E5D8A4
{
public:
    virtual Class_10E6D14C* FUN_10a9aeb0();
};

// FUN_10a9ab70 is the constructor: it stores the vtable and returns this.
class Class_10E6D158
{
public:
    Class_10E6D158* FUN_10a9ab70();

    void* Unknown00;
};

class Class_10E5D8AC
{
public:
    virtual Class_10E6D158* FUN_10a9af00();
};

// FUN_10a9ab90 is the constructor: it stores the vtable and returns this.
class Class_10E6D164
{
public:
    Class_10E6D164* FUN_10a9ab90();

    void* Unknown00;
};

class Class_10E5D8B0
{
public:
    virtual Class_10E6D164* FUN_10a9af50();
};

// FUN_10a9abb0 is the constructor: it stores the vtable and returns this.
class Class_10E6D170
{
public:
    Class_10E6D170* FUN_10a9abb0();

    void* Unknown00;
};

class Class_10E5D8B4
{
public:
    virtual Class_10E6D170* FUN_10a9afa0();
};

// FUN_10a9abd0 is the constructor: it stores the vtable and returns this.
class Class_10E6D17C
{
public:
    Class_10E6D17C* FUN_10a9abd0();

    void* Unknown00;
};

class Class_10E5D8B8
{
public:
    virtual Class_10E6D17C* FUN_10a9aff0();
};

// FUN_10a9abf0 is the constructor: it stores the vtable and returns this.
class Class_10E6D188
{
public:
    Class_10E6D188* FUN_10a9abf0();

    void* Unknown00;
};

class Class_10E5D8BC
{
public:
    virtual Class_10E6D188* FUN_10a9b040();
};

// FUN_10a9ac10 is the constructor: it stores the vtable and returns this.
class Class_10E6D194
{
public:
    Class_10E6D194* FUN_10a9ac10();

    void* Unknown00;
};

class Class_10E5D8C0
{
public:
    virtual Class_10E6D194* FUN_10a9b090();
};

// FUNCTION: 0x10A9AC90 ?FUN_10a9ac90@Class_10E5D87C@@UAEPAVClass_10E6D11C@@XZ
Class_10E6D11C* Class_10E5D87C::FUN_10a9ac90()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D11C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D11C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D11C*>(Memory)->FUN_10a9aad0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9ACE0 ?FUN_10a9ace0@Class_10E5D898@@UAEPAVClass_10E6D128@@XZ
Class_10E6D128* Class_10E5D898::FUN_10a9ace0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D128* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D128), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D128*>(Memory)->FUN_10a9aaf0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9AD30 ?FUN_10a9ad30@Class_10E5D89C@@UAEPAVClass_10E6D134@@XZ
Class_10E6D134* Class_10E5D89C::FUN_10a9ad30()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D134* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D134), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D134*>(Memory)->FUN_10a9ab10();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9AD80 ?FUN_10a9ad80@Class_10E5D8A0@@UAEPAVClass_10E6D140@@XZ
Class_10E6D140* Class_10E5D8A0::FUN_10a9ad80()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D140* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D140), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D140*>(Memory)->FUN_10a9ab30();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9AEB0 ?FUN_10a9aeb0@Class_10E5D8A4@@UAEPAVClass_10E6D14C@@XZ
Class_10E6D14C* Class_10E5D8A4::FUN_10a9aeb0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D14C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D14C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D14C*>(Memory)->FUN_10a9ab50();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9AF00 ?FUN_10a9af00@Class_10E5D8AC@@UAEPAVClass_10E6D158@@XZ
Class_10E6D158* Class_10E5D8AC::FUN_10a9af00()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D158* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D158), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D158*>(Memory)->FUN_10a9ab70();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9AF50 ?FUN_10a9af50@Class_10E5D8B0@@UAEPAVClass_10E6D164@@XZ
Class_10E6D164* Class_10E5D8B0::FUN_10a9af50()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D164* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D164), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D164*>(Memory)->FUN_10a9ab90();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9AFA0 ?FUN_10a9afa0@Class_10E5D8B4@@UAEPAVClass_10E6D170@@XZ
Class_10E6D170* Class_10E5D8B4::FUN_10a9afa0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D170* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D170), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D170*>(Memory)->FUN_10a9abb0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9AFF0 ?FUN_10a9aff0@Class_10E5D8B8@@UAEPAVClass_10E6D17C@@XZ
Class_10E6D17C* Class_10E5D8B8::FUN_10a9aff0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D17C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D17C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D17C*>(Memory)->FUN_10a9abd0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9B040 ?FUN_10a9b040@Class_10E5D8BC@@UAEPAVClass_10E6D188@@XZ
Class_10E6D188* Class_10E5D8BC::FUN_10a9b040()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D188* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D188), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D188*>(Memory)->FUN_10a9abf0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9B090 ?FUN_10a9b090@Class_10E5D8C0@@UAEPAVClass_10E6D194@@XZ
Class_10E6D194* Class_10E5D8C0::FUN_10a9b090()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D194* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D194), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D194*>(Memory)->FUN_10a9ac10();
    FUN_10905aa0()->Virtual9();
    return Result;
}
