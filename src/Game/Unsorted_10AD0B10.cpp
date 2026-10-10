// Game/Unsorted_10AD0B10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// FUN_10ad0aa0 is the constructor: it stores the vtable and returns this.
class Class_10E708CC
{
public:
    Class_10E708CC* FUN_10ad0aa0();

    void* Unknown00;
};

class Class_10E70258
{
public:
    virtual Class_10E708CC* FUN_10ad0e60();
};

// FUN_10ad0ab0 is the constructor: it stores the vtable and returns this.
class Class_10E708D8
{
public:
    Class_10E708D8* FUN_10ad0ab0();

    void* Unknown00;
};

class Class_10E7025C
{
public:
    virtual Class_10E708D8* FUN_10ad0eb0();
};

// FUN_10ad0ac0 is the constructor: it stores the vtable and returns this.
class Class_10E708E4
{
public:
    Class_10E708E4* FUN_10ad0ac0();

    void* Unknown00;
};

class Class_10E70254
{
public:
    virtual Class_10E708E4* FUN_10ad0f00();
};

// FUN_10ad0ad0 is the constructor: it stores the vtable and returns this.
class Class_10E708F0
{
public:
    Class_10E708F0* FUN_10ad0ad0();

    void* Unknown00;
};

class Class_10E7024C
{
public:
    virtual Class_10E708F0* FUN_10ad0f50();
};

// FUN_10ad0ae0 is the constructor: it stores the vtable and returns this.
class Class_10E708FC
{
public:
    Class_10E708FC* FUN_10ad0ae0();

    void* Unknown00;
};

class Class_10E70260
{
public:
    virtual Class_10E708FC* FUN_10ad0fa0();
};

// FUN_10ad0af0 is the constructor: it stores the vtable and returns this.
class Class_10E70908
{
public:
    Class_10E70908* FUN_10ad0af0();

    void* Unknown00;
};

class Class_10E70264
{
public:
    virtual Class_10E70908* FUN_10ad0ff0();
};

// FUN_10ad0b00 is the constructor: it stores the vtable and returns this.
class Class_10E70914
{
public:
    Class_10E70914* FUN_10ad0b00();

    void* Unknown00;
};

class Class_10E70268
{
public:
    virtual Class_10E70914* FUN_10ad10f0();
};

// FUNCTION: 0x10AD0E60 ?FUN_10ad0e60@Class_10E70258@@UAEPAVClass_10E708CC@@XZ
Class_10E708CC* Class_10E70258::FUN_10ad0e60()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E708CC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708CC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708CC*>(Memory)->FUN_10ad0aa0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0EB0 ?FUN_10ad0eb0@Class_10E7025C@@UAEPAVClass_10E708D8@@XZ
Class_10E708D8* Class_10E7025C::FUN_10ad0eb0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E708D8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708D8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708D8*>(Memory)->FUN_10ad0ab0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0F00 ?FUN_10ad0f00@Class_10E70254@@UAEPAVClass_10E708E4@@XZ
Class_10E708E4* Class_10E70254::FUN_10ad0f00()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E708E4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708E4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708E4*>(Memory)->FUN_10ad0ac0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0F50 ?FUN_10ad0f50@Class_10E7024C@@UAEPAVClass_10E708F0@@XZ
Class_10E708F0* Class_10E7024C::FUN_10ad0f50()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E708F0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708F0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708F0*>(Memory)->FUN_10ad0ad0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0FA0 ?FUN_10ad0fa0@Class_10E70260@@UAEPAVClass_10E708FC@@XZ
Class_10E708FC* Class_10E70260::FUN_10ad0fa0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E708FC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708FC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708FC*>(Memory)->FUN_10ad0ae0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0FF0 ?FUN_10ad0ff0@Class_10E70264@@UAEPAVClass_10E70908@@XZ
Class_10E70908* Class_10E70264::FUN_10ad0ff0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E70908* Result = 0;
    void* Memory = operator new(sizeof(Class_10E70908), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E70908*>(Memory)->FUN_10ad0af0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD10F0 ?FUN_10ad10f0@Class_10E70268@@UAEPAVClass_10E70914@@XZ
Class_10E70914* Class_10E70268::FUN_10ad10f0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E70914* Result = 0;
    void* Memory = operator new(sizeof(Class_10E70914), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E70914*>(Memory)->FUN_10ad0b00();
    FUN_10905aa0()->Virtual9();
    return Result;
}
