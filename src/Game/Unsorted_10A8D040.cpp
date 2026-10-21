// Game/Unsorted_10A8D040.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6C6C4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a8d040(int Op, Class_10E6C6C4* Other);

    void* volatile Unknown04;
};

// FUNCTION: 0x10A8D040 ?FUN_10a8d040@Class_10E6C6C4@@UAEHHPAV1@@Z
int Class_10E6C6C4::FUN_10a8d040(int Op, Class_10E6C6C4* Other)
{
    switch (Op)
    {
    case 1:
    {
        void* OtherValue = Other->Unknown04;
        void* ThisValue = Unknown04;
        return (OtherValue == ThisValue);
    }
    case 6:
    {
        void* OtherValue = Other->Unknown04;
        void* ThisValue = Unknown04;
        return (OtherValue != ThisValue);
    }
    }
    return 0;
}
