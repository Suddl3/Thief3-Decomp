// Game/Unsorted_10B4A380_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B47AB0;

class Class_10B47720;

struct Struct_10B4C2C0;

class Class_10B395E0
{
public:
    void FUN_10b395e0(int A);

    char Unknown00[0xC];
    Class_10B47AB0* Unknown0C[1];
};

// The linked object: a Class_10B395E0 with a few methods of its own.
class Class_10B39870 : public Class_10B395E0
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
};

// Copied from Game/Class_10AA82D0.h: the linked object is returned by pointer.
class Class_10AA82D0
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
};

class Class_10B4A380 : public Class_10AA82D0
{
public:
    void FUN_10b4a380(int A);

    char Unknown10[4];
    int Unknown14;
    bool Unknown18;
    char Unknown19;
    bool Unknown1A;
    bool Unknown1B;
};

// FUNCTION: 0x10B4A380 ?FUN_10b4a380@Class_10B4A380@@QAEXH@Z
void Class_10B4A380::FUN_10b4a380(int Type)
{
    Unknown1A = false;
    Unknown1B = false;
    switch (Type)
    {
    case 1:
        if (Unknown18)
        {
            Unknown08 = 0x91;
            GetLinkedObject()->FUN_10b395e0(0x91);
        }
        else
        {
            Unknown08 = 0x90;
            GetLinkedObject()->FUN_10b395e0(0x90);
        }
        Unknown14 = Type;
        Unknown18 = !Unknown18;
        return;
    case 2:
        if (Unknown18)
        {
            Unknown08 = 0x93;
            GetLinkedObject()->FUN_10b395e0(0x93);
        }
        else
        {
            Unknown08 = 0x94;
            GetLinkedObject()->FUN_10b395e0(0x94);
        }
        Unknown14 = Type;
        Unknown18 = !Unknown18;
        return;
    case 3:
        if (Unknown18)
        {
            Unknown08 = 0x96;
            GetLinkedObject()->FUN_10b395e0(0x96);
        }
        else
        {
            Unknown08 = 0x97;
            GetLinkedObject()->FUN_10b395e0(0x97);
        }
        Unknown14 = Type;
        return;
    case 4:
        if (Unknown18)
        {
            Unknown08 = 0x99;
            GetLinkedObject()->FUN_10b395e0(0x99);
        }
        else
        {
            Unknown08 = 0x9a;
            GetLinkedObject()->FUN_10b395e0(0x9a);
        }
        break;
    }
    Unknown14 = Type;
}
