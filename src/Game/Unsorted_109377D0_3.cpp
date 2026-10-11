// Game/Unsorted_109377D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// A Direct3D matrix (D3DXMATRIX): four rows of four floats.
struct D3DXMATRIX
{
    float m[4][4];
};

// A three-float vector (D3DXVECTOR3).
struct D3DXVECTOR3
{
    float x;
    float y;
    float z;
};

// D3DX's look-at, perspective, translation, product and transpose.
extern "C" D3DXMATRIX* __stdcall FUN_10d68e81(D3DXMATRIX* pOut, const D3DXVECTOR3* pEye, const D3DXVECTOR3* pAt, const D3DXVECTOR3* pUp);

void __stdcall FUN_10d690fe(char* pOut, float w, float h, float zn, float zf);

extern "C" D3DXMATRIX* __stdcall FUN_10d68867(D3DXMATRIX* pOut, float x, float y, float z);

extern "C" D3DXMATRIX* __stdcall FUN_10d67f9a(D3DXMATRIX* pOut, const D3DXMATRIX* pM1, const D3DXMATRIX* pM2);

extern "C" D3DXMATRIX* __stdcall FUN_10d681e3(D3DXMATRIX* pOut, const D3DXMATRIX* pM);

class IDirect3DDevice8
{
public:
    virtual long __stdcall Virtual0();
    virtual long __stdcall Virtual1();
    virtual long __stdcall Virtual2();
    virtual long __stdcall Virtual3();
    virtual long __stdcall Virtual4();
    virtual long __stdcall Virtual5();
    virtual long __stdcall Virtual6();
    virtual long __stdcall Virtual7();
    virtual long __stdcall Virtual8();
    virtual long __stdcall Virtual9();
    virtual long __stdcall Virtual10();
    virtual long __stdcall Virtual11();
    virtual long __stdcall Virtual12();
    virtual long __stdcall Virtual13();
    virtual long __stdcall Virtual14();
    virtual long __stdcall Virtual15();
    virtual long __stdcall Virtual16();
    virtual long __stdcall Virtual17();
    virtual long __stdcall Virtual18();
    virtual long __stdcall Virtual19();
    virtual long __stdcall Virtual20();
    virtual long __stdcall Virtual21();
    virtual long __stdcall Virtual22();
    virtual long __stdcall Virtual23();
    virtual long __stdcall Virtual24();
    virtual long __stdcall Virtual25();
    virtual long __stdcall Virtual26();
    virtual long __stdcall Virtual27();
    virtual long __stdcall Virtual28();
    virtual long __stdcall Virtual29();
    virtual long __stdcall Virtual30();
    virtual long __stdcall Virtual31();
    virtual long __stdcall Virtual32();
    virtual long __stdcall Virtual33();
    virtual long __stdcall Virtual34();
    virtual long __stdcall Virtual35();
    virtual long __stdcall Virtual36();
    virtual long __stdcall SetTransform(int State, const D3DXMATRIX* pMatrix);
    virtual long __stdcall Virtual38();
    virtual long __stdcall Virtual39();
    virtual long __stdcall Virtual40();
    virtual long __stdcall Virtual41();
    virtual long __stdcall Virtual42();
    virtual long __stdcall Virtual43();
    virtual long __stdcall Virtual44();
    virtual long __stdcall Virtual45();
    virtual long __stdcall Virtual46();
    virtual long __stdcall Virtual47();
    virtual long __stdcall Virtual48();
    virtual long __stdcall Virtual49();
    virtual long __stdcall Virtual50();
    virtual long __stdcall Virtual51();
    virtual long __stdcall Virtual52();
    virtual long __stdcall Virtual53();
    virtual long __stdcall Virtual54();
    virtual long __stdcall Virtual55();
    virtual long __stdcall Virtual56();
    virtual long __stdcall Virtual57();
    virtual long __stdcall Virtual58();
    virtual long __stdcall Virtual59();
    virtual long __stdcall Virtual60();
    virtual long __stdcall Virtual61();
    virtual long __stdcall Virtual62();
    virtual long __stdcall Virtual63();
    virtual long __stdcall Virtual64();
    virtual long __stdcall Virtual65();
    virtual long __stdcall Virtual66();
    virtual long __stdcall Virtual67();
    virtual long __stdcall Virtual68();
    virtual long __stdcall Virtual69();
    virtual long __stdcall Virtual70();
    virtual long __stdcall Virtual71();
    virtual long __stdcall Virtual72();
    virtual long __stdcall Virtual73();
    virtual long __stdcall Virtual74();
    virtual long __stdcall Virtual75();
    virtual long __stdcall Virtual76();
    virtual long __stdcall Virtual77();
    virtual long __stdcall Virtual78();
    virtual long __stdcall SetVertexShaderConstant(unsigned long Register, const void* pConstantData, unsigned long ConstantCount);
};

extern IDirect3DDevice8* GDirect3DDevice8;

struct Struct_10938DA0
{
    char Unknown00[8];
    float Unknown08;
    float Unknown0C;
};

class Class_1091E3F0;

// Class_10937790 copied whole from include/Game/Class_10937790.h, with the
// method FUN_10938da0 added.
class Class_10937790
{
public:
    void FUN_10937790();
    void FUN_10937430(void* A, void* B, void* C);
    void FUN_10938ee0(Class_1091E3F0* Obj);
    void FUN_10938da0(void* A, Struct_10938DA0* B, void* C);

    char Unknown00[0x6FC];
    int Unknown6FC;
    char Pad700[0x3c];
    char Unknown73C[0x40];
    char Unknown77C[0x40];
    char Unknown7BC[0x40];
    char Unknown7FC[0x18];
};

// FUNCTION: 0x10938DA0 ?FUN_10938da0@Class_10937790@@QAEXPAXPAUStruct_10938DA0@@0@Z
void Class_10937790::FUN_10938da0(void* A, Struct_10938DA0* B, void* C)
{
    D3DXMATRIX Translation;
    D3DXMATRIX ViewProj;
    D3DXMATRIX View;
    D3DXMATRIX Proj;
    D3DXMATRIX Combined;
    D3DXVECTOR3 Eye;
    D3DXVECTOR3 Up;
    D3DXVECTOR3 At;

    Eye.x = 0.0f;
    Eye.y = 0.0f;
    Eye.z = -5.0f;
    At.x = 0.0f;
    At.y = 0.0f;
    At.z = 0.0f;
    Up.x = 0.0f;
    Up.y = 1.0f;
    Up.z = 0.0f;
    FUN_10d68e81(&View, &Eye, &At, &Up);
    FUN_10d690fe((char*)&Proj, 4.0f, 4.0f, 0.2f, 20.0f);
    FUN_10d67f9a(&ViewProj, &View, &Proj);
    FUN_10d68867(&Translation, B->Unknown08 + 1.0f, B->Unknown0C + 1.0f, 1.0f);
    this->FUN_10937430(&Proj, &Unknown6FC, &Unknown6FC);
    FUN_10d67f9a(&Combined, &Translation, &ViewProj);
    FUN_10d681e3(&Combined, &Combined);
    GDirect3DDevice8->SetVertexShaderConstant(1, &Combined, 4);
}
