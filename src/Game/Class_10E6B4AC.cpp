// Game/Class_10E6B4AC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10A66E20.h"

extern void* DAT_10e6b4ac[];

class Class_10EB7660
{
public:
    Class_10EB7660();

    void** VTable;
    int Unknown04;
};

class Class_10E6B4AC : public Class_10EB7660
{
public:
    Class_10E6B4AC* FUN_10a66e20(const Struct_10A66E20& Value);

    Struct_10A66E20 m_Value;
};

// FUNCTION: 0x10A66E20 ?FUN_10a66e20@Class_10E6B4AC@@QAEPAV1@ABUStruct_10A66E20@@@Z
Class_10E6B4AC* Class_10E6B4AC::FUN_10a66e20(const Struct_10A66E20& Value)
{
    this->Class_10EB7660::Class_10EB7660();
    VTable = DAT_10e6b4ac;
    m_Value = Value;
    return this;
}
