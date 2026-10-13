// Game/Unsorted_109184C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Game/Class_109203B0.h copied whole, with the constructor its objects run (the header has none).
class Class_109203B0
{
public:
    Class_109203B0();
    Class_109203B0* Init();

    long m_InitTime;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    char Unknown20[0xC];
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
    int Unknown48;
    bool Unknown4C;
    bool Unknown4D;
};

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void DestroyState();

void FUN_10932b40();

class Class_10924100;

extern Class_10924100* DAT_10f2c740;

// FUNCTION: 0x10918D00 ?FUN_10918d00@@YAXXZ
void FUN_10918d00()
{
    DestroyState();
    GetAllocator()->Virtual8(0, 0);
    DAT_10f2c740 = (Class_10924100*)new(0, 0, 0, 0, 0) Class_109203B0();
    GetAllocator()->Virtual9();
    FUN_10932b40();
}
