// Game/Unsorted_10C5D5D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10c5d4f0
{
public:
    Class_10c5d4f0();

    char Unknown00[0x44];
};

extern Class_10c5d4f0* DAT_10ff7108;

// FUNCTION: 0x10C5DA50 ?FUN_10c5da50@@YAXXZ
void FUN_10c5da50()
{
    DAT_10ff7108 = new(0, 0, 0, 0, 0) Class_10c5d4f0;
}
