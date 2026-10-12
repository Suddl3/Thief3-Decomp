// Game/AFX.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>

class AFX
{
public:
    AFX();
    void operator delete(void* p);
    static void InternalConstructor(void* p);
};

// FUNCTION: 0x1098E470 ?InternalConstructor@AFX@@SAXPAX@Z
void AFX::InternalConstructor(void* p)
{
    new (p) AFX;
}
