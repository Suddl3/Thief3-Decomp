// Game/Unsorted_10BC4170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BB8300;

class Class_10C28800;

class Class_10C7D570;

class FArchive;

struct Struct_10BC4240_Param;

struct Struct_10BC4C10;

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool CanExit();
    virtual void FUN_10bc4200();
    virtual void FUN_10bc4c30();
    virtual void Update();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual char Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void FUN_10bce6e0(int p1);
    virtual void FUN_10bcc220();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void FUN_10bc4c10(Struct_10BC4C10* p1, int p2);
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
    virtual void FUN_10bce700(int A, int B);
    virtual void Virtual49();
    virtual int FUN_10bc45c0();
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
    virtual char FUN_10bc5bc0();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual float Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();

    Class_10E8BE68(int A, int B);

    void FUN_10bc4170(void* p1, int p2);
    bool FUN_10bc40e0();
    void FUN_10bc4240(Struct_10BC4240_Param* Param, bool A);
    void PopState();
    Struct_10BC4240_Param* FUN_10bca700();
    void FUN_10bce0d0(int p1);
    bool FUN_10bc4af0();

    Class_10BB8300* Unknown04;
    char Unknown08[4];
    float Unknown0C;
};

class Class_10BB8300
{
public:
    bool FUN_10bb8c00();
    void ClearEntry();
    bool IsExpired();
    void RollInterval();

    char Unknown00[8];
    Class_10C7D570* m_Owner;
    char Unknown0C[0x20];
    Class_10C28800* Unknown2C;
    char Unknown30[0x254];
    int m_Entry;
};

class Class_10C28800
{
public:
    void FUN_10c28800(void* p1, int p2, float A, float B);
};

float appFrand();

// FUNCTION: 0x10BC4170 ?FUN_10bc4170@Class_10E8BE68@@QAEXPAXH@Z
void Class_10E8BE68::FUN_10bc4170(void* p1, int p2)
{
    if (Virtual14() == 1)
    {
        if (Unknown04->IsExpired())
        {
            float A = appFrand() * 0.4f - 0.3f + 0.8f;
            float B = appFrand() * 0.4f - 0.2f + 0.7f;
            Unknown04->Unknown2C->FUN_10c28800(p1, p2, A, B);
            Unknown04->RollInterval();
        }
    }
}
