// Game/UAttachmentLinkDataObject_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AF8A50.h"

class Class_10E55E78
{
public:
    Class_10E55E78();
    ~Class_10E55E78();

    virtual void Virtual0();

    char Unknown04[0x4C];
};

class UAttachmentLinkDataObject : public Class_10E55E78
{
public:
    UAttachmentLinkDataObject();

    Class_10AF8A50 m_attachmentBone;
    Class_10AF8A50 m_parentBone;
};

// FUNCTION: 0x1099F4C0 ??0UAttachmentLinkDataObject@@QAE@XZ
UAttachmentLinkDataObject::UAttachmentLinkDataObject()
{
}
