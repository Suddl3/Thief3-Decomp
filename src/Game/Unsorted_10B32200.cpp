// Game/Unsorted_10B32200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AA82D0;

class Class_10B21350;

class Class_1098E330;

class Class_10B31BE0;

class Class_10B32160;

class Class_10B39530;

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();
};

class Class_10B39530
{
public:
    void FUN_10b39530(int A, float B, float C, int D, int E, int F, float G);
};

class Class_10B21350
{
public:
    void FUN_10b21350();
};

class Class_1098E330 : public Class_10B21350
{
public:
    char Unknown00[0x440];
    int Unknown440;
};

class Class_10B31BE0
{
public:
    void FUN_10b31be0(int A);
};

class Class_10B32160 : public Class_10AA82D0
{
public:
    void FUN_10b32160(Class_1098E330* A);
};

class Class_10B32750 : public Class_10B32160
{
public:
    void FUN_10b32750(Class_1098E330* A);
    void FUN_10b31d30(Class_1098E330* A);

    char Unknown04[0x2C];
    bool Unknown30;
    bool Unknown31;
    char Unknown32;
    Class_10B31BE0 Unknown33;
};

// FUNCTION: 0x10B32750 ?FUN_10b32750@Class_10B32750@@QAEXPAVClass_1098E330@@@Z
void Class_10B32750::FUN_10b32750(Class_1098E330* A)
{
    Unknown30 = true;
    A->FUN_10b21350();
    FUN_10b32160(A);
    Unknown31 = true;
    Unknown33.FUN_10b31be0(A->Unknown440);
    ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x6e, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    FUN_10b31d30(A);
}
