// Game/Unsorted_10A30140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class cString;

class Class_10E663A0
{
public:
    virtual void Virtual0();
    virtual Class_10E663A0* FUN_10a30140();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual const cString& Virtual4();

    Class_10E663A0(const cString& Name);

    int Unknown04;
};

// FUNCTION: 0x10A30140 ?FUN_10a30140@Class_10E663A0@@UAEPAV1@XZ
Class_10E663A0* Class_10E663A0::FUN_10a30140()
{
    return new(0, 0, 0, 0, 0) Class_10E663A0(Virtual4());
}
