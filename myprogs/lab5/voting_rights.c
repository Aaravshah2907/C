#include <stdio.h>
int main()
{
	int age;
	printf("Enter a decision (user age): ");
	scanf("%d", &age);
	(age>=18)?printf("Elligible\n"):printf("Not Elligible\n");
	return 0;
}