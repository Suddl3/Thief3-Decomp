// Game/Unsorted_10B55830_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e81c20[];

extern int DAT_10f05674;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E68F8C
{
public:
    virtual void Virtual0(int A, int* B, float C);

    char Unknown04[0x3C];
};

struct Struct_10DD7DC0Arg
{
    Struct_10DD7DC0Arg(float A, float B, float C) : X(A), Y(B), Z(C) {}

    float X;
    float Y;
    float Z;
};

class Class_10E81C20
{
public:
    Class_10E81C20()
    {
        Unknown08 = 0;
        Unknown04 = 1.0f;
        VTable = DAT_10e81c20;
    }

    void FUN_10dd7dc0(const Struct_10DD7DC0Arg& A, const Struct_10DD7DC0Arg& B, const Struct_10DD7DC0Arg& C, float D, int E, float F, float G, float H);

    void** VTable;
    float Unknown04;
    int Unknown08;
    char Unknown0C[0x68];
};

class Object_10B55EC0 : public Class_10E81C20
{
public:
    Class_10E68F8C Unknown74;
};

class Class_10B559A0
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
    virtual Struct_10DD7DC0Arg* Virtual8();
    virtual void Virtual9();
    virtual Struct_10DD7DC0Arg* Virtual10();
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
    virtual bool Virtual54();
    virtual void Virtual55();
    virtual void Virtual56(int A);
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
    virtual void Virtual77(void* A);

    void FUN_10b55830();
    void FUN_10b55930();
    void FUN_10b559a0(int A, int B);

    char Unknown04[0xE0];
    int Unknown0E4;
    char PadE8[0x44];
    int Unknown12C;
};

// FUNCTION: 0x10B55830 ?FUN_10b55830@Class_10B559A0@@QAEXXZ
void Class_10B559A0::FUN_10b55830()
{
    if (!Virtual54())
        Virtual56(1);
    Struct_10DD7DC0Arg* From = Virtual10();
    Struct_10DD7DC0Arg* To = Virtual8();
    Struct_10DD7DC0Arg Delta(To->X - From->X, To->Y - From->Y, To->Z - From->Z);
    Struct_10DD7DC0Arg* Base = Virtual8();
    Struct_10DD7DC0Arg Pos(Delta.X + Base->X, Delta.Y + Base->Y, Delta.Z + Base->Z);
    Object_10B55EC0* Obj = new(0, 0, 0, 0, 0) Object_10B55EC0;
    Obj->FUN_10dd7dc0(*Virtual10(), *Virtual8(), Pos, 0.15f, DAT_10f05674, 5.0f, 0.55f, 1.0f);
    Virtual77(Obj);
}
