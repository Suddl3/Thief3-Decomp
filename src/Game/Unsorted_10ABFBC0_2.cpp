// Game/Unsorted_10ABFBC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cIntArray
{
public:
    cIntArray() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~cIntArray();

    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();

    char* Unknown00;
};

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6F590;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6F590* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6F590
{
public:
    Class_10E6F590();
    virtual void Virtual0();

    cIntArray Unknown04;
    cString Unknown10;
};

// FUNCTION: 0x10ABFF00 ??0Class_10E6F590@@QAE@XZ
Class_10E6F590::Class_10E6F590()
{
    Class_10E5D360 Local(0x80082e);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local);
    DAT_10f46da0->Virtual1(this, 0x59, -1, (Class_10E5D360*)-1);
    DAT_10f46da0->Virtual1(this, 0x5c, -1, (Class_10E5D360*)-1);
}
