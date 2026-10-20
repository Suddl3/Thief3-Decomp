// Game/Unsorted_10BB68D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10C04810.h"

class Class_10BAA3C0;

class Class_10EC0808;

class FVector
{
public:
    float x;
    float y;
    float z;
};

// Copied from include/Game/Class_10BB67F0.h.
class Class_10BB67F0
{
public:
    void* FUN_10bb62a0(void* A, int B, void* C, Class_10BAA3C0* D);
    void* FUN_10bb67f0(int B, void* C, Class_10BAA3C0* D);
    void* FUN_10bb7130(void* A, int B, int C, int D, int E, Class_10BAA3C0* F, int G, int H);
    void* FUN_10bb7490(int A, int B, int C, int D, Class_10BAA3C0* E, int F, int G);
    bool FUN_10bb4590(int A, int B, int C);
    void* FUN_10bb6810(int Unused, Class_10EC0808* Owner, int B, void* C, Class_10BAA3C0* D);

    void* Unknown00;
};

// Copied from include/Game/Class_10BB48E0.h, with the base class and the
// methods this call site needs.
class Class_10BB48E0 : public Class_10BB67F0
{
public:
    ~Class_10BB48E0();
    void FUN_10bb4870(void* A, FVector* B);
    Class_10C04810* FUN_10bb4790(FVector* A);
    void FUN_10bb7300(FVector* A, void* B, int C, int D, int E, Class_10BAA3C0* F);

    int Unknown00;
};

void FUN_10bb5a40(int A, FVector* B, void* C, int D, int E, cIntArray* F, float G);

// FUNCTION: 0x10BB7300 ?FUN_10bb7300@Class_10BB48E0@@QAEXPAVFVector@@PAXHHHPAVClass_10BAA3C0@@@Z
void Class_10BB48E0::FUN_10bb7300(FVector* A, void* B, int C, int D, int E, Class_10BAA3C0* F)
{
    void* p = this->FUN_10bb62a0(this->Class_10BB67F0::Unknown00, (int)A, (void*)1, F);
    if (p)
    {
        FVector V;
        cIntArray Arr;
        V.x = A->x;
        V.y = A->y;
        V.z = A->z;
        this->FUN_10bb4870(p, &V);
        FUN_10bb5a40((int)p, &V, B, C, D, &Arr, (float)E);
    }
    else
    {
        Class_10C04810* obj = this->FUN_10bb4790(A);
        if (obj)
        {
            cIntArray Arr2;
            FUN_10bb5a40(obj->FUN_10c04810(0), A, B, C, D, &Arr2, (float)E);
            FUN_10bb5a40(obj->FUN_10c04810(1), A, B, C, D, &Arr2, (float)E);
        }
    }
}
