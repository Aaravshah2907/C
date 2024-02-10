#include<stdio.h>
#include<math.h>
int main(){
int x,n;
int power;
printf("Enter the first number (base (x))	: ");
scanf("%d", &x);
printf("Enter the second number	power (n)	: ");
scanf("%d", &n);
power = pow(x,n);
printf("Value of power (x^n) = %d\n",power);
return 0;
}