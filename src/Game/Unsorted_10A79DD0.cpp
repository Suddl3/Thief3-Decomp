// Game/Unsorted_10A79DD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6bd88[];

class Class_10E6BD88;

struct Struct_10C08690;

class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}
    cIntArray(const cIntArray& Other)
    {
        Unknown00 = m_CapacityBytes = 0;
        Unknown08 = 0;
        CopyFrom(Other);
    }

    void AppendAll(const cIntArray& Other);
    void SetCount(int Count);
    void RemoveAt(int Index);
    int FindIndex(int Item)
    {
        for (int i = 0; i < Count; i++)
        {
            if (Data[i] == Item)
                return i;
        }
        return -1;
    }
    int FindOrAdd(const int* Item);
    void Clear();
    void CopyFrom(const cIntArray& Other);
    void InsertAt(int Index, int* Value);
    cIntArray& operator=(const cIntArray& Other)
    {
        Unknown00 = 0;
        AppendAll(Other);
        return *this;
    }
    int Add(int* Item);
    void DeleteAll();
    void PushFront(const int* Item);
    void AddUnique(int Item);
    void Remove(int Item);
    void FUN_10c08690(Struct_10C08690* Item);

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
    union
    {
        Class_10E6BD88** Unknown08;
        int* Data;
    };
};

struct Struct_10A79DD0Part
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E6BD88
{
public:
    Class_10E6BD88() { VTable = DAT_10e6bd88; }

    void** VTable;
    int Unknown04;
    int Unknown08;
    Struct_10A79DD0Part Unknown0C;
    Struct_10A79DD0Part Unknown18;
};

class Class_10A79DD0
{
public:
    void AddEntry(Struct_10A79DD0Part* A, Struct_10A79DD0Part* B, int* C, int D);

    char Unknown00[4];
    cIntArray m_Entries;
};

// FUNCTION: 0x10A79DD0 ?AddEntry@Class_10A79DD0@@QAEXPAUStruct_10A79DD0Part@@0PAHH@Z
void Class_10A79DD0::AddEntry(Struct_10A79DD0Part* A, Struct_10A79DD0Part* B, int* C, int D)
{
    Class_10E6BD88* Obj = new(0, 0, 0, 0, 0) Class_10E6BD88;
    Obj->Unknown0C = *A;
    Obj->Unknown18 = *B;
    int Value = *C;
    Obj->Unknown08 = D;
    Obj->Unknown04 = Value;
    cIntArray* Array = &m_Entries;
    int Index = Array->Count;
    Array->SetCount(Index + 1);
    Array->Unknown08[Index] = Obj;
}
