// Game/Unsorted_10B49DD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class Class_10B39530
{
public:
    void Play(int A, float B, float C, int D, int E, int F, float G);
};

// The class of 0x10B4A7D0's vtable (config/<version>/classmap.txt): the flag at +0x18 is the one toggled here.
class Class_10E7E6A0 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();

    void FUN_10b49dd0(int A);

    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    int Unknown10;
    int Unknown14;
    bool Unknown18;
    char Unknown19;
    bool Unknown1A;
    bool Unknown1B;
};

// FUNCTION: 0x10B49DD0 ?FUN_10b49dd0@Class_10B4A7D0@@QAEXH@Z
void Class_10E7E6A0::FUN_10b49dd0(int A)
{
    switch (A)
    {
    case 1:
        if (Unknown18)
        {
            Unknown08 = 0x91;
            ((Class_10B39530*)GetLinkedObject())->Play(0x91, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        else
        {
            Unknown08 = 0x90;
            ((Class_10B39530*)GetLinkedObject())->Play(0x90, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        Unknown18 = !Unknown18;
        break;
    case 2:
        if (Unknown18)
        {
            Unknown08 = 0x93;
            ((Class_10B39530*)GetLinkedObject())->Play(0x93, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        else
        {
            Unknown08 = 0x94;
            ((Class_10B39530*)GetLinkedObject())->Play(0x94, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        Unknown18 = !Unknown18;
        break;
    case 3:
        if (Unknown18)
        {
            Unknown08 = 0x96;
            ((Class_10B39530*)GetLinkedObject())->Play(0x96, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        else
        {
            Unknown08 = 0x97;
            ((Class_10B39530*)GetLinkedObject())->Play(0x97, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        break;
    case 4:
        if (Unknown18)
        {
            Unknown08 = 0x99;
            ((Class_10B39530*)GetLinkedObject())->Play(0x99, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        else
        {
            Unknown08 = 0x9a;
            ((Class_10B39530*)GetLinkedObject())->Play(0x9a, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        }
        break;
    }
}
