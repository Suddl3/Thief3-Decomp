// Game/Class_10E49D44_11.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

int __stricmp(const char* A, const char* B);

class Class_10E49D44_Elem
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int Virtual5();
    virtual int Virtual6();
};

class Class_10E49D44
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10933000(unsigned int Index, const char* Name, int* Out);

    char Unknown04[0x8];
    unsigned int Unknown0C;
    Class_10E49D44_Elem** Unknown10;
};

// FUNCTION: 0x10933000 ?FUN_10933000@Class_10E49D44@@UAEHIPBDPAH@Z
int Class_10E49D44::FUN_10933000(unsigned int Index, const char* Name, int* Out)
{
    if (Out == 0)
        return 0x80070057;
    *Out = 0;
    if (Name == 0)
        return 0x80070057;
    if (Index < Unknown0C)
    {
        if (__stricmp(Name, "MaxBytesAllocated") == 0)
        {
            *Out = Unknown10[Index]->Virtual5();
            return 0;
        }
        if (__stricmp(Name, "BytesAllocated") == 0)
        {
            *Out = Unknown10[Index]->Virtual4();
            return 0;
        }
        if (__stricmp(Name, "NumVertexBuffers") == 0)
        {
            *Out = Unknown10[Index]->Virtual6();
            return 0;
        }
    }
    return 0x80070057;
}
