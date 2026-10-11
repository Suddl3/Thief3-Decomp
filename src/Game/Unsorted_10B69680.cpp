// Game/Unsorted_10B69680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1098E0F0
{
public:
    void FUN_1098e0f0(int Unknown0);
};

class Class_10E6D208_Base
{
public:
    Class_10E6D208_Base() : Unknown00(0) {}

    int Unknown00;
};

class Class_10E6D208 : public Class_10E6D208_Base
{
public:
    Class_10E6D208() : Unknown08(0) {}
    virtual ~Class_10E6D208() {}

    int Unknown08;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Unknown0, Class_1098E0F0* Unknown1, Class_10E6D208* Unknown2, int* Unknown3);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10B69680
{
public:
    void FUN_10b69680();

    char Unknown00[0x17c];
    Class_1098E0F0* Unknown17c;
};

// FUNCTION: 0x10B69680 ?FUN_10b69680@Class_10B69680@@QAEXXZ
void Class_10B69680::FUN_10b69680()
{
    if (Unknown17c)
    {
        Unknown17c->FUN_1098e0f0(0);
        int Count = 0;
        Class_10E6D208 Obj;
        DAT_10f46da0->Virtual5(0x34, Unknown17c, &Obj, &Count);
        Unknown17c = 0;
    }
}
