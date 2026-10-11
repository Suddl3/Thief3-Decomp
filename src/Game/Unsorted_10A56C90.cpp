// Game/Unsorted_10A56C90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FVector
{
public:
    float X, Y, Z;
};

class Class_10E6A9F8
{
public:
    virtual void Virtual0();
    void FUN_10a64d70();
};

class Class_10E68B10 : public Class_10E6A9F8
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void FUN_10a56c90(FVector* A);
    virtual FVector* Virtual33();

    char Unknown04[0x30];
    FVector Unknown34;
};

// FUNCTION: 0x10A56C90 ?FUN_10a56c90@Class_10E68B10@@UAEXPAVFVector@@@Z
void Class_10E68B10::FUN_10a56c90(FVector* A)
{
    FVector* Current = Virtual33();
    if (Current->X != A->X || Current->Y != A->Y || Current->Z != A->Z)
    {
        Unknown34 = *A;
        Class_10E6A9F8::FUN_10a64d70();
    }
}
