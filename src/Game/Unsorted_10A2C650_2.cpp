// Game/Unsorted_10A2C650_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A2C2F0
{
public:
    Class_10A2C2F0();

    char Unknown00[0x14];
};

extern Class_10A2C2F0* DAT_10f39f2c;

// FUNCTION: 0x10A2C6B0 ?FUN_10a2c6b0@@YAPAVClass_10A2C2F0@@XZ
Class_10A2C2F0* FUN_10a2c6b0()
{
    if (!DAT_10f39f2c)
        DAT_10f39f2c = new((int)DAT_10f39f2c, 0, 0, 0, 0) Class_10A2C2F0;
    return DAT_10f39f2c;
}
