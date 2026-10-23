// Game/Class_10E70020_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10E70020.h"

// FUNCTION: 0x10ACC350 ?FUN_10acc350@Class_10E70020@@UAEHHHM@Z
int Class_10E70020::FUN_10acc350(int A, int B, float C)
{
    Class_1098E3D0* Obj = (Class_1098E3D0*)A;
    int Key;
    unsigned char Type;
    ((Class_10971570*)Obj)->FUN_10971570(0x20001fd, (bool*)&Type);
    switch (Type)
    {
    case 2:
        FUN_10acc2d0(A, C);
        break;
    case 4:
    {
        Obj->GetPropertyValue(0x100201, &Key);
        int Value = 1;
        Obj->FUN_1098e3d0(0x800271, &Value);
        Obj->FUN_1098e3d0(0x100272, &Key);
        Virtual7(A);
        break;
    }
    }
    return 0;
}
