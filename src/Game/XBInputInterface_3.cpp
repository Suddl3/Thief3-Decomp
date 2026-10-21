// Game/XBInputInterface_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6C470.h"
#include "Game/IDirectInputDevice8A.h"

extern int DAT_10f3a258[68];

extern "C" void* memset(void* Dest, int Value, unsigned Count);

// Ion Storm's tagged new (0x10905C10) and its placement delete.
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The standard placement new, used to build a range in the block the tagged new returned.
inline void* operator new(unsigned int Size, void* Mem)
{
    return Mem;
}

// The twenty-byte block each input range is allocated in.
struct Struct_10AAEE60
{
    Struct_10AAEE60(float A, float B, float C, float D, int E)
        : Unknown00(A), Unknown04(B), Unknown08(C), Unknown0C(D), Unknown10(E)
    {
    }

    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
    int Unknown10;
};

// Game/XBInputInterface.h copied whole, with the members the constructor writes added.
class XBInputInterface : public Class_10E6C470
{
public:
    XBInputInterface();
    virtual ~XBInputInterface();

    void FUN_10aaf320(int A);
    void FUN_10aae8b0();
    void FUN_10aaf4d0(int A);
    bool GetNormalizedAxis(int A, float* Out);
    unsigned char FUN_10aae350(int A);
    void InitDirectInput();

    unsigned char Unknown810;
    unsigned char Unknown811;
    bool Unknown812;
    char Pad813;
    int Unknown814;
    int Unknown818;
    int Unknown81C;
    IDirectInputDevice8A* Unknown820;
    IDirectInputDevice8A* Unknown824;
    int Unknown828;
    int Unknown82C;
};

// FUNCTION: 0x10AAEE60 ??0XBInputInterface@@QAE@XZ
XBInputInterface::XBInputInterface()
    : Class_10E6C470(), Unknown810(0), Unknown811(0), Unknown812(false), Unknown814(0),
      Unknown818(0), Unknown81C(1), Unknown820(0), Unknown824(0), Unknown828(0), Unknown82C(0)
{
    memset(DAT_10f3a258, 0, sizeof(DAT_10f3a258));

    {
        void* Mem;
        {
            int Tag = 0;
            Mem = ::operator new(sizeof(Struct_10AAEE60), Tag, 0, 0, 0, 0);
        }
        {
            Struct_10AAEE60* Range;
            if (Mem)
            {
                Range = new(Mem) Struct_10AAEE60(45.0f, 75.0f, 45.0f, 75.0f, 0xe0);
            }
            else
            {
                Range = 0;
            }
            cIntArray* List = &Unknown7FC;
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Range;
        }
    }

    {
        void* Mem;
        {
            int Tag = 0;
            Mem = ::operator new(sizeof(Struct_10AAEE60), Tag, 0, 0, 0, 0);
        }
        {
            Struct_10AAEE60* Range;
            if (Mem)
            {
                Range = new(Mem) Struct_10AAEE60(45.0f, 75.0f, 45.0f, 75.0f, 0xe1);
            }
            else
            {
                Range = 0;
            }
            cIntArray* List = &Unknown7FC;
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Range;
        }
    }

    {
        void* Mem;
        {
            int Tag = 0;
            Mem = ::operator new(sizeof(Struct_10AAEE60), Tag, 0, 0, 0, 0);
        }
        {
            Struct_10AAEE60* Range;
            if (Mem)
            {
                Range = new(Mem) Struct_10AAEE60(45.0f, 75.0f, 45.0f, 75.0f, 0xe2);
            }
            else
            {
                Range = 0;
            }
            cIntArray* List = &Unknown7FC;
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Range;
        }
    }

    {
        void* Mem;
        {
            int Tag = 0;
            Mem = ::operator new(sizeof(Struct_10AAEE60), Tag, 0, 0, 0, 0);
        }
        {
            Struct_10AAEE60* Range;
            if (Mem)
            {
                Range = new(Mem) Struct_10AAEE60(45.0f, 75.0f, 45.0f, 75.0f, 0xe3);
            }
            else
            {
                Range = 0;
            }
            cIntArray* List = &Unknown7FC;
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Range;
        }
    }

    {
        void* Mem;
        {
            int Tag = 0;
            Mem = ::operator new(sizeof(Struct_10AAEE60), Tag, 0, 0, 0, 0);
        }
        {
            Struct_10AAEE60* Range;
            if (Mem)
            {
                Range = new(Mem) Struct_10AAEE60(45.0f, 75.0f, 45.0f, 75.0f, 0xe8);
            }
            else
            {
                Range = 0;
            }
            cIntArray* List = &Unknown7FC;
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Range;
        }
    }

    {
        void* Mem;
        {
            int Tag = 0;
            Mem = ::operator new(sizeof(Struct_10AAEE60), Tag, 0, 0, 0, 0);
        }
        {
            Struct_10AAEE60* Range;
            if (Mem)
            {
                Range = new(Mem) Struct_10AAEE60(45.0f, 75.0f, 45.0f, 75.0f, 0xe9);
            }
            else
            {
                Range = 0;
            }
            cIntArray* List = &Unknown7FC;
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Range;
        }
    }
}
