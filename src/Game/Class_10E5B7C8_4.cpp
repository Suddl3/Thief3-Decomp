// Game/Class_10E5B7C8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10A18FC0.h"
#include "Game/Class_1092D420.h"

struct tagPOINT
{
    long x;
    long y;
};

extern "C" __declspec(dllimport) int __stdcall ClientToScreen(void* hWnd, tagPOINT* lpPoint);

Object_10A18FC0* FUN_10a18fc0();

extern Class_1092D420* DAT_10f31b88;

class Class_109E5000_Unknown98
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual int Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void* Virtual42();
    virtual void Virtual43();
    virtual void Virtual44(int A, int B, int C);

    char Unknown04[0x68];
    int Unknown6C;
    int Unknown70;
};

class Class_10E5B7C8
{
public:
    void FUN_109e5000();

    char Unknown00[0x98];
    Class_109E5000_Unknown98* Unknown98;
    char Unknown9C[0x174];
    int Unknown210;
    int Unknown214;
    int Unknown218;
    int Unknown21C;
};

// FUNCTION: 0x109E5000 ?FUN_109e5000@Class_10E5B7C8@@QAEXXZ
void Class_10E5B7C8::FUN_109e5000()
{
    if (Unknown21C == 0 && Unknown218 == 1)
    {
        Unknown98->Virtual44(0, 0, 0);
        Object_10A18FC0* Object = FUN_10a18fc0();
        Unknown210 = Object->Virtual2();
        Unknown214 = Object->Virtual3();
        int X = Unknown98->Unknown6C / 2;
        int Y = Unknown98->Unknown70 / 2;
        FUN_10a18fc0()->Virtual4(X, Y);
        if (Unknown98->Virtual35() == 0)
        {
            tagPOINT Point;
            Point.x = X;
            Point.y = Y;
            ClientToScreen(Unknown98->Virtual42(), &Point);
            X = Point.x;
            Y = Point.y;
        }
        DAT_10f31b88->FUN_1092d350(X, Y);
        return;
    }
    DAT_10f31b88->FUN_1092d350(-1, -1);
}
