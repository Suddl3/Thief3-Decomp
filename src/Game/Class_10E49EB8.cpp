// Game/Class_10E49EB8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Struct_10932ED0.h"

extern "C" void* memset(void* Dest, int Value, unsigned int Count);

// A stateful allocator: a pool id and the name of the container it serves.
template <class T>
class Allocator_109335C0
{
public:
    typedef T value_type;
    typedef T* pointer;
    typedef const T* const_pointer;
    typedef T& reference;
    typedef const T& const_reference;
    typedef unsigned int size_type;
    typedef int difference_type;

    template <class U>
    struct rebind
    {
        typedef Allocator_109335C0<U> other;
    };

    Allocator_109335C0(int InPool, const char* InName) : Pool(InPool), Name(InName) {}

    template <class U>
    Allocator_109335C0(const Allocator_109335C0<U>& Other) : Pool(Other.Pool), Name(Other.Name) {}

    pointer allocate(size_type Count, const void* Hint = 0);
    void deallocate(pointer Ptr, size_type Count);
    void construct(pointer Ptr, const T& Value);
    void destroy(pointer Ptr);
    size_type max_size() const;
    pointer address(reference X) const;
    const_pointer address(const_reference X) const;

    int Pool;
    const char* Name;
};

// A pool-allocated vector of the game's VBPool classes; its destructor is the game's own.
class Class_1095D6C0 : public std::vector<void*, Allocator_109335C0<void*> >
{
public:
    Class_1095D6C0(const Allocator_109335C0<void*>& Alloc) : std::vector<void*, Allocator_109335C0<void*> >(Alloc) {}
    ~Class_1095D6C0();
};

class Class_10E49D1C
{
public:
    Class_10E49D1C()
    {
        Unknown04 = 0;
        Unknown08 = -1;
        memset(&Unknown10, 0, sizeof(Unknown10));
        Unknown0C = 0;
    }

    virtual ~Class_10E49D1C();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    Struct_10932ED0 Unknown10;
};

class Class_10E49EB8 : public Class_10E49D1C
{
public:
    Class_10E49EB8();

    virtual ~Class_10E49EB8();

    int Unknown1C;
    Class_1095D6C0 m_vecD3DVBs;
    int Unknown34;
    int Unknown38;
    Class_1095D6C0 m_vecVertexBuffers;
    int Unknown50;
    int Unknown54;
    int Unknown58;
};

// FUNCTION: 0x10933880 ??0Class_10E49EB8@@QAE@XZ
Class_10E49EB8::Class_10E49EB8()
    : m_vecD3DVBs(Allocator_109335C0<void*>(0x1b, "VBPoolDynamic::m_vecD3DVBs")),
      m_vecVertexBuffers(Allocator_109335C0<void*>(0x1b, "VBPoolDynamic::m_vecVertexBuffers"))
{
    Unknown1C = 0;
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown58 = 0;
}
