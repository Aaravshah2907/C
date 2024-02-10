#include<stdio.h>
int main(){
char a, b;
int sum;
printf("Enter the first letter	: ");
scanf(" %c", &a);
printf("Enter the second letter	: ");
scanf(" %c", &b);
sum = (int)a + (int)b;
printf("Value of sum = %d\n",sum);
return 0;
}