// Game/Unsorted_10A9D3D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// FUN_10a9d320 is the constructor: it stores the vtable and returns this.
class Class_10E6D224
{
public:
    Class_10E6D224* FUN_10a9d320();

    void* Unknown00;
};

class Class_10E5D8D0
{
public:
    virtual Class_10E6D224* FUN_10a9d3d0();
};

// FUN_10a9d340 is the constructor: it stores the vtable and returns this.
class Class_10E6D230
{
public:
    Class_10E6D230* FUN_10a9d340();

    void* Unknown00;
};

class Class_10E5D8D4
{
public:
    virtual Class_10E6D230* FUN_10a9d420();
};

// FUN_10a9d360 is the constructor: it stores the vtable and returns this.
class Class_10E6D23C
{
public:
    Class_10E6D23C* FUN_10a9d360();

    void* Unknown00;
};

class Class_10E5D8D8
{
public:
    virtual Class_10E6D23C* FUN_10a9d470();
};

// FUN_10a9d380 is the constructor: it stores the vtable and returns this.
class Class_10E6D248
{
public:
    Class_10E6D248* FUN_10a9d380();

    void* Unknown00;
};

class Class_10E5D8DC
{
public:
    virtual Class_10E6D248* FUN_10a9d4c0();
};

// FUN_10a9d3a0 is the constructor: it stores the vtable and returns this.
class Class_10E6D254
{
public:
    Class_10E6D254* FUN_10a9d3a0();

    void* Unknown00;
};

class Class_10E5D8E0
{
public:
    virtual Class_10E6D254* FUN_10a9d510();
};

// FUN_10a9d3c0 is the constructor: it stores the vtable and returns this.
class Class_10E6D260
{
public:
    Class_10E6D260* FUN_10a9d3c0();

    void* Unknown00;
};

class Class_10E5D8CC
{
public:
    virtual Class_10E6D260* FUN_10a9d560();
};

// FUNCTION: 0x10A9D3D0 ?FUN_10a9d3d0@Class_10E5D8D0@@UAEPAVClass_10E6D224@@XZ
Class_10E6D224* Class_10E5D8D0::FUN_10a9d3d0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D224* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D224), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D224*>(Memory)->FUN_10a9d320();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D420 ?FUN_10a9d420@Class_10E5D8D4@@UAEPAVClass_10E6D230@@XZ
Class_10E6D230* Class_10E5D8D4::FUN_10a9d420()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D230* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D230), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D230*>(Memory)->FUN_10a9d340();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D470 ?FUN_10a9d470@Class_10E5D8D8@@UAEPAVClass_10E6D23C@@XZ
Class_10E6D23C* Class_10E5D8D8::FUN_10a9d470()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D23C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D23C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D23C*>(Memory)->FUN_10a9d360();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D4C0 ?FUN_10a9d4c0@Class_10E5D8DC@@UAEPAVClass_10E6D248@@XZ
Class_10E6D248* Class_10E5D8DC::FUN_10a9d4c0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D248* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D248), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D248*>(Memory)->FUN_10a9d380();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D510 ?FUN_10a9d510@Class_10E5D8E0@@UAEPAVClass_10E6D254@@XZ
Class_10E6D254* Class_10E5D8E0::FUN_10a9d510()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D254* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D254), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D254*>(Memory)->FUN_10a9d3a0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D560 ?FUN_10a9d560@Class_10E5D8CC@@UAEPAVClass_10E6D260@@XZ
Class_10E6D260* Class_10E5D8CC::FUN_10a9d560()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D260* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D260), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D260*>(Memory)->FUN_10a9d3c0();
    FUN_10905aa0()->Virtual9();
    return Result;
}
