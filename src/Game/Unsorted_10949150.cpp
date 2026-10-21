// Game/Unsorted_10949150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// A point: three coordinates.
struct Struct_10949F60
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

// FUNCTION: 0x10949F60 ?FUN_10949f60@@YGXPAUStruct_10949F60@@00000@Z
void __stdcall FUN_10949f60(Struct_10949F60* Point0, Struct_10949F60* Point1, Struct_10949F60* Point2, Struct_10949F60* Point3, Struct_10949F60* Min, Struct_10949F60* Max)
{
    *Min = *Point0;
    *Max = *Point0;
    if (Point1->Unknown00 < Min->Unknown00) Min->Unknown00 = Point1->Unknown00;
    if (Point2->Unknown00 < Min->Unknown00) Min->Unknown00 = Point2->Unknown00;
    if (Point3->Unknown00 < Min->Unknown00) Min->Unknown00 = Point3->Unknown00;
    if (Point1->Unknown04 < Min->Unknown04) Min->Unknown04 = Point1->Unknown04;
    if (Point2->Unknown04 < Min->Unknown04) Min->Unknown04 = Point2->Unknown04;
    if (Point3->Unknown04 < Min->Unknown04) Min->Unknown04 = Point3->Unknown04;
    if (Point1->Unknown08 < Min->Unknown08) Min->Unknown08 = Point1->Unknown08;
    if (Point2->Unknown08 < Min->Unknown08) Min->Unknown08 = Point2->Unknown08;
    if (Point3->Unknown08 < Min->Unknown08) Min->Unknown08 = Point3->Unknown08;
    if (Point1->Unknown00 > Max->Unknown00) Max->Unknown00 = Point1->Unknown00;
    if (Point2->Unknown00 > Max->Unknown00) Max->Unknown00 = Point2->Unknown00;
    if (Point3->Unknown00 > Max->Unknown00) Max->Unknown00 = Point3->Unknown00;
    if (Point1->Unknown04 > Max->Unknown04) Max->Unknown04 = Point1->Unknown04;
    if (Point2->Unknown04 > Max->Unknown04) Max->Unknown04 = Point2->Unknown04;
    if (Point3->Unknown04 > Max->Unknown04) Max->Unknown04 = Point3->Unknown04;
    if (Point1->Unknown08 > Max->Unknown08) Max->Unknown08 = Point1->Unknown08;
    if (Point2->Unknown08 > Max->Unknown08) Max->Unknown08 = Point2->Unknown08;
    if (Point3->Unknown08 > Max->Unknown08) Max->Unknown08 = Point3->Unknown08;
}
