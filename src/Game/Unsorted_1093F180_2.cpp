// Game/Unsorted_1093F180_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109373D0.h"
#include "Game/Class_10937400.h"
#include "Game/Class_1093F9F0.h"

class cD3DStateCache : public Class_10937400
{
};

extern cD3DStateCache* DAT_10f31be0;

class Class_1093F9F0_Param
{
public:
    char Unknown00[0x64];
    int Unknown64;
};

// FUNCTION: 0x1093F9F0 ?FUN_1093f9f0@Class_1093F9F0@@QAEXPAVClass_1093F9F0_Param@@H@Z
void Class_1093F9F0::FUN_1093f9f0(Class_1093F9F0_Param* Param, int B)
{
    int Kind = Param->Unknown64;
    if (Kind != 3 && Kind != 4 && Kind != 5)
    {
        DAT_10f31be0->SetVertexShader(2);
        DAT_10f31be0->FUN_10937400(0);
        return;
    }
    switch (Kind)
    {
    case 3:
        DAT_10f31be0->SetVertexShader(Unknown174);
        DAT_10f31be0->FUN_10937400(Unknown2EC);
        break;
    case 4:
        DAT_10f31be0->SetVertexShader(Unknown178);
        DAT_10f31be0->FUN_10937400(Unknown2F0);
        return;
    case 5:
        DAT_10f31be0->SetVertexShader(Unknown17C);
        DAT_10f31be0->FUN_10937400(Unknown2F4);
        return;
    }
}
