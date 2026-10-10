// Game/Unsorted_10BCC080.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e92460[];

class Object_10BCC080
{
public:
    virtual void Virtual0();
};

// An inlined call that folds away for a null object but leaves the constructor its EH frame.
inline void Notify(Object_10BCC080* Obj)
{
    if (Obj)
        Obj->Virtual0();
}

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    void** Unknown00;
    int Unknown04[15];
};

class Class_10E92460 : public Class_10E90D70
{
public:
    Class_10E92460(int A, int B, unsigned char C);

    int Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    float Unknown50;
    int Unknown54;
    unsigned char Unknown58;
    unsigned char Unknown59[3];
    unsigned char Unknown5C;
    unsigned char Unknown5D;
};

// FUNCTION: 0x10BCC080 ??0Class_10E92460@@QAE@HHE@Z
Class_10E92460::Class_10E92460(int A, int B, unsigned char C)
    : Class_10E90D70(A, B)
{
    Unknown40 = 0;
    Unknown54 = 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown44 = 0x51;
    Unknown48 = 0x5b;
    Unknown4C = 0x53;
    Unknown00 = DAT_10e92460;
    Unknown5D = C;
    Unknown50 = 1.0f;
    Notify(0);
}
