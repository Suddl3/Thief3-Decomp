// Game/Unsorted_10936A60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10937400
{
public:
    void FUN_10937400(unsigned long Shader);

    char Unknown00[0x6AC];
    unsigned long Unknown6AC;
};

// FUNCTION: 0x10937400 ?FUN_10937400@Class_10937400@@QAEXK@Z
void Class_10937400::FUN_10937400(unsigned long Shader)
{
    if (Unknown6AC != Shader)
    {
        GDirect3DDevice8->SetPixelShader(Shader);
        Unknown6AC = Shader;
    }
}
