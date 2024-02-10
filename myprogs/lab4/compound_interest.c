#include<stdio.h>
#include<math.h>
int main(){
double a, b, c, det, x1, x2;
printf("Enter the value of Principal amount (P): ");
scanf("%lf", &a);
printf("Enter the value of  Interest Rate (R): ");
scanf("%lf", &b);
printf("Enter the value of time (t) in years: ");
scanf("%lf", &c);
det = (1 + b/100);
x1 = pow(det, c);
x2 = a * x1;
printf("Value of Amount (A) = %lf\n", x2);
return 0;
}