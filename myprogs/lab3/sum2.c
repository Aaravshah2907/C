#include<stdio.h>
int main()
{
int num1, num2, num3;
printf("Please enter first number: ");
scanf("%d", &num1); // captures an integer value and stores in num1
printf("Please enter the second number:");
scanf("%d", &num2); // captures an integer value and stores in num2
num3 = num1 + num2; // computing the sum of num1 and num2
printf("The sum is: %d \n", num3); // printing the sum
return 0;
}