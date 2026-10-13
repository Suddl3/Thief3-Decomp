// Game/Class_10E4AA80_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
extern float DAT_10e49684;

class Class_10E4AA80
{
public:
    virtual void Update(int A);
    virtual void Virtual1();
    virtual bool FUN_1094c710();

    void FUN_1094ca70(int A);
    float FUN_1094c700();
    void FUN_1094b730();
    void FUN_10948e80();
    void IntegrateOffsets(int A);

    char Unknown04[0x54];
    unsigned char Unknown58;
    char Unknown59[0x3];
    int m_PendingFlags;
    int Unknown60;
    int Unknown64;
    float Unknown68;
    float Unknown6C;
    float Unknown70;
    char Unknown74[0x4];
    float Field78;
    float Unknown7C;
    char Unknown80[0xC];
    float Unknown8C;
};

// FUNCTION: 0x1094C710 ?FUN_1094c710@Class_10E4AA80@@UAE_NXZ
bool Class_10E4AA80::FUN_1094c710()
{
    if (!(Unknown8C < 0.01f) && !(Unknown58 & 0x48))
    {
        float X = Unknown64 != 5 ? Field78 : Unknown7C;
        if (!(X < DAT_10e49684))
        {
            if (Unknown68 < 0.01f)
            {
                if (Unknown6C < 0.01f)
                {
                    if (Unknown70 < 0.01f)
                        return false;
                }
            }
            return true;
        }
    }
    return false;
}
