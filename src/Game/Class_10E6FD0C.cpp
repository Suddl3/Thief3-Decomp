// Game/Class_10E6FD0C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10E6FD0C.h"

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6FD0C;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6FD0C* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10AC98E0 ??0Class_10E6FD0C@@QAE@XZ
Class_10E6FD0C::Class_10E6FD0C()
{
    Class_10E5D360 Local(0x20076f);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local);
}

// FUNCTION: 0x10AC9A40 ?FUN_10ac9a40@Class_10E6FD0C@@UAEXHHHPAPAH@Z
void Class_10E6FD0C::FUN_10ac9a40(int Unused1, int Value, int Unused3, int** Key)
{
    if (Key[1] && *Key[1] >= 0)
    {
        int Index = *Key[1];
        cIntArray* Array = &Unknown04;
        while (Unknown04.Count < Index + 1)
        {
            int Old = Array->Count;
            Array->SetCount(Old + 1);
            Array->Data[Old] = 0;
        }
        Unknown04.Data[Index] = Value;
        return;
    }
    if (Key[0] && *Key[0] >= 0)
        Unknown04.Data[*Key[0]] = 0;
}
