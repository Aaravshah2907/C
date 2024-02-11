#include<stdio.h>
int main()
{
	int number = 0;
	printf("input rows: ");
	scanf("%d", &number);

	for (int i = 1; i<=2*number-1; i++)
		printf("*");

	printf("\n");

	for (int i = 2; i <= number; i++)
	{
		for (int j = 1; j < i; ++j)
			printf(" ");
		printf("*");
		for (int j = 1; j <= (2*number - 3 - 2*(i-1)); ++j)
			printf(" ");
		if (number != i)
			printf("*\n");
		if (number == i)
			printf("\n");
	}
	return 0;
}