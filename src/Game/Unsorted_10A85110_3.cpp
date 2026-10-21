// Game/Unsorted_10A85110_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The archive the object is read from.
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

// The object the factory makes and this object holds.
class Class_10A852E0_Unknown08
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
    virtual void Virtual18();
    virtual void* Virtual19(int A);
};

// The factory the global points at.
class Class_10F352D8
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
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual Class_10A852E0_Unknown08* Virtual23(int A);
};

extern Class_10F352D8* DAT_10f352d8;

// The object the archive reads for Unknown20.
class Class_10A852E0_Unknown20
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

// Class_10E6C390 (the classmap's name for Class_10A85890) copied from
// include/Game/Class_10E6C390.h, with the members this function reads:
// Unknown08 and Unknown0C hold objects, Unknown18 and Unknown28 are the
// pointers the header leaves out, and the slots 16 to 28 are the ones the
// code calls.
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
    virtual int Virtual16(int A);
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual Object_10A84D10* Virtual28(int A);

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
    Class_10A852E0_Unknown08* Unknown08;
    Class_10A852E0_Unknown08* Unknown0C;
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
    Class_10A852E0_Unknown20* Unknown20;
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

// FUNCTION: 0x10A852E0 ?FUN_10a852e0@Class_10A85890@@QAEXPAUStruct_10A85890@@@Z
void Class_10E6C390::FUN_10a852e0(Struct_10A85890* Ar)
{
    int Value;
    Ar->Serialize(&Value, 4);
    Unknown04 = Value;
    bool Flag = false;
    Ar->Serialize(&Flag, 1);
    if (Flag)
    {
        int Count;
        Ar->Serialize(&Count, 4);
        int Total;
        Ar->Serialize(&Total, 4);
        Unknown08 = DAT_10f352d8->Virtual23(Total);
    }
    bool Flag2 = Unknown0C != 0;
    Ar->Serialize(&Flag2, 1);
    if (Flag2)
    {
        int Count;
        Ar->Serialize(&Count, 4);
        int Total;
        Ar->Serialize(&Total, 4);
        Unknown0C = DAT_10f352d8->Virtual23(Total);
    }
    Ar->Serialize(&Unknown10, 4);
    Ar->Serialize(&Unknown14, 1);
    Unknown14 = false;
    Ar->Serialize(&Unknown15, 1);
    bool Flag3 = Unknown18 != 0;
    Ar->Serialize(&Flag3, 1);
    if (Flag3)
    {
        int Result;
        Ar->Serialize(&Result, 4);
        Unknown18 = Unknown08->Virtual19(Result);
    }
    if (Unknown08)
        Unknown1C = Virtual28(Virtual16(0));
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
