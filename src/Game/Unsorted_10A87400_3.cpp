// Game/Unsorted_10A87400_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A86300
{
public:
    void FUN_10a86300(int A);
};

struct Struct_10C32C30
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Entry_10C32C30
{
    Struct_10C32C30* Unknown00;
};

class Class_10C49740
{
public:
    bool FUN_10c49740(int* Key, Entry_10C32C30** Out);
};

struct Struct_10A87A70
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10A87A70* DAT_10f3a1a4;

extern Class_10C49740 DAT_10f3a1ac;

extern Class_10A86300 DAT_10f3a1a0;

// FUNCTION: 0x10A87A70 ?FUN_10a87a70@@YAXH@Z
void FUN_10a87a70(int A)
{
    int Key;
    Entry_10C32C30* Value;
    if (DAT_10f3a1a4)
    {
        int Cur = DAT_10f3a1a4->Unknown08;
        while (Cur != 0)
        {
            if (Cur == A)
                return;
            Key = Cur;
            Entry_10C32C30* Found = DAT_10f3a1ac.FUN_10c49740(&Key, &Value) ? Value : 0;
            Struct_10C32C30* Obj = Found->Unknown00;
            if (!Obj)
                break;
            Cur = Obj->Unknown08;
        }
    }
    DAT_10f3a1a0.FUN_10a86300(A);
}
