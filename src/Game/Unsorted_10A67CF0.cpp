// Game/Unsorted_10A67CF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10A67DA0
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
    virtual void __cdecl Virtual38(int A, int B, int C);

    char Unknown04[0x28];
    int Unknown2C;
    char Unknown30[0x18];
    int Unknown48;
    int Unknown4C;
    char Unknown50[0xC];
    int Unknown5C;
    char Unknown60[0xC];
    int Unknown6C;
};

struct Struct_10A67DA0_Inner
{
    char Unknown00[0x54];
    Object_10A67DA0* Unknown54;
};

struct Struct_10A67DA0_Param
{
    int Unknown00;
    Struct_10A67DA0_Inner* Unknown04;
};

// FUNCTION: 0x10A67DA0 ?FUN_10a67da0@@YAXHPAUStruct_10A67DA0_Param@@HHHPAHH@Z
void FUN_10a67da0(int A, Struct_10A67DA0_Param* B, int C, int D, int E, int* F, int G)
{
    if (!G)
        G = B->Unknown04->Unknown54->Unknown6C;
    B->Unknown04->Unknown54->Unknown48 = D;
    B->Unknown04->Unknown54->Unknown4C = E;
    B->Unknown04->Unknown54->Unknown5C = *F;
    B->Unknown04->Unknown54->Unknown2C = G;
    B->Unknown04->Unknown54->Virtual38(G, 0, C);
}
