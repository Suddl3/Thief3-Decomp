// Game/Unsorted_10934E50_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109373D0.h"

// Class_10937400 copied whole from include/Game/Class_10937400.h, with the base class the calls show.
class Class_10937400 : public Class_109373D0
{
public:
    void FUN_10937400(unsigned long Value);

    char Unknown00[0x6AC];
    unsigned long m_PixelShader;
};

struct Info_10952690
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
};

// cD3DStateCache: the state cache the calls go through.
class cD3DStateCache : public Class_10937400
{
public:
    void FUN_10937280(int A, Info_10952690* Info);
    void FUN_10937140(int A, float* B);
};

extern cD3DStateCache* DAT_10f31be0;

extern float DAT_10e49684;

extern float DAT_10e499a0;

extern unsigned int DAT_10efef9c;

extern unsigned int DAT_10efefa0;

extern int DAT_10efefa8;

extern int DAT_10efefac;

extern int DAT_10efefb0;

class Class_109526D0;

struct Struct_10934FE0;

class Class_10935F00_Arg;

// Class_10E49F90 copied whole from include/Game/Class_10E49F90.h, with the fields the code shows.
class Class_10E49F90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool FUN_10936240(Class_109526D0* Item, int A);
    virtual bool FUN_10934fe0(Struct_10934FE0* P, int B);
    virtual void Virtual7();
    virtual bool FUN_10935f00(Class_10935F00_Arg* A, int B);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void FUN_10934e70(bool A, bool B, float C);

    char Unknown04[0x140];
    unsigned long Unknown144;
    unsigned long Unknown148;
    unsigned long Unknown14C;
    unsigned long Unknown150;
    char Unknown154[0x168];
    unsigned long Unknown2BC;
    unsigned long Unknown2C0;
    unsigned long Unknown2C4;
    unsigned long Unknown2C8;
};

// FUNCTION: 0x10934E70 ?FUN_10934e70@Class_10E49F90@@UAEX_N0M@Z
void Class_10E49F90::FUN_10934e70(bool A, bool B, float C)
{
    Info_10952690 Info;
    if (A)
    {
        if (B)
        {
            DAT_10f31be0->SetVertexShader(Unknown14C);
            DAT_10f31be0->FUN_10937400(Unknown2C4);
            Info.Unknown00 = 0.0f;
            Info.Unknown04 = 0.0f;
            Info.Unknown08 = 0.0f;
            Info.Unknown0C = DAT_10e499a0 / C;
            DAT_10f31be0->FUN_10937280(6, &Info);
        }
        else
        {
            DAT_10f31be0->SetVertexShader(Unknown148);
            DAT_10f31be0->FUN_10937400(Unknown2C0);
        }
    }
    else
    {
        DAT_10f31be0->SetVertexShader(Unknown144);
        DAT_10f31be0->FUN_10937400(Unknown2BC);
    }
    Info.Unknown0C = 1.0f;
    Info.Unknown00 = (float)DAT_10efefa8 * 0.00392;
    Info.Unknown04 = (float)DAT_10efefac * 0.00392;
    Info.Unknown08 = (float)DAT_10efefb0 * 0.00392;
    DAT_10f31be0->FUN_10937280(0, &Info);
    Info.Unknown00 = (float)DAT_10efef9c;
    Info.Unknown04 = (float)DAT_10efefa0;
    unsigned int Diff = DAT_10efefa0 - DAT_10efef9c;
    Info.Unknown08 = DAT_10e49684 / (float)Diff;
    Info.Unknown0C = 0.5f;
    DAT_10f31be0->FUN_10937140(0x1c, (float*)&Info);
}
