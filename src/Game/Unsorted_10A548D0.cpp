// Game/Unsorted_10A548D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10A548D0_Color
{
    Struct_10A548D0_Color() {}
    Struct_10A548D0_Color(float A, float B, float C)
    {
        Unknown00 = A;
        Unknown04 = B;
        Unknown08 = C;
    }

    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Class_109785A0
{
public:
    Class_109785A0() { Unknown44 = 0; }
    ~Class_109785A0()
    {
        if (Unknown44)
        {
            char* Block = Unknown44 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown44 = 0;
        }
    }

    int Unknown00;
    char Unknown04[0x18];
    Struct_10A548D0_Color Unknown1C;
    int Unknown28;
    float Unknown2C;
    char Unknown30[0x08];
    float Unknown38;
    char Unknown3C[0x04];
    char Unknown40;
    char Unknown41[0x03];
    char* Unknown44;
    char Unknown48[0x20];
};

class Class_1094D430
{
public:
    void FUN_1094d430();
    void FUN_1094cb10(int A, Class_109785A0* B);
};

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class Class_10E5B588 : public Class_10E67FD0
{
public:
    ~Class_10E5B588();
    void FUN_10a548d0();

    char Unknown04[0x114];
    unsigned char Unknown118;
    unsigned char Unknown119;
    unsigned char Unknown11A;
    unsigned char Unknown11B;
    int Unknown11C;
    float Unknown120;
    Class_1094D430* Unknown124;
    float Unknown128;
};

// FUNCTION: 0x10A548D0 ?FUN_10a548d0@Class_10E5B588@@QAEXXZ
void Class_10E5B588::FUN_10a548d0()
{
    Class_109785A0 Desc;
    if (Unknown124)
    {
        Desc.Unknown1C = Struct_10A548D0_Color((float)Unknown11A * 0.00392156862745f,
                                              (float)Unknown119 * 0.00392156862745f,
                                              (float)Unknown118 * 0.00392156862745f);
        Unknown124->FUN_1094cb10(0x10, &Desc);
        Desc.Unknown28 = Unknown11C;
        Unknown124->FUN_1094cb10(0x20, &Desc);
        Desc.Unknown2C = Unknown120;
        Unknown124->FUN_1094cb10(0x40, &Desc);
        Desc.Unknown38 = Unknown128;
        Unknown124->FUN_1094cb10(0x200, &Desc);
        Desc.Unknown40 = 0;
        Unknown124->FUN_1094cb10(0x800, &Desc);
        Desc.Unknown00 = 3;
        Unknown124->FUN_1094cb10(2, &Desc);
    }
}
