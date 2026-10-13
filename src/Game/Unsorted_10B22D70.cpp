// Game/Unsorted_10B22D70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

Class_10905A90_Member* GetAllocator();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00;
            GetAllocator()->Virtual5(Block - 4);
        }
    }
    void FUN_10b23260(void* Reader);

    char* Unknown00;
};

void FUN_10b23080(void* Object, cString* Text);

class Class_10B231E0
{
public:
    void FUN_10b231e0(cString* Text);
};

class Class_10B232E0_Object
{
public:
    unsigned int Unknown00;
    unsigned int Unknown04;
    unsigned int Unknown08;
    unsigned int Unknown0C;
    unsigned int Unknown10;
    int Unknown14;
};

// FUNCTION: 0x10B232E0 ?FUN_10b232e0@@YAPAXPAX0@Z
void* FUN_10b232e0(void* Object, void* Reader)
{
    Class_10B232E0_Object* A = (Class_10B232E0_Object*)Object;
    cString Text;
    if (!A->Unknown14)
    {
        Text.FUN_10b23260(Reader);
    }
    FUN_10b23080(Object, &Text);
    if (A->Unknown14)
    {
        ((Class_10B231E0*)Reader)->FUN_10b231e0(&Text);
    }
    return Object;
}
