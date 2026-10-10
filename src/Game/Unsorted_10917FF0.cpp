// Game/Unsorted_10917FF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

// What Direct3D 8 reports about an adapter: D3DADAPTER_IDENTIFIER8
// (d3d8types.h packs to 4 bytes, so DriverVersion is two dwords here).
struct D3DADAPTER_IDENTIFIER8
{
    char Driver[512];
    char Description[512];
    unsigned long DriverVersionLowPart;
    long DriverVersionHighPart;
    unsigned long VendorId;
    unsigned long DeviceId;
    unsigned long SubSysId;
    unsigned long Revision;
    unsigned char DeviceIdentifier[16];
    unsigned long WHQLLevel;
};

class IDirect3D8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall GetAdapterIdentifier(unsigned int Adapter, unsigned long Flags, D3DADAPTER_IDENTIFIER8* pIdentifier);
};

extern IDirect3D8* GDirect3D8;

class Config
{
public:
    static Config* Instance();
    bool FUN_10910a20(const char* Section, const char* Key, int* Value, int D);
};

class Class_10924100
{
public:
    bool FUN_109228a0(int A, int B);

    char Unknown00[0xC];
    int Unknown0C;
};

class Class_1091E400
{
public:
    bool FUN_10917900(int A, int B);
};

extern Class_10924100* DAT_10f2c740;

extern int DAT_10f2c8c4;

extern Class_1091E400* DAT_10f2c8c0;

// FUNCTION: 0x10917FF0 ?FUN_10917ff0@@YA_NHH@Z
bool FUN_10917ff0(int A, int B)
{
    Class_10924100* Obj = DAT_10f2c740;
    if (Obj && Obj->Unknown0C)
    {
        Class_1091E400* Owner = (Class_1091E400*)DAT_10f2c8c4;
        if (!Owner)
            Owner = DAT_10f2c8c0;
        if (!Owner->FUN_10917900(A, B))
            return false;
        return Obj->FUN_109228a0(A, B);
    }
    return true;
}

// FUNCTION: 0x10918040 ?FUN_10918040@@YAHI@Z
int FUN_10918040(unsigned int Adapter)
{
    D3DADAPTER_IDENTIFIER8 Identifier;
    char Device[32];
    char Vendor[32];
    int Value;
    GDirect3D8->GetAdapterIdentifier(Adapter, 2, &Identifier);
    sprintf(Vendor, "Vendor_%04x", Identifier.VendorId);
    sprintf(Device, "%04x", Identifier.DeviceId);
    Config* Settings = Config::Instance();
    if (Settings->FUN_10910a20(Vendor, Device, &Value, 0))
        return Value;
    if (!Settings->FUN_10910a20(Vendor, "other", &Value, 0))
        return 1;
    return Value;
}
