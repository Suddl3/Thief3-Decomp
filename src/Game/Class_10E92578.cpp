// Game/Class_10E92578.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e92578[];

class Object_10BCC120
{
public:
    virtual void Virtual0();
};

// An inlined call that folds away for a null object but leaves the constructor its EH frame.
inline void Notify(Object_10BCC120* Obj)
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

class Class_10E92578 : public Class_10E90D70
{
public:
    Class_10E92578(int A, int B, int C);

    int Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    int Unknown54;
    unsigned char Unknown58;
    unsigned char Unknown59[3];
    unsigned char Unknown5C;
    unsigned char Unknown5D;
};

// FUNCTION: 0x10BCC120 ??0Class_10E92578@@QAE@HHH@Z
Class_10E92578::Class_10E92578(int A, int B, int C) : Class_10E90D70(A, B)
{
    Unknown40 = 0;
    Unknown50 = 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown5D = 0;
    Unknown44 = 100;
    Unknown48 = 101;
    Unknown4C = 102;
    Unknown54 = C;
    Unknown00 = DAT_10e92578;
    Notify(0);
}
