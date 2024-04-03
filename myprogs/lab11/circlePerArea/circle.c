#include "circle.h"

void circleData(float radius[3])
{
    float perimeter = 3.141 * 2 * radius[0];
    float area = 3.141 * radius[0] * radius[0];
    radius[1] = perimeter;
    radius[2] = area;
}