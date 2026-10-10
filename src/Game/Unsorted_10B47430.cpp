// Game/Unsorted_10B47430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C3E140
{
public:
    unsigned char FUN_10c3e140();
};

class Class_10B7AB80 : public Class_10C3E140
{
public:
    void FUN_10b7ab80(int A, float B);
};

class Class_10EC0E20 : public Class_10B7AB80
{
public:
    void FUN_10b7b8a0();
    void FUN_10b7abb0(int A);
    void FUN_10b7b760(int A);
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int A);
};

class Class_10B47660_Member
{
public:
    char Unknown000[0x4A1];
    bool Unknown4A1;
};

class Class_10B47660
{
public:
    void FUN_10b47660(int A, int B);

    int Unknown00;
    int Unknown04;
    Class_10EC0E20* Unknown08;
    Class_10EC0E20* Unknown0C;
    Class_10B47660_Member* Unknown10;
    int Unknown14;
    int Unknown18;
    bool Unknown1C;
    bool Unknown1D;
    char Unknown1E[0x2E];
    Class_10BFBD70 Unknown4C;
};

// FUNCTION: 0x10B47660 ?FUN_10b47660@Class_10B47660@@QAEXHH@Z
void Class_10B47660::FUN_10b47660(int A, int B)
{
    Unknown4C.FUN_10bfbd70(0);
    if (Unknown0C->FUN_10c3e140())
        Unknown0C->FUN_10b7b8a0();
    Unknown08->FUN_10b7ab80(A, 1.0f);
    Unknown08->FUN_10b7abb0(0x3f800000);
    Unknown08->FUN_10b7b760(B);
    if (Unknown1C)
    {
        Unknown1D = false;
        Unknown10->Unknown4A1 = true;
    }
}
