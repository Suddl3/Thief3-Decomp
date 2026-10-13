// Game/Unsorted_10C06FF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C07690Arg;

struct Struct_10C06FF0
{
    int Unknown00;
    char Unknown04[4];
    Class_10C07690Arg** Unknown08;
};

class Class_10C07690
{
public:
    bool FUN_10c06ff0(Class_10C07690Arg* A, int* B, int* C);

    char Unknown00[8];
    Struct_10C06FF0 Unknown08[5];
};

// FUNCTION: 0x10C06FF0 ?FUN_10c06ff0@Class_10C07690@@QAE_NPAVClass_10C07690Arg@@PAH1@Z
bool Class_10C07690::FUN_10c06ff0(Class_10C07690Arg* A, int* B, int* C)
{
    for (*B = 0; *B < 5; ++*B)
    {
        Struct_10C06FF0* Entry = &Unknown08[*B];
        int Count = Entry->Unknown00;
        for (*C = 0; *C < Count; ++*C)
        {
            if (Entry->Unknown08[*C] == A)
                return true;
        }
    }
    *C = -1;
    return false;
}
