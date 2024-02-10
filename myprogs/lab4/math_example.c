#include<stdio.h>
#include<math.h>
int main()
{
int a = 4;
double b = sqrt((double)a);
/* Computes square root of “a” after converting it into a double
variable */
printf("Printing the value of square root of a: %lf \n", b);
double angle = 2.3; // angle in radians
double c = sin(angle);
printf("Sin %lf is: %lf \n", angle, c);
return 0;
}