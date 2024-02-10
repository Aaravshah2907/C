#include<stdio.h>
#include<math.h>
int main(){
double a, b, c, det, x1, x2;
printf("For the quadratic equation ax^2 + bx + c = 0:\n");
printf("Enter the value of a: ");
scanf("%lf", &a);
printf("Enter the value of b: ");
scanf("%lf", &b);
printf("Enter the value of c: ");
scanf("%lf", &c);
det = b*b - 4*a*c;
x1 = (-b + sqrt(det))/(2*a);
x2 = (-b - sqrt(det))/(2*a);
printf("Value of root 1 (x1) = %lf\n", x1);
printf("Value of root 2 (x2) = %lf\n", x2);
return 0;
}