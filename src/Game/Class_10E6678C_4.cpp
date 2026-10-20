// Game/Class_10E6678C_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6678C.h"

extern "C" void* memset(void*, int, unsigned);

struct Struct_10A3A430
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

class Class_10A3A430_UnknownF0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual Struct_10A3A430* Virtual5(int Index);
};

// FUNCTION: 0x10A3A430 ?FUN_10a3a430@Class_10E6678C@@UAEXHPAUStruct_10A3A430@@@Z
void Class_10E6678C::FUN_10a3a430(int Count, Struct_10A3A430* Dst)
{
    memset(Dst, 0, Count * sizeof(Struct_10A3A430));
    if (m_Items.Count == Count)
    {
        for (int i = 0; i < Count; i++)
        {
            int Value = ((Class_10A3A430_UnknownF0**)m_Items.Data)[i]->Virtual4();
            if (Value)
            {
                Dst[i] = *((Class_10A3A430_UnknownF0**)m_Items.Data)[i]->Virtual5(Value - 1);
            }
        }
    }
}
