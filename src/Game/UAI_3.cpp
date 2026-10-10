// Game/UAI_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10FF667C
{
public:
    Class_10FF667C();

    char Unknown00[0xb4];
};

extern Class_10FF667C* DAT_10ff667c;

class UAI
{
public:
    void FUN_10bbe490(int Value);

    char Unknown00[0x30];
    int Unknown30;
};

// FUNCTION: 0x10BBE490 ?FUN_10bbe490@UAI@@QAEXH@Z
void UAI::FUN_10bbe490(int Value)
{
    Unknown30 = Value;
    DAT_10ff667c = new(0, 0, 0, 0, 0) Class_10FF667C;
}
