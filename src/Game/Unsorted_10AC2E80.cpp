// Game/Unsorted_10AC2E80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class UObject;

template<class C> C* Cast(UObject* Src);

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned Unknown450_0 : 6;
    unsigned Unknown450_6 : 1;
};

class Class_10F3A3D8
{
public:
    char Unknown00[8];
    UObject* Unknown08;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

struct Struct_10AA3520_Unknown10
{
    char Unknown00[0x24];
    int Unknown24;
};

struct Struct_10AA3520
{
    char Unknown00[0x10];
    Struct_10AA3520_Unknown10* Unknown10;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E6F908
{
public:
    virtual void FUN_10ac2e80(int A, int B, int C, int D);

    char Unknown04[0x66];
    bool Unknown6A;
};

// FUNCTION: 0x10AC2E80 ?FUN_10ac2e80@Class_10E6F908@@UAEXHHHH@Z
void Class_10E6F908::FUN_10ac2e80(int A, int B, int C, int D)
{
    if (A == 0x69)
    {
        Unknown6A = true;
        return;
    }
    if (A == 0x6a)
    {
        Unknown6A = false;
        return;
    }
    if (A == 0x7c)
    {
        AGarrett* Garrett = Cast<AGarrett>(DAT_10f3a3d8->Unknown08);
        if (Garrett)
        {
            bool Flag = DAT_10f35dec->Unknown10->Unknown24 == 0;
            Garrett->Unknown450_6 = Flag;
        }
    }
}
