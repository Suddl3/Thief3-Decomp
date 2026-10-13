// Game/Unsorted_10A2FAB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern char DAT_10e47660[];

class Class_10984CF0
{
public:
    Class_10984CF0(const char* A, int B, int C);

    char Unknown00[0x10];
};

class Class_10E50928
{
public:
    virtual void Virtual0();
    virtual Class_10984CF0* FUN_10a2fab0();

    const char* Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A2FAB0 ?FUN_10a2fab0@Class_10E50928@@UAEPAVClass_10984CF0@@XZ
Class_10984CF0* Class_10E50928::FUN_10a2fab0()
{
    return new(0, 0, 0, 0, 0) Class_10984CF0(Unknown04 ? Unknown04 : DAT_10e47660, Unknown08, Unknown0C);
}
