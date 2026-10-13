// Game/Class_10E6678C_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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

class Class_10E6678C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10a3a430(int Count, Struct_10A3A430* Dst);

    char Unknown04[0xE4];
    int UnknownE8;
    int UnknownEC;
    Class_10A3A430_UnknownF0** UnknownF0;
};

// FUNCTION: 0x10A3A430 ?FUN_10a3a430@Class_10E6678C@@UAEXHPAUStruct_10A3A430@@@Z
void Class_10E6678C::FUN_10a3a430(int Count, Struct_10A3A430* Dst)
{
    memset(Dst, 0, Count * sizeof(Struct_10A3A430));
    if (UnknownE8 == Count)
    {
        for (int i = 0; i < Count; i++)
        {
            int Value = UnknownF0[i]->Virtual4();
            if (Value)
            {
                Dst[i] = *UnknownF0[i]->Virtual5(Value - 1);
            }
        }
    }
}
