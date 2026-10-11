// Game/Unsorted_10BB4520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10BB48E0
{
public:
    Class_10BB48E0(void* Arg);

    char Unknown00[0x18];
};

extern Class_10BB48E0* DAT_10ff6694;

// FUNCTION: 0x10BB55A0 ?FUN_10bb55a0@@YAXPAX@Z
void FUN_10bb55a0(void* Arg)
{
    if (!DAT_10ff6694)
        DAT_10ff6694 = new(0, 0, 0, 0, 0) Class_10BB48E0(Arg);
}
