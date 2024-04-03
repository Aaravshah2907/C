#include <stdio.h>
#include "circle.h"

int main(int argc, char const *argv[])
{
    float radius[3];
    printf("Enter radius: ");
    scanf("%f", &radius[0]);
    circleData(radius);
    printf("Perimeter: %f\nArea: %f\n", radius[1], radius[2]);
    return 0;
}
