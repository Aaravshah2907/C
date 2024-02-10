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
num3 = num1 - num2; // computing the difference of num1 and num2
printf("The difference is: %d \n", num3); // printing the difference
num3 = num1 * num2; // computing the product of num1 and num2
printf("The product is: %d \n", num3); // printing the product
num3 = num1 / num2; // computing the division of num1 and num2
printf("The integer quotient is: %d \n", num3); // printing the integer quotient
num3 = num1 % num2; // computing the remainder of num1 and num2
printf("The remainder is: %d \n", num3); // printing the remainder
return 0;
}