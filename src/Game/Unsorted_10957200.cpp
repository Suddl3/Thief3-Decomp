// Game/Unsorted_10957200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// FUNCTION: 0x10957200 ?FUN_10957200@@YAXPAM@Z
void FUN_10957200(float* Vec)
{
    if (Vec[0] < -359.0f)
        Vec[0] = -359.0f;
    if (Vec[1] < -359.0f)
        Vec[1] = -359.0f;
    if (Vec[2] < -359.0f)
        Vec[2] = -359.0f;
    if (Vec[0] > 359.0f)
        Vec[0] = 359.0f;
    if (Vec[1] > 359.0f)
        Vec[1] = 359.0f;
    if (Vec[2] > 359.0f)
        Vec[2] = 359.0f;
}
