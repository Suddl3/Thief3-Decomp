// Game/Unsorted_10A8F2E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10EB766C
{
public:
    virtual ~Class_10EB766C();

    int Unknown04;
    int Unknown08;
};

class Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, int C, int* D) = 0;
};

class Class_10E6DC88 : public Class_10EB766C, public Class_10E5B578
{
public:
    Class_10E6DC88(int Value);
    virtual ~Class_10E6DC88();

    int Unknown10;
};

class Class_10E6C8CC : public Class_10E6DC88
{
public:
    Class_10E6C8CC();
    virtual ~Class_10E6C8CC();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10a8f590();
    virtual int Virtual0(int A, int B, int C, int* D);

    std::vector<int> Unknown14;
    std::vector<int> Unknown24;
};

// FUNCTION: 0x10A8F430 ??0Class_10E6C8CC@@QAE@XZ
Class_10E6C8CC::Class_10E6C8CC() : Class_10E6DC88(4)
{
}
