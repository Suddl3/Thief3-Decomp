// Game/UT3Game_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10B152C0;

class Class_10B23EE0
{
public:
    Class_10B23EE0();

    int Unknown00;
};

// Copied from include/Game/Class_10E7A9C0.h with the constructor added.
class Class_10E7A9C0
{
public:
    Class_10E7A9C0();

    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void FUN_10b248d0(Class_10B152C0* p1);

    Class_10E7A9C0* FUN_10b248f0();

    int Unknown04;
};

class UT3Game
{
public:
    void FUN_10b137c0();

    char Unknown00[0x34];
    Class_10E7A9C0* Unknown34;
    Class_10B23EE0* Unknown38;
};

// FUNCTION: 0x10B137C0 ?FUN_10b137c0@UT3Game@@QAEXXZ
void UT3Game::FUN_10b137c0()
{
    Unknown34 = new(0, 0, 0, 0, 0) Class_10E7A9C0();
    Unknown38 = new(0, 0, 0, 0, 0) Class_10B23EE0();
}
