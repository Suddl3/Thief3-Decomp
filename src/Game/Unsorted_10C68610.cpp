// Game/Unsorted_10C68610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C68610
{
};

class Class_10C68610
{
public:
    void FUN_10c68610();

    int Unknown00;
    Struct_10C68610** Unknown04;
    Struct_10C68610** Unknown08;
};

// FUNCTION: 0x10C68610 ?FUN_10c68610@Class_10C68610@@QAEXXZ
void Class_10C68610::FUN_10c68610()
{
    for (int i = 0; i <= Unknown00; i++)
    {
        delete Unknown04[i];
        delete Unknown08[i];
    }
    delete Unknown04;
    delete Unknown08;
    Unknown04 = 0;
    Unknown08 = 0;
}
