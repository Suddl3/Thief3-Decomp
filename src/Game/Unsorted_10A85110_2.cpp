// Game/Unsorted_10A85110_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class UObject;

struct Struct_10A85890
{
public:
    virtual void Virtual0();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void** Value);
};

class Class_10A85110_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual int Virtual18();
    virtual void Virtual19();
    virtual int Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual int Virtual23(void* A);
};

class Class_10A85110_Unknown0C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual int Virtual18();
    virtual void Virtual19();
    virtual int Virtual20();
};

class Class_10A85110_Unknown20
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10(Struct_10A85890* Ar);
};

class Object_10A84D10;

struct Struct_10A84D10;

class Class_10E6C390
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual int Virtual14();
    virtual int Virtual15(int A);

    void FUN_10a84e50();
    void Reset();
    void Destroy();
    void FUN_10a85110(Struct_10A85890* Ar);
    void FUN_10a852e0(Struct_10A85890* Ar);
    void FUN_10a85890(Struct_10A85890* Ar);
    void FUN_10a84e90();
    void FUN_10a84e60();
    void PushFloats();
    void FUN_10a84f60(int State);

    int Unknown04;
    Class_10A85110_Unknown08* Unknown08;
    Class_10A85110_Unknown0C* Unknown0C;
    int Unknown10;
    union
    {
        unsigned char Field14;
        bool Unknown14;
    };
    bool Unknown15;
    char Pad16[0x2];
    void* Unknown18;
    Object_10A84D10* Unknown1C;
    Class_10A85110_Unknown20* Unknown20;
    Struct_10A84D10* Unknown24;
    void* Unknown28;
    void* Unknown2C;
    int Unknown30;
    unsigned char Unknown34;
    char Pad35[0x3];
    int Unknown38;
    float Unknown3C;
    float Unknown40;
    float Unknown44;
    float Unknown48;
    int Unknown4C;
    char Pad50[0x5];
    unsigned char Unknown55;
};

// FUNCTION: 0x10A85110 ?FUN_10a85110@Class_10A85890@@QAEXPAUStruct_10A85890@@@Z
void Class_10E6C390::FUN_10a85110(Struct_10A85890* Ar)
{
    int Value = Unknown04;
    Ar->Serialize(&Value, 4);
    bool Flag = Unknown08 != 0;
    Ar->Serialize(&Flag, 1);
    if (Unknown08)
    {
        int Count = Unknown08->Virtual18();
        Ar->Serialize(&Count, 4);
        int Total = Unknown08->Virtual20();
        Ar->Serialize(&Total, 4);
    }
    bool Flag2 = Unknown0C != 0;
    Ar->Serialize(&Flag2, 1);
    if (Unknown0C)
    {
        int Count = Unknown0C->Virtual18();
        Ar->Serialize(&Count, 4);
        int Total = Unknown0C->Virtual20();
        Ar->Serialize(&Total, 4);
    }
    Ar->Serialize(&Unknown10, 4);
    Ar->Serialize(&Unknown14, 1);
    Ar->Serialize(&Unknown15, 1);
    bool Flag3 = Unknown18 != 0;
    Ar->Serialize(&Flag3, 1);
    if (Unknown18)
    {
        int Result = Unknown08->Virtual23(Unknown18);
        Ar->Serialize(&Result, 4);
    }
    Unknown20->Virtual10(Ar);
    Ar->Virtual6(&Unknown28);
    Ar->Virtual6(&Unknown2C);
    Ar->Serialize(&Unknown30, 4);
    Ar->Serialize(&Unknown34, 1);
    Ar->Serialize(&Unknown38, 4);
    Ar->Serialize(&Unknown3C, 4);
    Ar->Serialize(&Unknown40, 4);
    Ar->Serialize(&Unknown44, 4);
    Ar->Serialize(&Unknown48, 4);
    Ar->Serialize(&Unknown4C, 4);
    Ar->Serialize(&Unknown55, 1);
}
