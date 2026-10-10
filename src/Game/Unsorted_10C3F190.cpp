// Game/Unsorted_10C3F190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C3FF10
{
public:
    void FUN_10c3ff10(int A);
};

class Class_10C41420 : public Class_10C3FF10
{
public:
    void FUN_10c472d0(int A);
};

Class_10C41420* FUN_10c47d90();

class Class_10C62A40
{
public:
    void FUN_10c62a40(unsigned char A);
};

class Class_10C80360 : public Class_10C62A40
{
public:
    void FUN_10c5e810();
    void FUN_10c5daf0();
};

Class_10C80360* FUN_10c5f280();

class FVector
{
public:
    float X, Y, Z;
};

class Class_10E9B5C0_Unknown1C;

class Class_10E9B5C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10c3f050(FVector* Position);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10c3f140(bool A);
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void FUN_10c3f190(bool A);
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void FUN_10c3f220(unsigned char A);

    char Unknown04[4];
    FVector Unknown08;
    char Unknown14[8];
    Class_10E9B5C0_Unknown1C* Unknown1C;
    bool Unknown20;
    char Unknown21;
    unsigned char Unknown22;
};

// FUNCTION: 0x10C3F190 ?FUN_10c3f190@Class_10E9B5C0@@UAEX_N@Z
void Class_10E9B5C0::FUN_10c3f190(bool A)
{
    FUN_10c47d90()->FUN_10c472d0(1);
    Unknown21 = A;
    if (A)
    {
        FUN_10c5f280()->FUN_10c5e810();
        FUN_10c47d90()->FUN_10c3ff10(-1);
        return;
    }
    FUN_10c5f280()->FUN_10c5daf0();
    FUN_10c47d90()->FUN_10c3ff10(-1);
}
