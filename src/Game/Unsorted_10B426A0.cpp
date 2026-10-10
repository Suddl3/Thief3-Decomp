// Game/Unsorted_10B426A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6B5B8
{
public:
    Class_10E6B5B8();
    virtual ~Class_10E6B5B8();

    char Unknown04[0x18];
};

class Class_10B42640 : public Class_10E6B5B8
{
public:
    Class_10B42640() { Unknown1C = 0; Unknown20 = 0; Unknown24 = 0; }
    virtual ~Class_10B42640();

    int Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10B42920 ?FUN_10b42920@@YAPAVClass_10B42640@@XZ
Class_10B42640* FUN_10b42920()
{
    static Class_10B42640 GSingleton;
    return &GSingleton;
}
