// Game/Unsorted_10BBFBF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
};

FArchive& FUN_10b052a0(FArchive& Ar, void* A);

struct Struct_10BBFD80
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10BBFD80Element
{
public:
    char Unknown00[0x2C];
    Struct_10BBFD80 Unknown2C;
};

class Class_10BBFD80
{
public:
    int Unknown00;
    int Unknown04;
    Class_10BBFD80Element** Unknown08;
};

class Class_10A68D20;

void FUN_10a68cf0(Class_10A68D20* Owner, int A, int B, int C);

class Class_10BBFBF0_Entry
{
public:
    char Unknown00[0x2C];
    char Unknown2C[4];
};

class Class_10BBFBF0_Param
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
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual int Virtual94();

    char Unknown04[0x28];
    char Unknown2C[4];
};

class Class_10BBFBF0_Unknown00
{
public:
    char Unknown00[0x18];
    int Unknown18;
    char Unknown1C[4];
    Class_10BBFBF0_Entry** Unknown20;
};

void FUN_10bbf8d0(Class_10A68D20* Owner, Class_10BBFBF0_Param* A, Class_10BBFBF0_Entry* Entry);

class Class_10BBFBF0
{
public:
    int FUN_10bbfbf0(Class_10BBFBF0_Param* A, Class_10A68D20* B);

    Class_10BBFBF0_Unknown00* Unknown00;
};

class Class_10BBFCA0_Unknown00
{
public:
    char Unknown00[0x24];
    int Unknown24;
    char Unknown28[4];
    Class_10BBFBF0_Entry** Unknown2C;
};

void FUN_10bbf7a0(Class_10A68D20* Owner, Class_10BBFBF0_Param* A, Class_10BBFBF0_Entry* Entry, unsigned char* Color, int Percent);

class Class_10BBFCA0
{
public:
    unsigned int FUN_10bbfca0(Class_10BBFBF0_Param* A, Class_10A68D20* B);

    Class_10BBFCA0_Unknown00* Unknown00;
};

// FUNCTION: 0x10BBFBF0 ?FUN_10bbfbf0@Class_10BBFBF0@@QAEHPAVClass_10BBFBF0_Param@@PAVClass_10A68D20@@@Z
int Class_10BBFBF0::FUN_10bbfbf0(Class_10BBFBF0_Param* A, Class_10A68D20* B)
{
    if (Unknown00->Unknown18 == 0)
        return 0;
    if (A->Virtual94() == 7)
        return 0;
    int Flags = 0;
    for (int i = 0; i < Unknown00->Unknown18; i++)
    {
        Class_10BBFBF0_Entry* Entry = Unknown00->Unknown20[i];
        unsigned char Color[4] = {0xa0, 0x00, 0xa0, 0xff};
        FUN_10a68cf0(B, (int)&A->Unknown2C, (int)&Entry->Unknown2C, (int)&Color);
        FUN_10bbf8d0(B, A, Entry);
        Flags |= 0x20;
    }
    return Flags;
}

// FUNCTION: 0x10BBFCA0 ?FUN_10bbfca0@Class_10BBFCA0@@QAEIPAVClass_10BBFBF0_Param@@PAVClass_10A68D20@@@Z
unsigned int Class_10BBFCA0::FUN_10bbfca0(Class_10BBFBF0_Param* A, Class_10A68D20* B)
{
    if (Unknown00->Unknown24 == 0)
        return 0;
    if (A->Virtual94() == 8)
        return 0;
    int Percent = 100 / Unknown00->Unknown24;
    unsigned int Flags = 0;
    for (int i = 0; i < Unknown00->Unknown24; i++)
    {
        Class_10BBFBF0_Entry* Entry = Unknown00->Unknown2C[i];
        unsigned char Color[4] = {0x0d, 0x6e, 0xff, 0xff};
        FUN_10a68cf0(B, (int)&A->Unknown2C, (int)&Entry->Unknown2C, (int)&Color);
        if (Percent < 100)
        {
            unsigned char Other[4] = {0x0d, 0x6e, 0xff, 0xff};
            FUN_10bbf7a0(B, A, Entry, Other, Percent);
        }
        Flags |= 0x40;
    }
    return Flags;
}

// FUNCTION: 0x10BBFD80 ?FUN_10bbfd80@@YAXPAVClass_10BBFD80@@AAVFArchive@@@Z
void FUN_10bbfd80(Class_10BBFD80* A, FArchive& Ar)
{
    int Count = A->Unknown00;
    Ar.Virtual1(&Count, 4);
    for (int i = 0; i < Count; i++)
    {
        Class_10BBFD80Element* Element = A->Unknown08[i];
        Struct_10BBFD80 Item = Element->Unknown2C;
        FUN_10b052a0(Ar, &Item);
    }
}
