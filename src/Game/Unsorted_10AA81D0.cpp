// Game/Unsorted_10AA81D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class cString
{
public:
    cString() : Unknown00(0) {}
    cString FUN_109e0480();

    char* Unknown00;
};

void ReadString(void* Reader, int* Out);

class Class_10E6C170
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10aa81d0(void* Reader, int Version, cString Out);

    int Unknown04;
    cString Unknown08;
};

// FUNCTION: 0x10AA81D0 ?FUN_10aa81d0@Class_10E6C170@@UAEXPAXHVcString@@@Z
void Class_10E6C170::FUN_10aa81d0(void* Reader, int Version, cString Out)
{
    if (Out.Unknown00 == 0)
        ReadString(Reader, (int*)&Unknown08);
    cString Result = Unknown08.FUN_109e0480();
    if (Result.Unknown00)
    {
        char* Block = Result.Unknown00 - 4;
        GetAllocator()->Virtual5(Block);
    }
}
