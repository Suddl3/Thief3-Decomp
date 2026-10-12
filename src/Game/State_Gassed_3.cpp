// Game/State_Gassed_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e91ee8[];

class Object_10BCB8F0
{
public:
    virtual void Virtual0();
};

// An inlined call that folds away for a null object but leaves the constructor its EH frame.
inline void Notify(Object_10BCB8F0* Obj)
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

class State_Gassed : public Class_10E90D70
{
public:
    State_Gassed(int A, int B, int C);

    int Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    int Unknown54;
    unsigned char Unknown58;
};

// FUNCTION: 0x10BCB8F0 ??0State_Gassed@@QAE@HHH@Z
State_Gassed::State_Gassed(int A, int B, int C)
    : Class_10E90D70(A, B), Unknown40(0), Unknown44(0x11), Unknown48(0x11), Unknown4C(0x11), Unknown50(0),
      Unknown54(C), Unknown58(0)
{
    Unknown00 = DAT_10e91ee8;
    Notify(0);
}
