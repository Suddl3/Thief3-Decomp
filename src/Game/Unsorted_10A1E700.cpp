// Game/Unsorted_10A1E700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A1E700_Field0B4;

class Class_10A1E700_Field288;

class Class_10A1E700
{
public:
    char Unknown00[0x288];
    Class_10A1E700_Field288* Unknown288;
};

class Class_10A1E700_Field288
{
public:
    char Unknown00[0xb4];
    Class_10A1E700_Field0B4* Unknown0B4;
    char Unknown0B8[0x24];
    Class_10A1E700** Unknown0DC;
    int Unknown0E0;
};

class Class_10A1E700_Field0B4
{
public:
    char Unknown00[0x114];
    int* Unknown114;
};

// FUNCTION: 0x10A1E700 ?FUN_10a1e700@@YAHPAVClass_10A1E700@@PAH@Z
int FUN_10a1e700(Class_10A1E700* A, int* Out)
{
    int I = 0;
    Class_10A1E700_Field288* List = A->Unknown288;
    if (!List)
        return I;
    Class_10A1E700_Field0B4* Table = List->Unknown0B4;
    if (!Table)
        return I;
    int Found = -1;
    for (I = 0; I < List->Unknown0E0; I++)
    {
        if (List->Unknown0DC[I] == A)
            Found = I;
    }
    if (Found == -1)
        return 0;
    if (Out)
        *Out = Found;
    return Table->Unknown114[Found];
}
