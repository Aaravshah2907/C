#include<stdio.h>
#include<math.h>
int main()
{
double x, y, exp1, exp2;
printf("Enter the value of x: ");
scanf("%lf", &x);
printf("Enter the value of y: ");
scanf("%lf", &y);
exp1 = (exp(x)*sin((60*M_PI)/180)+(5.6*pow(10,-5)))/(3*cos(30*M_PI/180));
exp2 = sin((M_PI + atan(0.33))/(2*y));
printf("Value of Expression 1 = %lf\n", exp1);
printf("Value of Expression 2= %lf\n", exp2);
return 0;
}